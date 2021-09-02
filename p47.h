//
// Created by yangce on 2021/9/2.
//

#ifndef FISHC_CPP_P47_H
#define FISHC_CPP_P47_H


#include <iostream>
#include <string>
using namespace std;

// ����ģ��
inline int add_p47(int x, int y, int z){
    return x + y + z;
}

template <class T>
class Stack_p47{
public:
    Stack_p47(unsigned int size = 100){
        // ��ʼ������
        this->size = size;
        // Ĭ��ָ��ջ��
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
    // ջ���������
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
