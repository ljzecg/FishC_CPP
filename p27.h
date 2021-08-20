//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P27_H
#define FISHC_CPP_P27_H

#endif //FISHC_CPP_P27_H

#include <iostream>
#include <string>

// ���� �Ӽ��˳� ʵ��������������
class Rational_p27{
public:
    // ���ӣ���ĸ
    Rational_p27(int n, int d){
        numerator = n;
        denominator = d;
        normalize();
    };
    // rhs right hand side
    Rational_p27 operator + (Rational_p27 rhs){
        int n = numerator * rhs.denominator + denominator * rhs.numerator;
        int d = denominator * rhs.denominator;
        return {n, d};
    };
    Rational_p27 operator - (Rational_p27 rhs){
//        int n = numerator * rhs.denominator - denominator * rhs.numerator;
//        int d = denominator * rhs.denominator;
//        return {n, d};
        rhs.numerator = -rhs.numerator;
        return operator + (rhs);
    };
    Rational_p27 operator * (Rational_p27 rhs){
        int n = numerator * rhs.numerator;
        int d = denominator * rhs.denominator;
        return {n, d};
    };
    Rational_p27 operator / (Rational_p27 rhs){
        Rational_p27 temp(rhs.denominator, rhs.numerator);
        return operator * (temp);
    };

    void print(){
        if (numerator % denominator == 0){
            cout << numerator / denominator;
        }
        else{
            cout << numerator << "/" << denominator;
        }

    };

private:
    // ����
    void normalize(){
        // ֻ�������Ϊ�����������ĸΪ��������Ѹ���Ų�����Ӳ���
        if (denominator < 0){
            numerator = -numerator;
            denominator = -denominator;
        }
        // ����ŷ������㷨��շת����ԭ�������������м򻯣�2 / 10 = 1 / 5
        int a = abs(numerator);
        int b = abs(denominator);

        while (b > 0){
            int temp = a % b;
            a = b;
            b = temp;
        }
        numerator /= a;
        denominator /= a;
    };

    int numerator;
    int denominator;
};


void f27_e1(){
    Rational_p27 f1(2, 16);
    Rational_p27 f2(7, 8);
    Rational_p27 res = f1 + f2;
    f1.print();
    cout << " + ";
    f2.print();
    cout << " = ";
    res.print();
    cout << endl;

    res = f1 - f2;
    f1.print();
    cout << " - ";
    f2.print();
    cout << " = ";
    res.print();
    cout << endl;

    res = f1 * f2;
    f1.print();
    cout << " * ";
    f2.print();
    cout << " = ";
    res.print();
    cout << endl;

    res = f1 / f2;
    f1.print();
    cout << " / ";
    f2.print();
    cout << " = ";
    res.print();
    cout << endl;

}


void f27(){
    f27_e1();
}