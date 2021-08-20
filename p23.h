//
// Created by Ce Yang on 2021/8/19.
//

#ifndef FISHC_CPP_P23_H
#define FISHC_CPP_P23_H

#endif //FISHC_CPP_P23_H

#include <iostream>
#include <string>

using namespace std;

// 静态成员是所有对象共享的，所以不能在静态方法里访问非静态的元素

// 非静态方法可以访问类的静态成员，也可以访问类的非静态成员

class Pet_p23{
public:
    Pet_p23(string theName);
    ~Pet_p23();

    // static 关键字
    static int getCount();

protected:
    string name;

private:
    static int count;
};


// 做两件事！分配内存；初始化为0
int Pet_p23::count = 0;

Pet_p23::Pet_p23(string theName) {
    name = theName;
    count++;
    cout << "Pet构造函数，创建了一个宠物，名字是：" << name << endl;
    cout << "Pet构造函数的this指针：" << this << endl;
}

Pet_p23::~Pet_p23() {
    count--;
    cout << "一个宠物消失了，名字是：" << this->name << endl;
}


int Pet_p23::getCount() {
    cout << "现在有 " << count << " 只宠物！" << endl;
    return count;
}


class Dog_p23: public Pet_p23{
public:
    Dog_p23(string theName);
};

Dog_p23::Dog_p23(string theName) : Pet_p23(theName){
    cout << "小狗的构造函数：小狗名字：" << name << endl;
    cout << "小狗，this指针:" << this << endl;

}


class Cat_p23: public Pet_p23{
public:
    Cat_p23(string theName);
};

Cat_p23::Cat_p23(string theName) : Pet_p23(theName){
    cout << "小猫的构造函数：小猫名字：" << name << endl;
    cout << "小猫，this指针:" << this << endl;
}



void f23_e1(){

    Dog_p23 d("旺财");
    cout << "dog对象的指针："<< &d << endl;


    Cat_p23 c("咪咪");
    cout << "cat对象的指针：" << &c << endl;

}



void f23(){
    f23_e1();

}