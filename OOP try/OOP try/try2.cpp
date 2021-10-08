//
//  try2.cpp
//  OOP try
//
//  Created by 杜学渊 on 9/24/21.
//

#include "try2.hpp"
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, length;
public:
    Rectangle() {width = 0; length = 0;}
    void set(int w, int l);
    int area() {return width * length; }
};

void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}

int main3()
{
    Rectangle rect;
    rect.set(3, 8);
    cout << rect.area() << endl;
    return 0;
}
