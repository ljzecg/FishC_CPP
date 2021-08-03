//
// Created by yangce on 2021/8/2.
//

#ifndef FISHC_CPP_P6_H
#define FISHC_CPP_P6_H

#endif //FISHC_CPP_P6_H

#include <iostream>

using namespace std;

void convertTemperature(double, char);
void convertTemperature(int, char);


void convertTemperature(double tempIn, char typeIn){
    const unsigned short ADD_SUBTRACT = 32;
    const double RATIO = 9.0 / 5.0;

    double tempOut;
    char typeOut;

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

void convertTemperature(int tempIn, char typeIn){
    const unsigned short ADD_SUBTRACT = 32;
    const double RATIO = 9.0 / 5.0;

    int tempOut;
    char typeOut;

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

void f6(){
    convertTemperature(32.4, 'C');
    convertTemperature(32, 'C');

}