//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P28_H
#define FISHC_CPP_P28_H

#endif //FISHC_CPP_P28_H

#include <iostream>
#include <string>

using namespace std;


// ���� �Ӽ��˳� ʵ��������������
class Rational_p28{
public:
    // ���ӣ���ĸ
    Rational_p28(int n, int d){
        numerator = n;
        denominator = d;
        normalize();
    };
    // rhs right hand side
    Rational_p28 operator + (Rational_p28 rhs){
        int n = numerator * rhs.denominator + denominator * rhs.numerator;
        int d = denominator * rhs.denominator;
        return {n, d};
    };
    Rational_p28 operator - (Rational_p28 rhs){
        //        int n = numerator * rhs.denominator - denominator * rhs.numerator;
        //        int d = denominator * rhs.denominator;
        //        return {n, d};
        rhs.numerator = -rhs.numerator;
        return operator + (rhs);
    };
    Rational_p28 operator * (Rational_p28 rhs){
        int n = numerator * rhs.numerator;
        int d = denominator * rhs.denominator;
        return {n, d};
    };
    Rational_p28 operator / (Rational_p28 rhs){
        Rational_p28 temp(rhs.denominator, rhs.numerator);
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

    // ���� << ������
    friend ostream & operator << (ostream &os, Rational_p28 f);

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


ostream & operator << (ostream &os, Rational_p28 f){
    if (f.numerator % f.denominator == 0)
        os << f.numerator / f.denominator;
    else
        os << f.numerator << "/" << f.denominator;
    return os;
}


void f28_e1(){
    Rational_p28 f1(2, 16);
    Rational_p28 f2(7, 8);

    cout << f1 << " + " << f2 << " = " << (f1 + f2) << endl;

    cout << f1 << " - " << f2 << " = " << (f1 - f2) << endl;

    cout << f1 << " * " << f2 << " = " << (f1 * f2) << endl;

    cout << f1 << " / " << f2 << " = " << (f1 / f2) << endl;

}

void f28(){
    f28_e1();
}
