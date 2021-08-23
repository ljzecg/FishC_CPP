//
// Created by Ce Yang on 2021/8/19.
//

#ifndef FISHC_CPP_P22_H
#define FISHC_CPP_P22_H


#include <iostream>
#include <string>

using namespace std;


// 静态属性和静态方法
class Pet_p22{
public:
    Pet_p22(string theName);
    ~Pet_p22();

    // static 关键字
    static int getCount();

protected:
    string name;

private:
    static int count;
};


// 做两件事！分配内存，初始化为0
int Pet_p22::count = 0;

Pet_p22::Pet_p22(string theName) {
    name = theName;
    count++;

    cout << "创建了一个宠物，名字是：" << name << endl;
}

Pet_p22::~Pet_p22() {
    count--;
    cout << "一个宠物消失了，名字是：" << this->name << endl;
}


int Pet_p22::getCount() {
    cout << "现在有 " << count << " 只宠物！" << endl;
    return count;
}


class Dog_p22: public Pet_p22{
public:
    Dog_p22(string theName);
};

Dog_p22::Dog_p22(string theName) : Pet_p22(theName){
    cout << "小狗的构造函数：小狗名字：" << name << endl;
}


class Cat_p22: public Pet_p22{
public:
    Cat_p22(string theName);
};

Cat_p22::Cat_p22(string theName) : Pet_p22(theName){
    cout << "小猫的构造函数：小猫名字：" << name << endl;
}


void f22_e1(){
    Dog_p22 d("小狗");
    Cat_p22 c("小猫");

    Pet_p22::getCount();

    // 代码段！ 作用范围，结束后会调用析构
    {
        Dog_p22 d1("小狗 1");
        Cat_p22 c1("小猫 1");
        Pet_p22::getCount();
    }

    Pet_p22::getCount();
}


void f22(){
    f22_e1();

}
#endif //FISHC_CPP_P22_H