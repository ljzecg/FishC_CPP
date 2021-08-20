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


// 虚继承
class Teacher_p30: virtual public Person_p30{
public:
    Teacher_p30(string theName, string theClass): Person_p30(theName){
        classes = theClass;
    };
    void teach(){
        cout << name << " 教 " << classes << endl;
    };
    void introduce(){
        cout << "teacher " << name << " 自我介绍，" << "我教：" << classes << endl;
    };

protected:
    string classes;
};

// 虚继承
class Student_p30: virtual public Person_p30{
public:
    Student_p30(string theName, string theClass): Person_p30(theName){
        classes = theClass;
    };
    void attendClass(){
        cout << "学生 " << name << " 加入 " << classes << " 学习！" << endl;
    };
    void introduce(){
        cout << "学生自我介绍，我是：" << name << endl;
    };
protected:
    string classes;
};


// 虚继承
class TeachingStudent_p30: public Student_p30, public Teacher_p30{
public:
    TeachingStudent_p30(
            string theName,
            string classTeaching,
            string classAttending
    ):
    Teacher_p30(theName, classTeaching),
    Student_p30(theName, classAttending),
    // 只能再继承一次！！！
    Person_p30(theName){

    };
    void introduce(){
        cout << "大家好，我是" << Student_p30::name << "，我教" << Teacher_p30::classes << endl;
        cout << "同时我在 " << Student_p30::classes << " 学习" << endl;
    };
};

void f30_e1(){

    TeachingStudent_p30 ts("丁丁", "C++入门班", "C++进阶班");
    ts.introduce();
    ts.teach();
    ts.attendClass();

}

void f30(){
    f30_e1();
}
