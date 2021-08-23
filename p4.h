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
    // �����ļ�ָ�룬�ֱ���Ϊ����I/O������ʹ��
    FILE *in, *out;
    int ch;

    if (argc != 3){
        fprintf(stderr, "������ʽ��copyfile Դ�ļ��� Ŀ���ļ��� \n");
        exit(EXIT_FAILURE);
    }
    in = fopen(argv[1], "rb");
    if (in == NULL){
        fprintf(stderr, "�򲻿��ļ���%s \n", argv[1]);
        exit(EXIT_FAILURE);
    }

    out = fopen(argv[2], "wb");
    if (out == NULL){
        fprintf(stderr, "�򲻿��ļ�%s\n", argv[2]);
        // �ǵ�Ҫ�ر��ļ�
        fclose(in);
        exit(EXIT_FAILURE);
    }

    // getc()����һ�δ���������stdin����ȡһ���ַ�������ֵ��int���ͣ�Ӧ�ö���ޱint ch��������char ch
    // putc()����������ַ�д�뵽��������stdout��
    // ��getc()�����ļ�������־��ʱ�򣬺����ͷ���EOF��
    // EOF��һ���꣬��stdio.h�ж��壬��ֵΪһ����������ͨ��Ϊ-1

    while ((ch = getc(in) != EOF)){
        if (putc(ch, out) == EOF){
            break;
        }
    }
}

void p4_example1(){
    // �ļ���ȡ�� ifstream
    ifstream in;
    in.open("test.txt");

    if (!in){
        cerr << "���ļ�ʧ��" << endl;
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
    // �ļ�д���� ofstream
    ofstream out;
    out.open("test.txt");
    if (!out){
        cerr << "���ļ�ʧ��" << endl;
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

    //std::ios_base::in: ���ļ����ж�����������ȡ�ļ��е�����
    //���ָ��·����û�а������ļ������ᴴ������������std::ios_base::badbit.

    //std::ios_base::out: ���ļ�����д��������д�����ݵ��ļ���
    //���ָ��·���в�û�а������ļ����ᴴ��һ���µ�.�ļ�
    //���ָ����·���а����и��ļ�����ô�򿪺󣬻�����ļ������ݣ���ʵ���ǰ�����std::ios_base::truc.

    //std::ios_base::in | std::ios_base::out: ���ļ����ж�д����
    //���ָ����·��û�а������ļ���Ҳ���ᴴ�������һ�����std::ios_base::badbit.

    //std::ios_base::app: ÿ�ν���д�������ʱ�򶼻����¶�λ���ļ���ĩβ.
    //���ָ��·�������ڸ��ļ���ô����һ��.

    //std::ios_base::ate: ���ļ�֮��������λ���ļ�ĩβ
    //���ָ����·�������ڸ��ļ����ᴴ��.

    //std::ios_base::trunc: ���ļ������ļ��Ѵ�����ô������ļ�����.
    //���ָ����·�������ڸ��ļ����ᴴ��.���ָ����·�����и��ļ���ô����ļ��е�����.

    //std::ios_base::binary: �Զ����Ƶķ�ʽ�Դ򿪵��ļ����ж�д.
    //���ָ����·�������ڸ��ļ����ᴴ��.

    ofstream out;
    out.open("test.txt", ios_base::app);
    if (!out){
        cerr << "���ļ�ʧ��" << endl;
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
        cerr << "���ļ�ʧ��" << endl;
        return;
    }
    fp << "I_Love_FishC.com!!!";

    // ��̬��Ϊ�˲��ܱ��ı�
    static char str[100];
    // ʹ���ļ�ָ��ֻ���ļ�ͷ, ios_base::end �����ļ�β
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
