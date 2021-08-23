//
// Created by Ce Yang on 2021/8/19.
//

#ifndef FISHC_CPP_P22_H
#define FISHC_CPP_P22_H


#include <iostream>
#include <string>

using namespace std;


// ��̬���Ժ;�̬����
class Pet_p22{
public:
    Pet_p22(string theName);
    ~Pet_p22();

    // static �ؼ���
    static int getCount();

protected:
    string name;

private:
    static int count;
};


// �������£������ڴ棬��ʼ��Ϊ0
int Pet_p22::count = 0;

Pet_p22::Pet_p22(string theName) {
    name = theName;
    count++;

    cout << "������һ����������ǣ�" << name << endl;
}

Pet_p22::~Pet_p22() {
    count--;
    cout << "һ��������ʧ�ˣ������ǣ�" << this->name << endl;
}


int Pet_p22::getCount() {
    cout << "������ " << count << " ֻ���" << endl;
    return count;
}


class Dog_p22: public Pet_p22{
public:
    Dog_p22(string theName);
};

Dog_p22::Dog_p22(string theName) : Pet_p22(theName){
    cout << "С���Ĺ��캯����С�����֣�" << name << endl;
}


class Cat_p22: public Pet_p22{
public:
    Cat_p22(string theName);
};

Cat_p22::Cat_p22(string theName) : Pet_p22(theName){
    cout << "Сè�Ĺ��캯����Сè���֣�" << name << endl;
}


void f22_e1(){
    Dog_p22 d("С��");
    Cat_p22 c("Сè");

    Pet_p22::getCount();

    // ����Σ� ���÷�Χ����������������
    {
        Dog_p22 d1("С�� 1");
        Cat_p22 c1("Сè 1");
        Pet_p22::getCount();
    }

    Pet_p22::getCount();
}


void f22(){
    f22_e1();

}
#endif //FISHC_CPP_P22_H