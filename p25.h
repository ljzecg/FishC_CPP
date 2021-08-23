//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P25_H
#define FISHC_CPP_P25_H



#include <iostream>
#include <string>

using namespace std;

class Animal_p25{
public:
    virtual void sleep(){
        cout << "animal sleep" << endl;
    }
    void breath(){
        cout << "animal breath" << endl;
    }

    // ���󷽷� abstract method�����麯����
    virtual void play() = 0;
};

class Fish_p25: public Animal_p25{
public:
    void sleep(){
        cout << "fish sleep" << endl;
    }
    void breath(){
        cout << "fish breath" << endl;
    }
    void play(){
        cout << "fish play" << endl;
    }
};

void f25_e1(){
    Fish_p25 fh;
    fh.sleep();
    fh.breath();
    fh.play();

    cout << endl;

    Animal_p25 *pfh = &fh;
    pfh->sleep();
    pfh->breath();
    pfh->play();
}


class ClxBase_p25{
public:
    ClxBase_p25(){

    };
    // �������û��virtual�Ļ�������ִ��Derived���е���������
    virtual ~ClxBase_p25(){
        //        cout << "~ClxBase_p25" << endl;
    }
    virtual void doSomething(){
        cout << "do someting in class ClxBase_p25" << endl;
    }
};

class ClxDerived_p25: public ClxBase_p25{
public:
    ClxDerived_p25(){

    }
    ~ClxDerived_p25(){
        cout << "~ClxDerived_p25" << endl;
    }
    void doSomething(){
        cout << "do someting in class ClxDerived_p25" << endl;
    }
};


void f25_e2(){

    ClxBase_p25 *p = new ClxDerived_p25;
    p -> doSomething();
    delete p;

}


void f25(){
    //    f25_e1();
    f25_e2();
}

#endif //FISHC_CPP_P25_H