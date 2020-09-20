#include <iostream>
/**
 * 实验题目: 顺序存储的线性表.
 * created: 2020.9.17
 */
#include "list.h"
#include <iostream>

using namespace std;

int main() {
    cout<<"------START------"<<endl;
    cout<<"test adding elements:"<<endl;
    List<int> list_1{3};
    list_1.add(0);
    list_1.add(1);
    list_1.add(2);
    cout << list_1 << endl;
    cout << "Listsize: " << list_1.getListsize() << endl;
    cout << "length: " << list_1.getLength() << endl;
    cout<<"------END------"<<endl;

    cout<<"test inserting elements"<<endl;
    list_1.insert(3, 3);
    cout << list_1 << endl;
    cout << "Listsize: " << list_1.getListsize() << endl;
    cout << "length: " << list_1.getLength() << endl;
    cout<<"------END------"<<endl;

    cout<<"test removing elements"<<endl;
    list_1.remove(1);
    cout << list_1 << endl;
    cout << "Listsize: " << list_1.getListsize() << endl;
    cout << "length: " << list_1.getLength() << endl;
    cout<<"------END------"<<endl;

    cout<<"test reverse"<<endl;
    cout<<list_1.reverse()<<endl;
    return 0;
}
