//
// Created by Ce Yang on 2021/8/16.
//

#ifndef FISHC_CPP_P19_H
#define FISHC_CPP_P19_H


#include <iostream>
#include <string>

using namespace std;

/*
 * ��ķ��ʼ���
 * public           �κδ���
 * protected        ����౾�����������
 * private          ����౾��
 */

class Animal_p19{
public:
    string mouth;

    Animal_p19(string theName);
    void eat();
    void sleep();
    void drool();

protected:
    string name;
private:

};

Animal_p19::Animal_p19(string theName) {
    name = theName;
    cout << "animal ��������" << theName << endl;
}

void Animal_p19::eat(){
    cout << "eating" << endl;
}

void Animal_p19::sleep(){
    cout << "sleeping" << endl;
}

void Animal_p19::drool(){
    cout << "drooling" << endl;
}


class Pig_p19: public Animal_p19{
public:
    void climb();
    Pig_p19(string theName);
};

void Pig_p19::climb() {
    cout << "climbing" << endl;
}

Pig_p19::Pig_p19(string theName): Animal_p19(theName){
    cout << "pig ��������" << theName << endl;
}



class Turtle_p19: public Animal_p19{
public:
    void swim();
    Turtle_p19(string theName);
};

Turtle_p19::Turtle_p19(string theName): Animal_p19(theName) {

}

void Turtle_p19::swim() {
    cout << "swimming" << endl;
}


void f19_e1(){
    Pig_p19 pig("С��");
    Turtle_p19 turtle("С����");

    //    cout << "pig�����֣�" << pig.name << endl;
    //    cout << "�ڹ����֣�" << turtle.name << endl;
}


void f19(){
    f19_e1();

}

#endif //FISHC_CPP_P19_H