//
// Created by yangce on 2021/8/2.
//

#ifndef FISHC_CPP_P3_H
#define FISHC_CPP_P3_H

#endif //FISHC_CPP_P3_H

#include <iostream>

using namespace std;


void f3_c(){
    int i;
    int sum = 0;
    char ch;

    printf("������һ��������������Ŀ�Ŀո�\n");

    while (scanf("%d", &i) == 1){
        sum += i;
        while ((ch = getchar()) == ' ');    // ���οո�
        if (ch == '\n'){
            break;
        }
        // C �⺯�� int ungetc(int char, FILE *stream)
        // ���ַ� char��һ���޷����ַ������뵽ָ������ stream �У�
        // �Ա�������һ������ȡ�����ַ���

        // ������ch�� ��ŵ��ַ� �˻ظ�stdin������
        ungetc(ch, stdin);
    }
    printf("��ͽ���ǣ�%d\n", sum);
    system("pause");
}


void f3_cpp(){
    int sum = 0;
    cout << "������һ������ �� ������Ŀ�� �ո�";

    int i;
    while (cin >> i){
        sum += i;

        while (cin.peek() == ' '){
            cin.get();
        }
        if (cin.peek() == '\n'){
            break;
        }
    }

    cout << "��ͽ���ǣ�" << sum << endl;
}

void p3_example1(){
    char buf[20];

    // cin��ȡ�����Ǵ� ��һ���ǿհ��ַ� ��ʼ�� ��һ���հ��ַ� ����

    // ����ǰ 7 ���ַ�
    // 1234567890123456
    cin.ignore(7);

    // 890
    cin.getline(buf, 4);

    cout << buf << endl;
}

void p3_example2(){
    char p;
    cout << "������һ���ı���" << endl;

    // peek �ó�����飬�����Ż�ȥ
    while (cin.peek() != '\n'){
        p = cin.get();
        cout << p;
    }
    cout << endl;
}

void p3_example3(){
    const int SIZE = 50;
    char buf[SIZE];

    cout << "������һ���ı�";
    // ֻ��ȡǰ 20 ���ַ�
    cin.read(buf, 20);
    cout << "�ַ����ռ������ַ���Ϊ��" << cin.gcount() << endl;

    cout << "������ı���Ϣ�ǣ�";
    cout.write(buf, 20);
    cout << endl;
}

void p3_homework(){
    // cout.precision()��ʵ�������cout��һ����ʽ���ƺ�����
    // Ҳ������iostream�е�һ����Ա������precision()���ص�ǰ�ĸ������ľ���ֵ��
    // ��cout.precision(val)��ʵ�����������ʱ���趨���ֵ���µĸ���������ֵ��ʾ��
    // ��С�������valλ
    cout.precision(2);
}


void f3(){

//    f3_c();
//    f3_cpp();

//    p3_example1();
//    p3_example2();
    p3_example3();

}