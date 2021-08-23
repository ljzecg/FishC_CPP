//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P34_H
#define FISHC_CPP_P34_H


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


class Company_p34{
public:
    Company_p34(string theName){
        name = theName;
    };

    virtual void printInfo(){
        cout << "��˾���֣�" << name << endl;
    };

protected:
    string name;
};


class TechCompany_p34: public Company_p34{
public:
    TechCompany_p34(string theName, string product): Company_p34(theName){
        this->product = product;
    };

    void printInfo(){
        cout << "��˾��Ʒ��" << product << endl;
    };

private:
    string product;
};



void f34_e2(){

    Company_p34 *cmp = new Company_p34("Apple");
    cmp->printInfo();

    delete cmp;
    cmp = nullptr;

    cmp = new TechCompany_p34("Apple", "iPhone");
    cmp->printInfo();

    delete cmp;
    cmp = nullptr;

}


void f34(){
    //    f34_e1();
    f34_e2();
}
#endif //FISHC_CPP_P34_H