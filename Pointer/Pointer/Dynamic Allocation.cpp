//
//  Dynamic Allocation.cpp
//  Pointer
//
//  Created by 杜学渊 on 9/18/21.
//

#include "Dynamic Allocation.hpp"
#include <iostream>
using namespace std;
int * getNum1() // Wrong!
{
    int num = 10;
    num += 1;
    return &num; //this will be released
}

int getNum2()
{
    int num = 10;
    num += 1;
    return num;
}

void getNum3(int * ptr)
{ *ptr += 1; }

int * getNum4() // Wrong!
{
    int * ptr = new int;
    *ptr = 10;
    *ptr += 1;
//    delete ptr;
    return ptr;
}

int main2()
{
//    cout << getNum1() << endl;
//    int *ptr1 = getNum1(); // use address of a local variable from getNum1
//    cout << "*ptr1=" << *ptr1 << endl;
//    cout << ptr1 << endl;
//    *ptr1 += 1;
//    cout << "*ptr1=" << *ptr1 << endl;
    int x = getNum2();
    x += 1;
    cout << "x=" << x << endl;
    int y = 10;
    getNum3(&y);
    y += 1;
    cout << "y=" << y << endl;
    int * ptr2 = nullptr;
    ptr2 = getNum4();
    *ptr2 += 1;
    cout << "*ptr2=" << *ptr2 << endl;
    delete ptr2;
    ptr2 = NULL;
    return 0;
}
