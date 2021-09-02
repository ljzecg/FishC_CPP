//
// Created by yangce on 2021/9/2.
//

#ifndef FISHC_CPP_P47_H
#define FISHC_CPP_P47_H


#include <iostream>
#include <string>
using namespace std;

// 内联模版
inline int add_p47(int x, int y, int z){
    return x + y + z;
}

template <class T>
class Stack_p47{
public:
    Stack_p47(unsigned int size = 100){
        // 初始化操作
        this->size = size;
        // 默认指向栈顶
        sp = 0;
        data = new T[size];
    };

    ~Stack_p47(){
        delete []data;
    };

    void push(T value){
        data[sp++] = value;
    };

    T pop(){
        return data[--sp];
    };

private:
    unsigned int size;
    unsigned int sp;
    // 栈，存放数据
    T *data;
};


template <class T, class U>
class MyClass_p47{
    //
};

void f47(){
    MyClass_p47<int, float> myClass;
}


#endif //FISHC_CPP_P47_H
