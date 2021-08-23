//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P24_H
#define FISHC_CPP_P24_H


#include <iostream>
#include <string>

using namespace std;

// virtual 虛方法
// 析构器，都是虚方法

// new

// delete

/*
在C和C++中，我们完全可以在没有创建变量的情况下为有关数据分配内存
也就是直接创建一个指针并让它只想新分配的内存块
 */


class Pet_p24{
public:
    Pet_p24(string theName);
    ~Pet_p24();

    void eat();
    void sleep();
    virtual void play();

protected:
    string name;
};


Pet_p24::Pet_p24(string theName) {
    name = theName;
    cout << "Pet的构造函数：创建了一个宠物，名字是：" << name << endl;
}

Pet_p24::~Pet_p24() {
    cout << "一个宠物消失了，名字是：" << name << endl;
}

void Pet_p24::eat() {
    cout << "pet " << name << " 在 eat" << endl;
}

void Pet_p24::sleep() {
    cout << "pet " << name << " 在 sleep" << endl;
}

void Pet_p24::play() {
    cout << "pet " << name << " 在 play" << endl;
}




class Dog_p24: public Pet_p24{
public:
    Dog_p24(string theName);

    void bark();
    void play();
};

Dog_p24::Dog_p24(string theName) : Pet_p24(theName){
    cout << "小狗的构造函数：小狗名字：" << name << endl;
}

void Dog_p24::bark() {
    cout << "dog " << name << " 在 bark" << endl;
}

void Dog_p24::play() {
    Pet_p24::play();
    cout << "狗 " << name << " 在 玩自己" << endl;
}


class Cat_p24: public Pet_p24{
public:
    Cat_p24(string theName);

    void climb();
    void play();
};

Cat_p24::Cat_p24(string theName) : Pet_p24(theName){
    cout << "小猫的构造函数：小猫名字：" << name << endl;
}

void Cat_p24::climb() {
    cout << "猫 " << name << " 在 climb" << endl;
}

void Cat_p24::play() {
    Pet_p24::play();
    cout << "猫 " << name << " 在 玩自己" << endl;
}


void f24_e1(){
    int *pointer = new int;
    *pointer = 110;
    cout << *pointer << endl;
    delete pointer;
}

void f24_e2(){
    Pet_p24 *cat = new Cat_p24("小猫");
    Pet_p24 *dog = new Dog_p24("小狗");
    Cat_p24 *cat2 = new Cat_p24("小猫2");

    cat->sleep();
    cat->eat();
    cat->play();

    dog->sleep();
    dog->eat();
    dog->play();

    cat2->sleep();
    cat2->eat();
    cat2->play();

    delete cat;
    delete dog;
    delete cat2;

}


void f24(){
    //    f24_e1();
    f24_e2();
}
#endif //FISHC_CPP_P24_H