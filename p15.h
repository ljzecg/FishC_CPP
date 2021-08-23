//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P15_H
#define FISHC_CPP_P15_H


#include <iostream>
#include <string>

using namespace std;


class Car{
public:
    string color;
    string engine;
    float gas_tank;
    unsigned int Wheel;


    Car();
    ~Car();
};

// ¹¹ÔìÆ÷
Car::Car() {
    color = "WHITE";
    engine = "V8";
    Wheel = 4;
    gas_tank = 0;
}

Car::~Car() {
}

// Îö¹¹Æ÷



void f15(){

}
#endif //FISHC_CPP_P15_H