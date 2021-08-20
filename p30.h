//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P30_H
#define FISHC_CPP_P30_H

#endif //FISHC_CPP_P30_H
#include <iostream>
#include <string>

using namespace std;


class Person_p30{
public:
    Person_p30(string theName){
        name = theName;
    };

    void introduce(){
        cout << "Person_p30: my name is " << name << endl;
    };

protected:
    string name;
};


// ��̳�
class Teacher_p30: virtual public Person_p30{
public:
    Teacher_p30(string theName, string theClass): Person_p30(theName){
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

// ��̳�
class Student_p30: virtual public Person_p30{
public:
    Student_p30(string theName, string theClass): Person_p30(theName){
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


// ��̳�
class TeachingStudent_p30: public Student_p30, public Teacher_p30{
public:
    TeachingStudent_p30(
            string theName,
            string classTeaching,
            string classAttending
    ):
    Teacher_p30(theName, classTeaching),
    Student_p30(theName, classAttending),
    // ֻ���ټ̳�һ�Σ�����
    Person_p30(theName){

    };
    void introduce(){
        cout << "��Һã�����" << Student_p30::name << "���ҽ�" << Teacher_p30::classes << endl;
        cout << "ͬʱ���� " << Student_p30::classes << " ѧϰ" << endl;
    };
};

void f30_e1(){

    TeachingStudent_p30 ts("����", "C++���Ű�", "C++���װ�");
    ts.introduce();
    ts.teach();
    ts.attendClass();

}

void f30(){
    f30_e1();
}
