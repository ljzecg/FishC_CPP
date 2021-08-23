//
// Created by yangce on 2021/8/18.
//

#ifndef FISHC_CPP_P20_H
#define FISHC_CPP_P20_H


#include <iostream>
#include <string>

using namespace std;


class Animal_p20{
public:
    void eat();
    // 重载
    void eat(int eatCount);
};

void Animal_p20::eat() {
    cout << "animal eating" << endl;
}
void Animal_p20::eat(int eatCount) {
    cout << "animal 吃了 " << eatCount << " 数量的东西" << endl;
}

class Pig_p20: public Animal_p20{
public:
    // 覆盖Animal中的eat方法
    void eat();
    // 继承的话，重载函数必须也继承
    void eat(int eatCount);
};

void Pig_p20::eat(){
    //    Animal_p20::eat();
    cout << "pig eating" << endl;
}

// 继承的话，重载函数必须也继承
void Pig_p20::eat(int eatCount){
    Animal_p20::eat(eatCount);
}


void f20_e1(){
    // 继承时
    // public（最常用），实在告诉编译器，继承的方法和属性的访问级别不发生任何改变
    // protected，把基类的访问级别改为protected，如果原来是public的话。
    // 这会使这个子类的外部的代码无法通过子类去访问期基类中的public
    // private，从基类继承来的每一个成员都当成private来对待，这意味着只有这个子类可以使用它从基类继承来的元素

    Animal_p20 a;
    a.eat(15);


    Pig_p20 pig;
    pig.eat();
    pig.eat(15);

}


void f20(){
    f20_e1();

}
#endif //FISHC_CPP_P20_H