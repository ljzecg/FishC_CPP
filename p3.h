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

    printf("请输入一串整数和任意数目的空格\n");

    while (scanf("%d", &i) == 1){
        sum += i;
        while ((ch = getchar()) == ' ');    // 屏蔽空格
        if (ch == '\n'){
            break;
        }
        // C 库函数 int ungetc(int char, FILE *stream)
        // 把字符 char（一个无符号字符）推入到指定的流 stream 中，
        // 以便它是下一个被读取到的字符。

        // 将变量ch中 存放的字符 退回给stdin输入流
        ungetc(ch, stdin);
    }
    printf("求和结果是：%d\n", sum);
    system("pause");
}


void f3_cpp(){
    int sum = 0;
    cout << "请输入一串整数 和 任意数目的 空格：";

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

    cout << "求和结果是：" << sum << endl;
}

void p3_example1(){
    char buf[20];

    // cin读取数据是从 第一个非空白字符 开始到 下一个空白字符 结束

    // 忽略前 7 个字符
    // 1234567890123456
    cin.ignore(7);

    // 890
    cin.getline(buf, 4);

    cout << buf << endl;
}

void p3_example2(){
    char p;
    cout << "请输入一段文本：" << endl;

    // peek 拿出来检查，并不放回去
    while (cin.peek() != '\n'){
        p = cin.get();
        cout << p;
    }
    cout << endl;
}

void p3_example3(){
    const int SIZE = 50;
    char buf[SIZE];

    cout << "请输入一段文本";
    // 只提取前 20 个字符
    cin.read(buf, 20);
    cout << "字符串收集到的字符数为：" << cin.gcount() << endl;

    cout << "输入的文本信息是：";
    cout.write(buf, 20);
    cout << endl;
}

void p3_homework(){
    // cout.precision()其实是输出流cout的一个格式控制函数，
    // 也就是在iostream中的一个成员函数。precision()返回当前的浮点数的精度值，
    // 而cout.precision(val)其实就是在输出的时候设定输出值以新的浮点数精度值显示，
    // 即小数点后保留val位
    cout.precision(2);
}


void f3(){

//    f3_c();
//    f3_cpp();

//    p3_example1();
//    p3_example2();
    p3_example3();

}