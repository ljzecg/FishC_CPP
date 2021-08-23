//
// Created by Ce Yang on 2021/8/16.
//

#ifndef FISHC_CPP_P18_H
#define FISHC_CPP_P18_H


#include <iostream>
#include <string>

using namespace std;

class Animal_p18{
public:
    string mouth;
    string name;

    Animal_p18(string theName);
    void eat();
    void sleep();
    void drool();
};

Animal_p18::Animal_p18(string theName) {
    name = theName;
    cout << "animal ��������" << theName << endl;
}

void Animal_p18::eat(){
    cout << "eating" << endl;
}

void Animal_p18::sleep(){
    cout << "sleeping" << endl;
}

void Animal_p18::drool(){
    cout << "drooling" << endl;
}


class Pig_p18: public Animal_p18{
public:
    void climb();
    Pig_p18(string theName);
};

void Pig_p18::climb() {
    cout << "climbing" << endl;
}

Pig_p18::Pig_p18(string theName): Animal_p18(theName){
    cout << "pig ��������" << theName << endl;
}



class Turtle_p18: public Animal_p18{
public:
    void swim();
    Turtle_p18(string theName);
};

Turtle_p18::Turtle_p18(string theName): Animal_p18(theName) {

}

void Turtle_p18::swim() {
    cout << "swimming" << endl;
}


void f18_e1(){
    Pig_p18 pig("С��");
    Turtle_p18 turtle("С����");

    cout << "pig�����֣�" << pig.name << endl;
    cout << "�ڹ����֣�" << turtle.name << endl;
}


class BaseClass_18{
public:
    BaseClass_18();
    ~BaseClass_18();

    void doSomething();
};

class SubClass_18: public BaseClass_18{
public:
    SubClass_18();
    ~SubClass_18();
};

BaseClass_18::BaseClass_18() {
    cout << "���๹������" << endl;
}

BaseClass_18::~BaseClass_18() {
    cout << "������������" << endl;
}

void BaseClass_18::doSomething() {
    cout << "do something" << endl;
}

SubClass_18::SubClass_18() {
    cout << "���๹������" << endl;
}

SubClass_18::~SubClass_18() {
    cout << "������������" << endl;
}


void f18_e2(){
    //    BaseClass_18 b;
    SubClass_18 s;
    s.doSomething();

}

void f18(){
    //    f18_e1();
    f18_e2();
}
#endif //FISHC_CPP_P18_H