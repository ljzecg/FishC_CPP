//
// Created by yangce on 2021/8/18.
//

#ifndef FISHC_CPP_P21_H
#define FISHC_CPP_P21_H

#endif //FISHC_CPP_P21_H

#include <iostream>
#include <string>

using namespace std;


class Lovers_p21{
public:
    Lovers_p21(string theName);
    void kiss(Lovers_p21 *lover);
    void ask(Lovers_p21 *lover, string something);

protected:
    string name;
    // ��Ԫ��ϵ
    friend class Others_p21;
};

Lovers_p21::Lovers_p21(string theName) {
    name = theName;
    cout << "lovers�ĳ�ʼ������" << name << endl;
}

void Lovers_p21::kiss(Lovers_p21 *lover) {
    cout << name << " ����һ�� " << lover->name << endl;
}

void Lovers_p21::ask(Lovers_p21 *lover, string something) {
    cout << name << " �� " << lover->name << "ȥ�� " << something << endl;
}




class Boyfriend_p21: public Lovers_p21{
public:
    Boyfriend_p21(string theName);
};
Boyfriend_p21::Boyfriend_p21(string theName) : Lovers_p21(theName){
}




class Girlfriend_p21: public Lovers_p21{
public:
    Girlfriend_p21(string theName);
};
Girlfriend_p21::Girlfriend_p21(string theName) : Lovers_p21(theName){
}




class Others_p21{
public:
    Others_p21(string theName);
    void kiss(Lovers_p21 *lover);
protected:
    string name;
};

Others_p21::Others_p21(string theName) {
    name = theName;
    cout << "others�ĳ�ʼ������" << name << endl;
}

void Others_p21::kiss(Lovers_p21 *lover) {
    cout << name << "������" << lover->name << endl;
}





void f21_e1(){

    Boyfriend_p21 b("boy");
    Girlfriend_p21 g("girl");

    g.kiss(&b);
    g.ask(&b, "something!");

    Others_p21 o("other");
    o.kiss(&g);

}



void f21(){
    f21_e1();
}