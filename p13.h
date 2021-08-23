//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P13_H
#define FISHC_CPP_P13_H

#include <iostream>

using namespace std;

union mima{
    unsigned long birthday;
    unsigned short ssn;
    char *pet;
};

void f13_e1(){
    mima mima_1{};
    mima_1.birthday = 19881201;
    cout << mima_1.birthday << endl;

    mima_1.pet = "Chaozai";
    cout << mima_1.pet << endl;
    cout << mima_1.birthday << endl;

}

enum weekdays{
    Monday = 0,
    Tuesday,
    Wednesday,
    Thursday = 333,
    Friday,
    };


void f13_e2(){
    weekdays today;
    today = Tuesday;
    cout << today << endl;

    today = Friday;
    cout << today << endl;

}

typedef int * intPointer;


void f13_e3(){
    intPointer a, b;
}

void f13(){
    //    f13_e1();
    //    f13_e2();
    f13_e3();
}
#endif //FISHC_CPP_P13_H