//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P34_H
#define FISHC_CPP_P34_H

#endif //FISHC_CPP_P34_H

#include <iostream>
#include <string>

using namespace std;


// ��̬�ڴ����
/*
 * ��̬�ڴ���һЩû�����֣�ֻ�е�ַ���ڴ�鹹�ɣ���Щ�ڴ�����ڳ��������ڼ䶯̬�����
 * ���ڴ������һЩ�ڴ���Ҫ��new��䣬�����������ṩ���������ͷ���һ���С�ʵ����ڴ�
 */

//void f34_e1(){
//
//    int *p = new int;
//    cout << p << endl;
//    cout << *p << endl;
//    *p = 1;
//    cout << *p << endl;
//
//    delete p;
//
//    cout << p << endl;
//    cout << *p << endl;
//    p = nullptr;
//    cout << p << endl;
//    cout << *p << endl;
//
//}


class Company{
public:
    Company(string theName){
        name = theName;
    };

    virtual void printInfo(){
        cout << "��˾���֣�" << name << endl;
    };

protected:
    string name;
};


class TechCompany:public Company{
public:
    TechCompany(string theName, string product): Company(theName){
        this->product = product;
    };

    void printInfo(){
        cout << "��˾��Ʒ��" << product << endl;
    };

private:
    string product;
};



void f34_e2(){

    Company *cmp = new Company("Apple");
    cmp->printInfo();

    delete cmp;
    cmp = nullptr;

    cmp = new TechCompany("Apple", "iPhone");
    cmp->printInfo();

    delete cmp;
    cmp = nullptr;

}


void f34(){
//    f34_e1();
    f34_e2();
}