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
    cout << "请输入" << ITEM_e1 << "个整形数据！" << endl;
    for (int i = 0; i < ITEM_e1; i++){
        cout << "请输入第" << i + 1 << "个数据" << endl;
        cin >> num[i];
    }
    int total = 0;
    for (int j : num){
        total += j;
    }
    cout << "总和是：" << total << endl;
    cout << "平均值：" << (float)total / ITEM_e1 << endl;
}

void p7_e2(){
    const unsigned short ITEM_e2 = 10;
    int num[ITEM_e2];
    cout << "请输入" << ITEM_e2 << "个整形数据！" << endl;
    for (int i = 0; i < ITEM_e2; i++){
        cout << "请输入第" << i + 1 << "个数据" << endl;
        // 输入准确性检验，cin输入错误的时候会返回 0
        while (!(cin >> num[i])){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "请输入一个合法的值！" << endl;
        }
    }
    int total = 0;
    for (int j : num){
        total += j;
    }
    cout << "总和是：" << total << endl;
    cout << "平均值：" << (float)total / ITEM_e2 << endl;
}


void p7_e3() {
    string str;
    cout << "请输入随便输入一个字符串：" << endl;
    // 注意，空格会影响cin的接收！！！不能用 cin >> str;
    getline(cin, str);
    cout << str;
}



void f7(){

//    p7_e1();

//    p7_e2();

    p7_e3();

}
