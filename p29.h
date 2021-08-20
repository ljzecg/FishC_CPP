//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P29_H
#define FISHC_CPP_P29_H

#endif //FISHC_CPP_P29_H

#include <iostream>
#include <string>

using namespace std;


// ��̳�
class Person_p29{
public:
    Person_p29(string theName){
        name = theName;
    };

    void introduce(){
        cout << "Person_p29: my name is " << name << endl;
    };

protected:
    string name;
};


class Teacher_p29: public Person_p29{
public:
    Teacher_p29(string theName, string theClass): Person_p29(theName){
        classes = theClass;
    };
    void teach(){
        cout << name << " �� " << classes << endl;
    };
    void introduce(){
        cout << "teacher " << name << " ���ҽ��ܣ�" << "�ҽ̣�" << classes << endl;
    };

protected:
    string classes;
};


class Student_p29: public Person_p29{
public:
    Student_p29(string theName, string theClass): Person_p29(theName){
        classes = theClass;
    };
    void attendClass(){
        cout << "ѧ�� " << name << " ���� " << classes << " ѧϰ��" << endl;
    };
    void introduce(){
        cout << "ѧ�����ҽ��ܣ����ǣ�" << name << endl;
    };
protected:
    string classes;
};



class TeachingStudent_p29: public Student_p29, public Teacher_p29{
public:
    TeachingStudent_p29(string theName, string classTeaching, string classAttending):
            Teacher_p29(theName, classTeaching), Student_p29(theName, classAttending)
    {

    };
    void introduce(){
        cout << "��Һã�����" << Student_p29::name << "���ҽ�" << Teacher_p29::classes << endl;
        cout << "ͬʱ���� " << Student_p29::classes << " ѧϰ" << endl;
    };
};


void f29_e1(){
    Teacher_p29 t("С����", "C++���Ű�");
    Student_p29 s("����", "C++���Ű�");
    TeachingStudent_p29 ts("����", "C++���Ű�", "C++���װ�");

    t.introduce();
    t.teach();

    s.introduce();
    s.attendClass();

    ts.introduce();
    ts.teach();
    ts.attendClass();

}

void f29(){
    f29_e1();
}
