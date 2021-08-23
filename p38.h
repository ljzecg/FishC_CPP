//
// Created by yangce on 2021/8/23.
//

#ifndef FISHC_CPP_P38_H
#define FISHC_CPP_P38_H


#include <iostream>

using namespace std;

class Company_p38{
public:
    Company_p38(string theName ,string product){
        this->name = theName;
        this->product = product;
    };

    virtual void printInfo(){
        cout << "公司名字：" << name << "，公司产品：" << product <<endl;
    };

protected:
    string name;
    string product;
};


class TechCompany_p38:public Company_p38{
public:
    TechCompany_p38(string theName, string product): Company_p38(theName, product){
    };

    void printInfo(){
        cout << "TechCompany：" << name << "，公司产品：" << product << endl;
    };
};


void f38_e1(){

    Company_p38 *cmp = new TechCompany_p38("Apple", "iPhone");

    // 强制类型转换
    TechCompany_p38 *tec_cmp = (TechCompany_p38 *) cmp;
    tec_cmp->printInfo();

    delete cmp;
    //    // 两个指针指向同一个地址，重复释放，会出问题！！！
    //    delete tec_cmp;

    cmp = nullptr;
    tec_cmp = nullptr;
}


#include <typeinfo>

void f38_e2(){

    // 高级 强制类型转换
    // 动态对象强制类型转换

    //    // 用来来改变value的“常量性”
    //    const_cast<MyClass*>(value)

    //    // 用来把一种类型的对象指针安全地强制转换为另一种类型的对象指针
    //    // 如果value的类型不是一个MyClass类（或MyClass的子类）的指针，这个操作符将返回NULL
    //    dynamic_cast<MyClass*>(value)

    Company_p38 *cmp = new Company_p38("Apple", "iPhone");
    //    公司名字：Apple，公司产品：iPhone
    cmp->printInfo();

    //    Company_p38 *cmp = new TechCompany_p38("Apple", "iPhone");
    ////    科技公司：Apple，公司产品：iPhone
    //    cmp->printInfo();

    //    // 结构不同，可能会出问题！！！只要多生成一个成员，就会出问题
    //    TechCompany_p38 *tec_cmp = (TechCompany_p38 *) cmp;
    //    cout << typeid(cmp).name() << endl;
    //    cout << typeid(tec_cmp).name() << endl;

    // 不同的对象，不可以转换！！！
    TechCompany_p38 *tec_cmp = dynamic_cast<TechCompany_p38 *>(cmp);

    if (tec_cmp == nullptr){
        cout << "动态强制类型转换 失败！" << endl;
    }else{
        cout << "动态强制类型转换 成功！" << endl;
        tec_cmp->printInfo();
        delete tec_cmp;
        tec_cmp = nullptr;
    }

}


void f38(){
    //    f38_e1();
    f38_e2();
}
#endif //FISHC_CPP_P38_H