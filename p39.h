//
// Created by yangce on 2021/8/23.
//

#ifndef FISHC_CPP_P39_H
#define FISHC_CPP_P39_H


#include <iostream>

using namespace std;


void f39_e1(){
    int *x;
    x = new int[1000];
    delete []x;
    x = nullptr;
}

void f39_e2(){
    int *x;
    x = new int[1000];
    // �ᷢ���ڴ�й©
    x = new int[2000];
    delete []x;
    x = nullptr;
}

void f39_e3(){
    int *x;
    x = new int(1);
    // ���ͷţ��ᷢ���ڴ�й©
    // ����������ָ�����x�ᳬ��������
    // �������delete���
    delete x;
    x = nullptr;
}


void f39(){
    //    f39_e1();
    //    f39_e2();
    f39_e3();
}
#endif //FISHC_CPP_P39_H