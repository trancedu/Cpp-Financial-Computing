//
//  main.cpp
//  OOP try
//
//  Created by 杜学渊 on 9/24/21.
//

#include <iostream>
using namespace std;

//class Rectangle
//{
//private:
//    int width, length;
//public:
//    Rectangle() {width = 0; length = 0;}
//    void set(int w, int l);
//    void change(int w, int l);
//    int area() {return width * length;}
//};
//
//void Rectangle::set(int w, int l)
//{
//    width = w;
//    length = l;
//}
//
//void Rectangle::change(int w, int l)
//{
//    width = w;
//    length = l;
//}

//class Rectangle
//{
//private:
//    int width, length;
//public:
//    Rectangle(int w, int l)
//    {
//        width = w;
//        length = l;
//    }
//    int area()
//    {
//        return width * length;
//    }
//};

class Rectangle
{
private:
    int width, length;
public:
    Rectangle() {width=0; length=0;}
    void set(int w, int l);
    int area() {return width*length;}
};

void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}

class Time
{
private:
    int hrs, mins, secs;
public:
    Time(int h, int m, int s);
    void Print() const;
};

Time::Time(int h, int m, int s) : hrs(h), mins(m), secs(s)
{ }
void Time :: Print() const
{
    cout << hrs << ":" << mins << ":" << secs << endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Rectangle rect;
    rect.set(3, 8);
//    rect.change(8,8);
    cout << rect.area() << endl;
    Time time(13,14,59);
    time.Print();
    return 0;
}
