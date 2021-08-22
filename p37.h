//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P37_H
#define FISHC_CPP_P37_H

#endif //FISHC_CPP_P37_H

#include <iostream>

using namespace std;

/*
 * 副本构造器
 */


class C_p37{
public:
    C_p37(int *p){
        this->ptr = p;
    };

    ~C_p37(){
        delete ptr;

    }

    C_p37 & operator = (const C_p37 &rhs){
        if (this != &rhs){
            delete ptr;

            ptr = new int;
            *ptr = *rhs.ptr;
        }else{
            cout << "赋值号两边为同个对象，不作处理！" << endl;
        }
        return *this;
    };

    void print();

private:
    int *ptr;
};



void f37_e1(){

}


void f37(){
    f37_e1();

}