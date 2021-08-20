//
// Created by yangce on 2021/8/20.
//

#ifndef FISHC_CPP_P29_H
#define FISHC_CPP_P29_H

#endif //FISHC_CPP_P29_H

#include <iostream>
#include <string>

using namespace std;


// 多继承
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
        cout << name << " 教 " << classes << endl;
    };
    void introduce(){
        cout << "teacher " << name << " 自我介绍，" << "我教：" << classes << endl;
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
        cout << "学生 " << name << " 加入 " << classes << " 学习！" << endl;
    };
    void introduce(){
        cout << "学生自我介绍，我是：" << name << endl;
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
        cout << "大家好，我是" << Student_p29::name << "，我教" << Teacher_p29::classes << endl;
        cout << "同时我在 " << Student_p29::classes << " 学习" << endl;
    };
};


void f29_e1(){
    Teacher_p29 t("小甲鱼", "C++入门班");
    Student_p29 s("菜鸟", "C++入门班");
    TeachingStudent_p29 ts("丁丁", "C++入门班", "C++进阶班");

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
