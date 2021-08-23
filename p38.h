//
// Created by yangce on 2021/8/23.
//

#ifndef FISHC_CPP_P38_H
#define FISHC_CPP_P38_H


#include <iostream>

using namespace std;

class Company_p38{
public:
    Company_p38(string theName ,string product){
        this->name = theName;
        this->product = product;
    };

    virtual void printInfo(){
        cout << "��˾���֣�" << name << "����˾��Ʒ��" << product <<endl;
    };

protected:
    string name;
    string product;
};


class TechCompany_p38:public Company_p38{
public:
    TechCompany_p38(string theName, string product): Company_p38(theName, product){
    };

    void printInfo(){
        cout << "TechCompany��" << name << "����˾��Ʒ��" << product << endl;
    };
};


void f38_e1(){

    Company_p38 *cmp = new TechCompany_p38("Apple", "iPhone");

    // ǿ������ת��
    TechCompany_p38 *tec_cmp = (TechCompany_p38 *) cmp;
    tec_cmp->printInfo();

    delete cmp;
    //    // ����ָ��ָ��ͬһ����ַ���ظ��ͷţ�������⣡����
    //    delete tec_cmp;

    cmp = nullptr;
    tec_cmp = nullptr;
}


#include <typeinfo>

void f38_e2(){

    // �߼� ǿ������ת��
    // ��̬����ǿ������ת��

    //    // �������ı�value�ġ������ԡ�
    //    const_cast<MyClass*>(value)

    //    // ������һ�����͵Ķ���ָ�밲ȫ��ǿ��ת��Ϊ��һ�����͵Ķ���ָ��
    //    // ���value�����Ͳ���һ��MyClass�ࣨ��MyClass�����ࣩ��ָ�룬���������������NULL
    //    dynamic_cast<MyClass*>(value)

    Company_p38 *cmp = new Company_p38("Apple", "iPhone");
    //    ��˾���֣�Apple����˾��Ʒ��iPhone
    cmp->printInfo();

    //    Company_p38 *cmp = new TechCompany_p38("Apple", "iPhone");
    ////    �Ƽ���˾��Apple����˾��Ʒ��iPhone
    //    cmp->printInfo();

    //    // �ṹ��ͬ�����ܻ�����⣡����ֻҪ������һ����Ա���ͻ������
    //    TechCompany_p38 *tec_cmp = (TechCompany_p38 *) cmp;
    //    cout << typeid(cmp).name() << endl;
    //    cout << typeid(tec_cmp).name() << endl;

    // ��ͬ�Ķ��󣬲�����ת��������
    TechCompany_p38 *tec_cmp = dynamic_cast<TechCompany_p38 *>(cmp);

    if (tec_cmp == nullptr){
        cout << "��̬ǿ������ת�� ʧ�ܣ�" << endl;
    }else{
        cout << "��̬ǿ������ת�� �ɹ���" << endl;
        tec_cmp->printInfo();
        delete tec_cmp;
        tec_cmp = nullptr;
    }

}


void f38(){
    //    f38_e1();
    f38_e2();
}
#endif //FISHC_CPP_P38_H