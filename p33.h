//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P33_H
#define FISHC_CPP_P33_H

#endif //FISHC_CPP_P33_H

#include <iostream>
#include <string>

using namespace std;


void f33_e1(){

    try{
        throw "Òì³£´úÂë£¡£¡£¡";
    }
    catch (const char *e){
        cout << e << endl;
    }

}

void f33(){
    f33_e1();
}