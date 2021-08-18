//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P12_H
#define FISHC_CPP_P12_H

#endif //FISHC_CPP_P12_H


#include <iostream>
#include <string>

using namespace std;

void changeAge(int age, int newAge){
    // 值传递
    age = newAge;
    cout << "In function, my age is " << age << endl;
}

void changeAge(int *age, int newAge){
    *age = newAge;
    cout << "In function, my age is " << *age << endl;
}

void f12_e1(){
    int age = 24;
    cout << "My age is " << age << endl;

//    changeAge(age, age + 1);
    changeAge(&age, age + 1);

    cout << "Now my age is " << age << endl;

}

void swap_1(int &x, int &y){
    // 引用传递
    // 加了 & 使形参成为引用变量
    // 注意，& 符号必须出现在使用引用变量作为形参的任何函数的原型和函数头中。它不会出现在函数调用中
    int temp;
    temp = x;
    x = y;
    y = temp;
}


void swap_2(int *x, int *y){
    // 地址传递

    // 异或，实现交换（加密、解密）
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}


void f12_e2(){
    int a, b;

    a = 1;
    b = 2;
    swap_1(a, b);
    cout << "a: " << a << " b: " << b << endl;

    a = 1;
    b = 2;
    swap_2(&a, &b);
    cout << "a: " << a << " b: " << b << endl;

}


void f12(){
//    f12_e1();
    f12_e2();
}
