//
// Created by Ce Yang on 2021/8/1.
//

#ifndef FISHC_CPP_P2_H
#define FISHC_CPP_P2_H

#endif //FISHC_CPP_P2_H

#include <iostream>

using namespace std;


int addArray_array(int array[], int n){
    cout << "array size: " << sizeof(array) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += array[i];
    }
    return sum;
}


int addArray_pointer(int *array, int n){
    cout << "array size: " << sizeof(array) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += *array++;
    }
    return sum;
}


void f2(){
    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "sizeof size: " << sizeof(data) << endl;

    int length = sizeof(data) / sizeof(data[0]);
    cout << "length of data: " << length << endl;

//    int sum = addArray_array(data, length);
    int sum = addArray_pointer(data, length);
    cout << "sum of data array: " << sum << endl;

}