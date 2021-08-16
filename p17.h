//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P17_H
#define FISHC_CPP_P17_H

#endif //FISHC_CPP_P17_H

#include <iostream>
#include <string>

using namespace std;

class Human_p17{
public:
    char fishc;
    Human_p17(char fishc);
};

Human_p17::Human_p17(char fishc){
    // this 指针 防止二义性
    this->fishc = fishc;
};

void f17_e1(){
    Human_p17 hm('c');
}


class Animal_p17{
public:
    string mouth;

    void eat();
    void sleep();
    void drool();
};

// 继承于 Animal_p17
class Pig_p17: public Animal_p17{
public:
    void climb();
};

// 继承于 Animal_p17
class Turtle_p17: public Animal_p17{
public:
    void swim();
};

void Animal_p17::eat(){
    cout << "eating" << endl;
}

void Animal_p17::sleep(){
    cout << "sleeping" << endl;
}

void Animal_p17::drool(){
    cout << "drooling" << endl;
}

void Pig_p17::climb() {
    cout << "climbing" << endl;
}

void Turtle_p17::swim() {
    cout << "swimming" << endl;
}

void f17_e2(){
    Pig_p17 pig;
    Turtle_p17 turtle;

    pig.eat();
    turtle.eat();
    pig.climb();
    turtle.swim();
}


void f17(){
//    f17_e1();
    f17_e2();
}