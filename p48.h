//
// Created by yangce on 2021/9/2.
//

#ifndef FISHC_CPP_P48_H
#define FISHC_CPP_P48_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ���� �� �㷨


void f48(){

    vector<string> names;

    names.push_back("С����");
    names.push_back("С����");
//    names.emplace_back("С����");
//    names.emplace_back("С����");

    for(int i = 0; i < 2; i++){
        cout << names[i] << endl;
    }
}

#endif //FISHC_CPP_P48_H
