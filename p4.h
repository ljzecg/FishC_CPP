//
// Created by yangce on 2021/8/2.
//

#ifndef FISHC_CPP_P4_H
#define FISHC_CPP_P4_H

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


void copyfile_c(int argc, char *argv[]){
    // 两个文件指针，分别作为两个I/O流对象使用
    FILE *in, *out;
    int ch;

    if (argc != 3){
        fprintf(stderr, "输入形式：copyfile 源文件名 目标文件名 \n");
        exit(EXIT_FAILURE);
    }
    in = fopen(argv[1], "rb");
    if (in == NULL){
        fprintf(stderr, "打不开文件：%s \n", argv[1]);
        exit(EXIT_FAILURE);
    }

    out = fopen(argv[2], "wb");
    if (out == NULL){
        fprintf(stderr, "打不开文件%s\n", argv[2]);
        // 记得要关闭文件
        fclose(in);
        exit(EXIT_FAILURE);
    }

    // getc()函数一次从输入流（stdin）读取一个字符，返回值是int类型，应该丁雨薇int ch，而不是char ch
    // putc()函数把这个字符写入到输入流（stdout）
    // 当getc()遇到文件结束标志的时候，函数就返回EOF。
    // EOF是一个宏，在stdio.h中定义，其值为一个负整数，通常为-1

    while ((ch = getc(in) != EOF)){
        if (putc(ch, out) == EOF){
            break;
        }
    }
}

void p4_example1(){
    // 文件读取类 ifstream
    ifstream in;
    in.open("test.txt");

    if (!in){
        cerr << "打开文件失败" << endl;
        return;
    }

    char x;
    while (in >> x){
        cout << x;
    }
    cout << endl;
    in.close();
}

void p4_example2(){
    // 文件写入类 ofstream
    ofstream out;
    out.open("test.txt");
    if (!out){
        cerr << "打开文件失败" << endl;
        return;
    }
    for (int i = 0; i < 10; i++){
        out << i;
    }
    out << endl;
    out.close();
}

void p4_example3(){
    //    static constexpr _Openmode in         = static_cast<_Openmode>(0x01);
    //    static constexpr _Openmode out        = static_cast<_Openmode>(0x02);
    //    static constexpr _Openmode ate        = static_cast<_Openmode>(0x04);
    //    static constexpr _Openmode app        = static_cast<_Openmode>(0x08);
    //    static constexpr _Openmode trunc      = static_cast<_Openmode>(0x10);
    //    static constexpr _Openmode _Nocreate  = static_cast<_Openmode>(0x40);
    //    static constexpr _Openmode _Noreplace = static_cast<_Openmode>(0x80);
    //    static constexpr _Openmode binary     = static_cast<_Openmode>(0x20);

    //std::ios_base::in: 打开文件进行读操作，即读取文件中的数据
    //如果指定路径中没有包含该文件，不会创建，而且设置std::ios_base::badbit.

    //std::ios_base::out: 打开文件进行写操作，即写入数据到文件。
    //如果指定路径中并没有包含该文件，会创建一个新的.文件
    //如果指定的路径中包含有该文件，那么打开后，会清空文件中内容，其实就是暗含了std::ios_base::truc.

    //std::ios_base::in | std::ios_base::out: 打开文件进行读写操作
    //如果指定的路径没有包含该文件，也不会创建，并且会设置std::ios_base::badbit.

    //std::ios_base::app: 每次进行写入操作的时候都会重新定位到文件的末尾.
    //如果指定路径不存在该文件那么创建一个.

    //std::ios_base::ate: 打开文件之后立即定位到文件末尾
    //如果指定的路径不存在该文件不会创建.

    //std::ios_base::trunc: 打开文件，若文件已存在那么，清空文件内容.
    //如果指定的路径不存在该文件不会创建.如果指定的路径含有该文件那么清空文件中的内容.

    //std::ios_base::binary: 以二进制的方式对打开的文件进行读写.
    //如果指定的路径不存在该文件不会创建.

    ofstream out;
    out.open("test.txt", ios_base::app);
    if (!out){
        cerr << "打开文件失败" << endl;
        return;
    }
    for (int i = 10; i < 20; i++){
        out << i;
    }
    out << endl;
    out.close();
}

void p4_example4(){
    fstream fp("test.txt", ios_base::in | ios_base::out);
    if (!fp){
        cerr << "打开文件失败" << endl;
        return;
    }
    fp << "I_Love_FishC.com!!!";

    // 静态，为了不能被改变
    static char str[100];
    // 使得文件指针只想文件头, ios_base::end 则是文件尾
    fp.seekg(ios_base::beg);
    fp >> str;
    cout << str << endl;
    fp.close();
}

void copyfile_cpp(int argc, char *argv[]){

}


void f4(int argc, char *argv[]){

    //    copyfile_c(argc, argv);

    //    p4_example1();

    //    p4_example2();

    //    p4_example3();

    p4_example4();

}
#endif //FISHC_CPP_P4_H
