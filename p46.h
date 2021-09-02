//
// Created by yangce on 2021/9/1.
//

#ifndef FISHC_CPP_P46_H
#define FISHC_CPP_P46_H


#include <iostream>

using namespace std;

// 类模板
template <class T>
class Stack_p46 {
public:
    Stack_p46(unsigned int size = 100);
    ~Stack_p46();
    void push(T value);
    T pop();

private:
    unsigned int size;
    unsigned int sp;
    // 栈，存放数据
    T *data;
};

template<class T>
Stack_p46<T>::Stack_p46(unsigned int size) {
    // 初始化操作
    this->size = size;
    // 默认指向栈顶
    this->sp = 0;
    this->data = new T[size];
}

template<class T>
Stack_p46<T>::~Stack_p46() {
    delete []data;
}

template<class T>
void Stack_p46<T>::push(T value) {
    data[sp++] = value;
}

template<class T>
T Stack_p46<T>::pop() {
    return data[--sp];
}


void f46(){

    Stack_p46<int> intStack(5);

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    cout << intStack.pop() << endl;
    cout << intStack.pop() << endl;
    cout << intStack.pop() << endl;
}











#endif //FISHC_CPP_P46_H
