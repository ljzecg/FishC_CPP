//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P9_H
#define FISHC_CPP_P9_H

#include <iostream>
#include <string>

using namespace std;

void f9_e1(){
    int a = 123;
    float b = 3.14;
    char c = 'C';
    unsigned long d = 19880808;
    string e = "I love FishC!";

    cout << "a ��ֵΪ��" << a << endl;
    cout << "b ��ֵΪ��" << b << endl;
    cout << "c ��ֵΪ��" << c << endl;
    cout << "d ��ֵΪ��" << d << endl;
    cout << "e ��ֵΪ��" << e << endl;

    int *aPointer = &a;
    float *bPointer = &b;
    char *cPointer = &c;
    unsigned long *dPointer = &d;
    string *ePointer = &e;

    *aPointer = 456;
    *bPointer = 4.13;
    *cPointer = 'F';
    *dPointer = 20111124;
    *ePointer = "I love Beauty!";

    cout << "a ��ֵΪ��" << a << endl;
    cout << "b ��ֵΪ��" << b << endl;
    cout << "c ��ֵΪ��" << c << endl;
    cout << "d ��ֵΪ��" << d << endl;
    cout << "e ��ֵΪ��" << e << endl;
}


void f9(){
    f9_e1();
}

#endif //FISHC_CPP_P9_H