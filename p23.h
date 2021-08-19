//
// Created by Ce Yang on 2021/8/19.
//

#ifndef FISHC_CPP_P23_H
#define FISHC_CPP_P23_H

#endif //FISHC_CPP_P23_H

#include <iostream>
#include <string>

using namespace std;

// ��̬��Ա�����ж�����ģ����Բ����ھ�̬��������ʷǾ�̬��Ԫ��

// �Ǿ�̬�������Է�����ľ�̬��Ա��Ҳ���Է�����ķǾ�̬��Ա

class Pet_p23{
public:
    Pet_p23(string theName);
    ~Pet_p23();

    // static �ؼ���
    static int getCount();

protected:
    string name;

private:
    static int count;
};


// �������£������ڴ棬��ʼ��Ϊ0
int Pet_p23::count = 0;

Pet_p23::Pet_p23(string theName) {
    name = theName;
    count++;

    cout << "������һ����������ǣ�" << name << endl;
}

Pet_p23::~Pet_p23() {
    count--;
    cout << "һ��������ʧ�ˣ������ǣ�" << this->name << endl;
}


int Pet_p23::getCount() {
    cout << "������ " << count << " ֻ���" << endl;
    return count;
}


class Dog_p23: public Pet_p23{
public:
    Dog_p23(string theName);
};

Dog_p23::Dog_p23(string theName) : Pet_p23(theName){
    cout << "С���Ĺ��캯����С�����֣�" << name << endl;

    cout << "thisָ��:" << this << endl;

}


class Cat_p23: public Pet_p23{
public:
    Cat_p23(string theName);
};

Cat_p23::Cat_p23(string theName) : Pet_p23(theName){
    cout << "Сè�Ĺ��캯����Сè���֣�" << name << endl;
}



void f23_e1(){

    Dog_p23 d("����");



}



void f23(){
    f23_e1();

}