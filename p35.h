//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P35_H
#define FISHC_CPP_P35_H

#endif //FISHC_CPP_P35_H

#include <iostream>

using namespace std;


void f35_e1(){

    int a[20] = {0};
    int *x = a;

    cout << a[0] << endl;
    cout << *x << endl;

    cout << a[1] << endl;
    cout << *(x + 1) << endl;
}


void f35_e2(){

    int *x = new int[10];
    x[1] = 45;
    x[2] = 8;

    int count = 10;
    int *y = new int[count];

    // É¾³ý¶¯Ì¬Êý×é
    delete []x;
    delete []y;
}


void f35(){
    f35_e1();
    f35_e2();
}