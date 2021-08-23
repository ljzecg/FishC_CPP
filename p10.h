//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P10_H
#define FISHC_CPP_P10_H


#include <iostream>
#include <string>

using namespace std;

void f10_e1(){

    //    int myArray[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    //
    //    int *ptr1 = &myArray[0];
    //    int *ptr2 = myArray;
    //
    //    cout << ptr1 << endl;
    //    cout << ptr2 << endl;
    //
    //    cout << *ptr1 << endl;
    //    cout << *ptr2 << endl;
    //
    //    cout << *(ptr1 + 1) << endl;
    //    cout << *(ptr++) << endl;

    const unsigned short ITEMS = 5;

    int intArray[ITEMS] = {1, 2, 3, 4, 5};
    char charArray[ITEMS] = {'F', 'i', 's', 'h', 'C'};

    int *intPtr = intArray;
    char *charPtr = charArray;

    cout << "整形数组输出：" << endl;
    for (int i = 0; i < ITEMS; i++){
        // 地址格式强制转变
        //        cout << *intPtr << " at " << intPtr << endl;
        cout << *intPtr << " at " << reinterpret_cast<unsigned long>(intPtr) << endl;
        intPtr++;
    }

    cout << "字符数组输出：" << endl;
    for (int i = 0; i < ITEMS; i++){
        // 地址格式强制转变
        //        cout << *charPtr << " at " << charPtr << endl;
        cout << *charPtr << " at " << reinterpret_cast<unsigned long>(charPtr) << endl;
        charPtr++;
    }
}

//void print(int *pBegin, int *pEnd){
//    while (pBegin != pEnd){
//        cout << *pBegin;
//        ++pBegin;
//    }
//}
//
//void print(char *pBegin, char *pEnd){
//    while (pBegin != pEnd){
//        cout << *pBegin;
//        ++pBegin;
//    }
//}

// 模版，泛型程序设计
template<typename name>
void print(name *pBegin, name *pEnd){
    while (pBegin != pEnd){
        cout << *pBegin;
        ++pBegin;
    }
}


void f10_e2(){
    int num[5] = {6, 5, 4, 3, 2};
    char name[5] = {'F', 'i', 's', 'h', 'C'};

    // 函数重载使用
    print(num, num + 5);
    cout << endl;

    print(name, name + 5);
    cout << endl;
}


void f10(){
    //    f10_e1();
    f10_e2();
}
#endif //FISHC_CPP_P10_H