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
    // ֵ����
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
    // ���ô���
    // ���� & ʹ�βγ�Ϊ���ñ���
    // ע�⣬& ���ű��������ʹ�����ñ�����Ϊ�βε��κκ�����ԭ�ͺͺ���ͷ�С�����������ں���������
    int temp;
    temp = x;
    x = y;
    y = temp;
}


void swap_2(int *x, int *y){
    // ��ַ����

    // ���ʵ�ֽ��������ܡ����ܣ�
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
