//
// Created by yangce on 2021/8/18.
//

#ifndef FISHC_CPP_P20_H
#define FISHC_CPP_P20_H


#include <iostream>
#include <string>

using namespace std;


class Animal_p20{
public:
    void eat();
    // ����
    void eat(int eatCount);
};

void Animal_p20::eat() {
    cout << "animal eating" << endl;
}
void Animal_p20::eat(int eatCount) {
    cout << "animal ���� " << eatCount << " �����Ķ���" << endl;
}

class Pig_p20: public Animal_p20{
public:
    // ����Animal�е�eat����
    void eat();
    // �̳еĻ������غ�������Ҳ�̳�
    void eat(int eatCount);
};

void Pig_p20::eat(){
    //    Animal_p20::eat();
    cout << "pig eating" << endl;
}

// �̳еĻ������غ�������Ҳ�̳�
void Pig_p20::eat(int eatCount){
    Animal_p20::eat(eatCount);
}


void f20_e1(){
    // �̳�ʱ
    // public����ã���ʵ�ڸ��߱��������̳еķ��������Եķ��ʼ��𲻷����κθı�
    // protected���ѻ���ķ��ʼ����Ϊprotected�����ԭ����public�Ļ���
    // ���ʹ���������ⲿ�Ĵ����޷�ͨ������ȥ�����ڻ����е�public
    // private���ӻ���̳�����ÿһ����Ա������private���Դ�������ζ��ֻ������������ʹ�����ӻ���̳�����Ԫ��

    Animal_p20 a;
    a.eat(15);


    Pig_p20 pig;
    pig.eat();
    pig.eat(15);

}


void f20(){
    f20_e1();

}
#endif //FISHC_CPP_P20_H