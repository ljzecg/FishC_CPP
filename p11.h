//
// Created by Ce Yang on 2021/8/15.
//

#ifndef FISHC_CPP_P11_H
#define FISHC_CPP_P11_H

#endif //FISHC_CPP_P11_H


#include <iostream>
#include <string>

using namespace std;

// ����һ���ṹ�����������Ϸֺ�
struct FishOil{
    // ����
    string name;
    // ���֤
    string uid;
    // �Ա�F = Female��M = Male
    char sex;
};
// �ṹ���еĳ�Ա����û�����ƣ�����������Ϸ���������



void f11_e1(){
//    // ����ʵ��
//    FishOil Jiayu;
//
//    Jiayu.name = "С����";
//    Jiayu.uid = "fishc_00001";
//    Jiayu.sex = 'M';

    // ��
    FishOil Jiayu = {"С����", "fishc_00001", 'M'};

    // ����ָ�룬ָ��ṹ��
    FishOil *pJiayu = &Jiayu;

    cout << (*pJiayu).name << endl;
    cout << pJiayu->name << endl;

}



void f11(){
    f11_e1();
}