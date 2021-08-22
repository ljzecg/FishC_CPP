//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P34_H
#define FISHC_CPP_P34_H

#endif //FISHC_CPP_P34_H

#include <iostream>
#include <string>

using namespace std;


// 动态内存管理
/*
 * 动态内存由一些没有名字，只有地址的内存块构成，那些内存块是在程序运行期间动态分配的
 * 从内存池申请一些内存需要用new语句，它将根据你提供的数据类型分配一块大小适当的内存
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
        cout << "公司名字：" << name << endl;
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
        cout << "公司产品：" << product << endl;
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