//
// Created by yangce on 2021/8/2.
//

#ifndef FISHC_CPP_P5_H
#define FISHC_CPP_P5_H

#endif //FISHC_CPP_P5_H

#include <iostream>

void f5_e1(){
    // ��Żش����
    char answer;
    std::cout << "���ʿ��Ը�ʽ������Ӳ���룿��Y/N��" << std::endl;
    std::cin >> answer;

    switch (answer){
        case 'Y':
        case 'y':
            std::cout << "����ʽ��Ӳ���ǲ��õģ��ᱻ������ģ�" << std::endl;
            break;
        case 'N':
        case 'n':
            std::cout << "����ѡ�������ǵģ�����" << std::endl;
            break;
        default:
            std::cout << "�������벻����Ҫ�󣡣���" << std::endl;
            break;
    }

    // ����100���ַ���ֻҪ��\n���ͺ���
    std::cin.ignore(100, '\n');
    std::cout << "�����κ��ַ��������򡣡���" << std::endl;
    std::cin.get();
}

void f5_e2(){
    // ���϶Ȼ��϶ȣ��¶ȵ�λת����C��F
    // �����¶� = �����¶� * 9.0 / 5.0 + 32

    const unsigned short ADD_SUBTRACT = 32;
    const double RATIO = 9.0 / 5.0;

    double tempIn, tempOut;
    char typeIn, typeOut;

    std::cout << "�������¶ȣ���ʽΪ����xx.x C�� �� ��xx.x F��" << std::endl;
    std::cin >> tempIn >> typeIn;
    std::cin.ignore(100, '\n');

    switch (typeIn){
        case 'C':
        case 'c':
            tempOut = tempIn * RATIO + ADD_SUBTRACT;
            typeOut = 'F';
            typeIn = 'C';
            break;
        case 'F':
        case 'f':
            tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
            typeOut = 'C';
            typeIn = 'F';
            break;
        default:
            typeOut = 'E';
            break;
    }

    if (typeOut != 'E'){
        std::cout << tempIn << typeIn << " = " << tempOut << typeOut << std::endl;
    }else{
        std::cout << "�����ʽ����" << std::endl;
    }
}


void f5(int argc, char *argv[]){
//    f5_e1();

    f5_e2();

}