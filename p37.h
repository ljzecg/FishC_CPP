//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P37_H
#define FISHC_CPP_P37_H


#include <iostream>

using namespace std;

/*
 * ����������
 */


class C_p37{
public:
    C_p37(int *p){
        cout << "������������" << *p << endl;
        this->ptr = p;
        cout << "�뿪��������" << *p << endl;
    };

    C_p37(const C_p37 &rhs){
        cout << "���븱��������" << endl;
        // ����� = �Ѿ��������ˣ�����
        *this = rhs;
        cout << "�뿪����������" << endl;
    };

    ~C_p37(){
        cout << "����������" << *ptr << endl;
        delete ptr;
        ptr = nullptr;
        cout << "�뿪������" << endl;
    }

    C_p37 &operator = (const C_p37 &rhs){
        //����һ �� ����ֵ ��ֵ������Ϊ��ͬ�Ķ���    a=b; (aΪ������,bΪ����Ķ���)
        if (this != &rhs){
            //�ж����غ����Ҳ���������Ķ���������Ƿ�ͱ������ĵ�ַһ��
            //todo�����ַ��һ��(����ͬһ������)
            delete ptr; //�ͷ�ɾ�� a (������)��ָ��  �Ȱ�a�����ָ��ռ��������
            ptr = new int; //��̬�����ڴ��ptr���ָ��
            *ptr = *rhs.ptr;//��ptr���ָ��ֵ��ֵΪ����Ķ����ָ���ֵ��

            /*
            ���ϲ���������ͬ�����ֵʱ(a=b)��
            1.�Ƚ����жϣ��ж����������Ƿ�Ϊͬһ������(a��b����ͬһ������)
            2.������ͬһ������,����λ��ֵʱ��a�������Ϊptr��ָ��(��λ��ֵʱֱ�ӱ���ֵΪ����b��ptrָ���ַ)�ͷ�,�ٸ�a�������Ϊ
            ptr��ָ�붯̬����һ�������b��ptrָ����ȫ��ͬ�ĵ�ַ(��ʱ���Ǳ㱣֤�˸�������a��b�е�ͬ��ָ�����ptr��ַ�ǲ�ͬ��)
            3.��a��b��ptrָ��ָ��ͬ��ַ��,��ʱa��ptrָ����Ȼ�в�ͬ�ĵ�ַ,�������ַ��ָ���κ�һ��ֵ(0000000),����b�����ָ��
            ����ptrָ����һ��������ֵ����������һ��Ҫ��b�����ptrָ���ֵ��ֵ��a�����ptrָ��
            */
        }
        else{
            //������������ֵ ��ֵ������Ϊͬһ������    a=a;
            cout << "��ֵ������Ϊͬ������,��������!\n";
        }
        return *this;   //����һ������
    }

    //    // ���ظ�ֵ����
    //    C_p37 &operator = (const C_p37 &rhs){
    //        cout << "�������غ�� = ��ֵ����" << endl;
    //        cout <<  "��" << *(this->ptr) << "���ң�" << *(rhs.ptr) << endl;
    //        if (this != &rhs){
    //            delete ptr;
    //
    //            ptr = new int;
    //            *ptr = *rhs.ptr;
    //        }else{
    //            cout << "��ֵ������Ϊͬ�����󣬲�������" << endl;
    //        }
    //        cout << "�뿪���غ�� = ��ֵ����" << endl;
    //        return *this;
    //    };

    void print(){
        cout << "ptrָ���ֵ��" << *ptr << endl;
    };

private:
    int *ptr;
};


void f37_e1(){
    //    C_p37 a(new int (11111));
    //    C_p37 b(new int (22222));
    //    a.print();
    //    b.print();
    //
    //    a = b;
    //    a.print();
    //    b.print();

    //    C_p37 c(new int (33333));
    //    C_p37 d = c;
    //    c.print();
    //    d.print();

    //    C_p37 e(new int (55555));
    //    e = e;
    //    e.print();
}


void f37(){
    f37_e1();

}
#endif //FISHC_CPP_P37_H