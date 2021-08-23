//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P32_H
#define FISHC_CPP_P32_H


#include <iostream>
#include <string>

using namespace std;


// 循环方法求阶乘
unsigned long iterate_Factorial(unsigned short num){
    unsigned long sum = 1;
    for (int i = 1; i <= num; i++){
        sum *= i;
    }
    return sum;
}

// 递归方法求阶乘
unsigned long recurse_Factorial(unsigned short num){
    if (num <= 1)
        return 1;
    return recurse_Factorial(num - 1) * num;
}


#include <climits>


class Factorial_p32{
public:
    Factorial_p32(unsigned short num){
        this->num = num;
    };

    unsigned long getFactorial(){
        unsigned long sum = 0;
        for (int i = 1; i <= num; i++){
            sum *= i;
        }
        return sum;
    };

    bool inRange(){
        unsigned long max = ULONG_MAX;
        for (int i = num; i >= 1; i--){
            max /= i;
        }
        if (max < 1){
            return false;
        }else{
            return true;
        }
    };

private:
    unsigned short num;
};


void f32_e1(){

    unsigned short a = 13;
    cout << "迭代法求阶乘：" << a << "! = " << iterate_Factorial(a) << endl;
    cout << "递归法求阶乘：" << a << "! = " << recurse_Factorial(a) << endl;

    Factorial_p32 fac(a);
    if (fac.inRange()){
        cout << "类：" << "迭代法求阶乘：" << a << "! = " << fac.getFactorial() << endl;
    }else{
        cout << "a! 超范围" << endl;
    }

}


void f32(){
    f32_e1();

}
#endif //FISHC_CPP_P32_H