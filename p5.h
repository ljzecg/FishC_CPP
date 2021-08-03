//
// Created by yangce on 2021/8/2.
//

#ifndef FISHC_CPP_P5_H
#define FISHC_CPP_P5_H

#endif //FISHC_CPP_P5_H

#include <iostream>

void f5_e1(){
    // 存放回答变量
    char answer;
    std::cout << "请问可以格式化您的硬盘码？【Y/N】" << std::endl;
    std::cin >> answer;

    switch (answer){
        case 'Y':
        case 'y':
            std::cout << "随便格式化硬盘是不好的，会被妈妈骂的！" << std::endl;
            break;
        case 'N':
        case 'n':
            std::cout << "您的选择是明智的！！！" << std::endl;
            break;
        default:
            std::cout << "您的输入不符合要求！！！" << std::endl;
            break;
    }

    // 忽略100个字符，只要有\n，就忽略
    std::cin.ignore(100, '\n');
    std::cout << "输入任何字符结束程序。。。" << std::endl;
    std::cin.get();
}

void f5_e2(){
    // 摄氏度华氏度，温度单位转换，C、F
    // 华氏温度 = 摄氏温度 * 9.0 / 5.0 + 32

    const unsigned short ADD_SUBTRACT = 32;
    const double RATIO = 9.0 / 5.0;

    double tempIn, tempOut;
    char typeIn, typeOut;

    std::cout << "请输入温度，格式为：【xx.x C】 或 【xx.x F】" << std::endl;
    std::cin >> tempIn >> typeIn;
    std::cin.ignore(100, '\n');

    switch (typeIn){
        case 'C':
        case 'c':
            tempOut = tempIn * RATIO + ADD_SUBTRACT;
            typeOut = 'F';
            typeIn = 'C';
            break;
        case 'F':
        case 'f':
            tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
            typeOut = 'C';
            typeIn = 'F';
            break;
        default:
            typeOut = 'E';
            break;
    }

    if (typeOut != 'E'){
        std::cout << tempIn << typeIn << " = " << tempOut << typeOut << std::endl;
    }else{
        std::cout << "输入格式错误！" << std::endl;
    }
}


void f5(int argc, char *argv[]){
//    f5_e1();

    f5_e2();

}