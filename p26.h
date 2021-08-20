//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P26_H
#define FISHC_CPP_P26_H

#endif //FISHC_CPP_P26_H

#include <iostream>
#include <string>

using namespace std;

// 运算符重载
class Complex_p26{
public:
    Complex_p26(){
        real = 0;
        imag = 0;
    };

    Complex_p26(double r, double i){
        real = r;
        imag = i;
    };

    Complex_p26 complex_add(Complex_p26 &d){
        Complex_p26 c;
        c.real = real + d.real;
        c.imag = imag + d.imag;
        return c;
    };

//    Complex_p26 operator + (Complex_p26 &d){
//        Complex_p26 c;
//        c.real = real + d.real;
//        c.imag = imag + d.imag;
//        return c;
//    };

    // 或：
    Complex_p26 operator + (Complex_p26 &c2){
        return Complex_p26(real + c2.real, imag + c2.imag);
    };

//    // 运算符重载函数 作为 类友元函数 （不推荐！！！）
//    // 因为运算符函数要访问 Complex类对象的成员，如果运算符函数不是 Complex类的友元函数
//    // 而是一个普通的函数，它是没有权力访问 Complex类的私有成员的！！！
//    friend Complex_p26 operator + (Complex_p26 &c, Complex_p26 &d){
//        return Complex_p26(c.real + d.real, c.imag + d.imag);
//    };

    void print(){
        cout << "(" << real << ", " << imag << "i)" << endl;
    };

private:
    double real;
    double imag;
};


void f26_e1(){

    Complex_p26 c1(3, 4), c2(5, -10), c3;

//    c3 = c1.complex_add(c2);
    c3 = c1 + c2;
    cout << 1 + 2 << endl;

    cout << "c1 = ";
    c1.print();

    cout << "c2 = ";
    c2.print();

    cout << "c3 = ";
    c3.print();

}


void f26(){
    f26_e1();
}