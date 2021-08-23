//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P24_H
#define FISHC_CPP_P24_H


#include <iostream>
#include <string>

using namespace std;

// virtual ̓����
// �������������鷽��

// new

// delete

/*
��C��C++�У�������ȫ������û�д��������������Ϊ�й����ݷ����ڴ�
Ҳ����ֱ�Ӵ���һ��ָ�벢����ֻ���·�����ڴ��
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
    cout << "Pet�Ĺ��캯����������һ����������ǣ�" << name << endl;
}

Pet_p24::~Pet_p24() {
    cout << "һ��������ʧ�ˣ������ǣ�" << name << endl;
}

void Pet_p24::eat() {
    cout << "pet " << name << " �� eat" << endl;
}

void Pet_p24::sleep() {
    cout << "pet " << name << " �� sleep" << endl;
}

void Pet_p24::play() {
    cout << "pet " << name << " �� play" << endl;
}




class Dog_p24: public Pet_p24{
public:
    Dog_p24(string theName);

    void bark();
    void play();
};

Dog_p24::Dog_p24(string theName) : Pet_p24(theName){
    cout << "С���Ĺ��캯����С�����֣�" << name << endl;
}

void Dog_p24::bark() {
    cout << "dog " << name << " �� bark" << endl;
}

void Dog_p24::play() {
    Pet_p24::play();
    cout << "�� " << name << " �� ���Լ�" << endl;
}


class Cat_p24: public Pet_p24{
public:
    Cat_p24(string theName);

    void climb();
    void play();
};

Cat_p24::Cat_p24(string theName) : Pet_p24(theName){
    cout << "Сè�Ĺ��캯����Сè���֣�" << name << endl;
}

void Cat_p24::climb() {
    cout << "è " << name << " �� climb" << endl;
}

void Cat_p24::play() {
    Pet_p24::play();
    cout << "è " << name << " �� ���Լ�" << endl;
}


void f24_e1(){
    int *pointer = new int;
    *pointer = 110;
    cout << *pointer << endl;
    delete pointer;
}

void f24_e2(){
    Pet_p24 *cat = new Cat_p24("Сè");
    Pet_p24 *dog = new Dog_p24("С��");
    Cat_p24 *cat2 = new Cat_p24("Сè2");

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