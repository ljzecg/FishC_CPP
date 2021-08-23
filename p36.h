//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P36_H
#define FISHC_CPP_P36_H


#include <iostream>

using namespace std;

// �Ӻ��� �� ���� �����ڴ�
int *newInt(int value){
    int *myInt = new int;
    *myInt = value;

    return myInt;
}


void f36_e1(){
    int *x = newInt(20);

    cout << *x << endl;
    delete x;
    x = nullptr;
}


void swap(int *x, int *y){
#if 0
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
#endif
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}


void f36_e2(){
    int a, b;
    a = 3, b = 5;

    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

}


int fun(int x, int y){
    int z;
    z = (x > y) ? x: y;
    return z;
}


#include <climits>

void f36_e3(){
    unsigned int cnt;
    int a, b;
    // ����ָ��
    int (*p)(int, int);

    cout << "�����������������ֵ" << endl;
    cout << "������һ���ж��ٸ����֣�";
    cin >> cnt;

    a = INT_MIN;
    p = fun;
    for (int i = 0; i < cnt; i++){
        cout << "�� " << i + 1 << "�����֣�";
        cin >> b;
        a = (*p)(a, b);
    }

    cout << "fun �����" << a << endl;

}


void f36(){
    //    f36_e1();
    //    f36_e2();
    f36_e3();
}
#endif //FISHC_CPP_P36_H