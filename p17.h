//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P17_H
#define FISHC_CPP_P17_H

#endif //FISHC_CPP_P17_H

#include <iostream>
#include <string>

using namespace std;

class Human_p17{
public:
    char fishc;
    Human_p17(char fishc);
};

Human_p17::Human_p17(char fishc){
    // this 指针 防止二义性
    this->fishc = fishc;
};


void f17_e1(){
    Human_p17 hm('c');

}


void f17(){
    f17_e1();
}