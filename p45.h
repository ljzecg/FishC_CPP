//
// Created by yangce on 2021/9/1.
//

#ifndef FISHC_CPP_P45_H
#define FISHC_CPP_P45_H


#include <iostream>
#include <string>
using namespace std;


// 函数模板
template <class T>
void swap_p45(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

void f45(){
    int i1 = 100;
    int i2 = 200;
    cout << "交换前，i1 = " << i1 << "，i2 = " << i2 << endl;
    swap_p45(i1, i2);
    cout << "交换后，i1 = " << i1 << "，i2 = " << i2 << endl;

    string s1 = "abc";
    string s2 = "xyz";
    cout << "交换前，s1 = " << s1 << "，s2 = " << s2 << endl;
    swap_p45(s1, s2);
    cout << "交换后，s1 = " << s1 << "，s2 = " << s2 << endl;

}

#endif //FISHC_CPP_P45_H