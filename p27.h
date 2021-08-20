//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P27_H
#define FISHC_CPP_P27_H

#endif //FISHC_CPP_P27_H

#include <iostream>
#include <string>

// 重载 加减乘除 实现有理数的运算
class Rational_p27{
public:
    // 分子，分母
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
    // 化简
    void normalize(){
        // 只允许分子为负数！如果分母为负数，则把负数挪到分子部分
        if (denominator < 0){
            numerator = -numerator;
            denominator = -denominator;
        }
        // 利用欧几里得算法（辗转求余原理），将分数进行简化，2 / 10 = 1 / 5
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