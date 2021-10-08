//
//  main.cpp
//  OOP2
//
//  Created by 杜学渊 on 9/24/21.
//


#include <iostream>
using namespace std;


// Method 0
/*
class Rectangle
{
private:
    int width, length;
public:
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
    }
    int area()
    {
        return width * length;
    }
};

int main()
{
    Rectangle rect(3, 5);
    cout << rect.area() << endl;
    return 0;
}
*/


// Method 0 copy
/*
class Rectangle
{
private:
    int width, length;
public:
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
    }
    int area()
    {
        return width * length;
    }
};

int main()
{
    Rectangle rect(5, 8);
    cout << rect.area() << endl;
    return 0;
}
*/

// Method 1
/*
class Rectangle
{
private:
    int width, length;
public:
    Rectangle() {width = 0; length=0;};
    void set(int w, int l);
    int area() {return width * length; }
};

void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}

int main()
{
    Rectangle rect;
    rect.set(3, 8);
    cout << rect.area() << endl;
    return 0;
}
*/

// Method 1 copy
/*
class Rectangle
{
private:
    int width, length;
public:
    Rectangle() {width = 0; length = 0;};
    void set(int w, int l)
    {
        width = w;
        length = l;
    };
    int area()
    {
        return width * length;
    }
};

int main()
{
    Rectangle rect;
    rect.set(4, 9);
    cout << rect.area() << endl;
    return 0;
}
*/

//Method 1 copy 2
class Rectangle
{
private:
    int width, length;
public:
    Rectangle() {width = 0; length = 0;};
    void set(int w, int l);
    int area() {return width * length;}
};

void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}
int main()
{
    Rectangle rect;
    rect.set(8,7);
    cout << rect.area() << endl;
    return 0;
}
