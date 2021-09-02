//
// Created by yangce on 2021/9/2.
//

#ifndef FISHC_CPP_P49_H
#define FISHC_CPP_P49_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ������ iterator
void f49_e1(){
    vector<string> names;

    names.emplace_back("С����");
    names.emplace_back("С����");

    vector<string>::iterator iter = names.begin();
    while (iter != names.end()){
        cout << *iter++ << endl;
    }
}

void f49_e2(){

    vector<string> names;

    names.emplace_back("Larry");
    names.emplace_back("Rola");
    names.emplace_back("DingDing");
    names.emplace_back("JoyJoy");
    names.emplace_back("Michael");
    names.emplace_back("Lucy");
    names.emplace_back("Lilei");

    // algorithm
    sort(names.begin(), names.end());

    auto iter = names.begin();
    while (iter != names.end()){
        cout << *iter++ << endl;
    }
}


void f49(){
//    f49_e1();
    f49_e2();
}

#endif //FISHC_CPP_P49_H
