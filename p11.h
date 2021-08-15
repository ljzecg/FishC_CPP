//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P11_H
#define FISHC_CPP_P11_H

#endif //FISHC_CPP_P11_H


#include <iostream>
#include <string>

using namespace std;

// 定义一个结构，后面必须加上分号
struct FishOil{
    // 姓名
    string name;
    // 身份证
    string uid;
    // 性别：F = Female，M = Male
    char sex;
};
// 结构体中的成员个数没有限制，可以是任意合法数据类型



void f11_e1(){
//    // 创建实例
//    FishOil Jiayu;
//
//    Jiayu.name = "小甲鱼";
//    Jiayu.uid = "fishc_00001";
//    Jiayu.sex = 'M';

    // 或：
    FishOil Jiayu = {"小甲鱼", "fishc_00001", 'M'};

    // 创建指针，指向结构体
    FishOil *pJiayu = &Jiayu;

    cout << (*pJiayu).name << endl;
    cout << pJiayu->name << endl;

}



void f11(){
    f11_e1();
}