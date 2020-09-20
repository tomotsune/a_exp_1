#pragma once

#include <iostream>

/**
 * 动态线性表
 * @tparam T
 */
template<typename T>
class List {
private:
    static const int DEFAULT_SIZE{100};
    T *head;
    int length{};
    int listsize{};
public:
    List();

    explicit List(int listsize);

    ~List();

    void add(const T &data);

    void insert(const T &data, const int &pos);

    void remove(const int &pos);

    int getLength() const;

    int getListsize() const;

    friend std::ostream &operator<<(std::ostream &os, const List<T> &list) {
        for (int i = 0; i < list.length; ++i) {
            os << list.head[i] << " ";
        }
        return os;
    }

};

template<typename T>
inline List<T>::List():listsize(DEFAULT_SIZE) {
    head = new T[DEFAULT_SIZE];
}

template<typename T>
List<T>::List(int listsize):listsize(listsize) {
    head = new T[listsize];
}

template<typename T>
inline List<T>::~List() {
    delete[] head;
}

template<typename T>
void List<T>::add(const T &data) {
    head[length++] = data;
}

template<typename T>
inline void List<T>::insert(const T &data, const int &pos) {
    if (pos < 0 || pos > length)return;
    if (++length > listsize) {
        listsize += 8;
        auto temp = new T[listsize];
        for (int i = 0; i < length; ++i) {
            temp[i] = head[i];
        }
        delete head;
        head = temp;
    }
    for (int i = length; i > pos; --i) {
        head[i] = head[i - 1];
    }
    head[pos] = data;
}

template<typename T>
inline void List<T>::remove(const int &pos) {
    if (pos < 0 || pos > length - 1)return;
    for (int i = pos; i < length; ++i) {
        head[i] = head[i + 1];
    }
    --length;
}


template<typename T>
int List<T>::getListsize() const {
    return listsize;
}


template<typename T>
int List<T>::getLength() const {
    return length;
}



