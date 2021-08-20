//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P26_H
#define FISHC_CPP_P26_H

#endif //FISHC_CPP_P26_H

#include <iostream>
#include <string>

using namespace std;

// ���������
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

    // ��
    Complex_p26 operator + (Complex_p26 &c2){
        return Complex_p26(real + c2.real, imag + c2.imag);
    };

//    // ��������غ��� ��Ϊ ����Ԫ���� �����Ƽ���������
//    // ��Ϊ���������Ҫ���� Complex�����ĳ�Ա������������������ Complex�����Ԫ����
//    // ����һ����ͨ�ĺ���������û��Ȩ������ Complex���˽�г�Ա�ģ�����
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