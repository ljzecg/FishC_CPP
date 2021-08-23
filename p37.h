//
// Created by Ce Yang on 2021/8/22.
//

#ifndef FISHC_CPP_P37_H
#define FISHC_CPP_P37_H


#include <iostream>

using namespace std;

/*
 * 副本构造器
 */


class C_p37{
public:
    C_p37(int *p){
        cout << "进入主构造器" << *p << endl;
        this->ptr = p;
        cout << "离开主构造器" << *p << endl;
    };

    C_p37(const C_p37 &rhs){
        cout << "进入副本构造器" << endl;
        // 这里的 = 已经被重载了！！！
        *this = rhs;
        cout << "离开副本构造器" << endl;
    };

    ~C_p37(){
        cout << "进入析构器" << *ptr << endl;
        delete ptr;
        ptr = nullptr;
        cout << "离开析构器" << endl;
    }

    C_p37 &operator = (const C_p37 &rhs){
        //条件一 ： 对象赋值 赋值号两边为不同的对象    a=b; (a为本对象,b为传入的对象)
        if (this != &rhs){
            //判断重载函数右操作数传入的对象的引用是否和本类对象的地址一致
            //todo如果地址不一致(不是同一个对象)
            delete ptr; //释放删除 a (本对象)的指针  先把a对象的指针空间清理出来
            ptr = new int; //动态分配内存给ptr这个指针
            *ptr = *rhs.ptr;//将ptr这个指针值赋值为传入的对象的指针的值。

            /*
            以上操作在两个同类对象赋值时(a=b)：
            1.先进行判断，判断两个对象是否为同一个对象(a和b不是同一个对象)
            2.若不是同一个对象,将逐位赋值时的a对象的名为ptr的指针(逐位赋值时直接被赋值为对象b的ptr指针地址)释放,再给a对象的名为
            ptr的指针动态分配一个与对象b的ptr指针完全不同的地址(此时我们便保证了副本对象a和b中的同名指针变量ptr地址是不同的)
            3.让a和b的ptr指针指向不同地址后,此时a的ptr指针虽然有不同的地址,但这个地址不指向任何一个值(0000000),但是b对象的指针
            变量ptr指向了一个整型数值，所以我们一定要将b对象的ptr指向的值赋值给a对象的ptr指针
            */
        }
        else{
            //条件二：对象赋值 赋值号两边为同一个对象    a=a;
            cout << "赋值号两边为同个对象,不做处理!\n";
        }
        return *this;   //返回一个引用
    }

    //    // 重载赋值操作
    //    C_p37 &operator = (const C_p37 &rhs){
    //        cout << "进入重载后的 = 赋值操作" << endl;
    //        cout <<  "左：" << *(this->ptr) << "，右：" << *(rhs.ptr) << endl;
    //        if (this != &rhs){
    //            delete ptr;
    //
    //            ptr = new int;
    //            *ptr = *rhs.ptr;
    //        }else{
    //            cout << "赋值号两边为同个对象，不作处理！" << endl;
    //        }
    //        cout << "离开重载后的 = 赋值操作" << endl;
    //        return *this;
    //    };

    void print(){
        cout << "ptr指向的值：" << *ptr << endl;
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