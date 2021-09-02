//
// Created by yangce on 2021/9/2.
//

#ifndef FISHC_CPP_P48_H
#define FISHC_CPP_P48_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 容器 和 算法


void f48(){

    vector<string> names;

    names.push_back("小甲鱼");
    names.push_back("小鱿鱼");
//    names.emplace_back("小甲鱼");
//    names.emplace_back("小鱿鱼");

    for(int i = 0; i < 2; i++){
        cout << names[i] << endl;
    }
}

#endif //FISHC_CPP_P48_H
