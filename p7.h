//
// Created by yangce on 2021/8/2.
//

#ifndef FISHC_CPP_P7_H
#define FISHC_CPP_P7_H

#endif //FISHC_CPP_P7_H


#include <iostream>
#include <string>

using namespace std;

#define ITEM_e1 10

void p7_e1(){
    int num[ITEM_e1];
    cout << "������" << ITEM_e1 << "���������ݣ�" << endl;
    for (int i = 0; i < ITEM_e1; i++){
        cout << "�������" << i + 1 << "������" << endl;
        cin >> num[i];
    }
    int total = 0;
    for (int j : num){
        total += j;
    }
    cout << "�ܺ��ǣ�" << total << endl;
    cout << "ƽ��ֵ��" << (float)total / ITEM_e1 << endl;
}

void p7_e2(){
    const unsigned short ITEM_e2 = 10;
    int num[ITEM_e2];
    cout << "������" << ITEM_e2 << "���������ݣ�" << endl;
    for (int i = 0; i < ITEM_e2; i++){
        cout << "�������" << i + 1 << "������" << endl;
        // ����׼ȷ�Լ��飬cin��������ʱ��᷵�� 0
        while (!(cin >> num[i])){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "������һ���Ϸ���ֵ��" << endl;
        }
    }
    int total = 0;
    for (int j : num){
        total += j;
    }
    cout << "�ܺ��ǣ�" << total << endl;
    cout << "ƽ��ֵ��" << (float)total / ITEM_e2 << endl;
}


void p7_e3() {
    string str;
    cout << "�������������һ���ַ�����" << endl;
    // ע�⣬�ո��Ӱ��cin�Ľ��գ����������� cin >> str;
    getline(cin, str);
    cout << str;
}



void f7(){

//    p7_e1();

//    p7_e2();

    p7_e3();

}
