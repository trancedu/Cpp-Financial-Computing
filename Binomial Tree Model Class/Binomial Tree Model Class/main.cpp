//
//  main.cpp
//  Binomial Tree Model Class
//
//  Created by 杜学渊 on 9/18/21.
//

#include <iostream>
using namespace std;
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
//    int GetWidth()
//    {
//        return width;
//    }
//    void SetWidth(int w)
//    {
//        width = w;
//    }
//};
//
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    Rectangle rectangle = Rectangle(3, 4);
//    cout << rectangle.area() << endl;
//    cout << rectangle.GetWidth() << endl;
//    Rectangle rect(3, 5);
//    rect.SetWidth(8);
//    cout << rect.area() << endl;
//    return 0;
//}


/*
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, length;
public:
    Rectangle(int w, int l) {width=w; length=l;}
    void set(int w, int l) {width=w; length=l;}
    int area() {return width * length;}
};

int main()
{
    Rectangle rect(5, 8);
    rect.set(6, 7);
    cout << rect.area() << endl;
}
*/

// copy constructor, pointers
/*
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;
public:
    Rectangle():width(0), length(0){};
//    Rectangle(const Rectangle &r) : width(r.width), length(r.length){}
    void set(int w, int l);
    int area();
};

//Rectangle::Rectangle(int w, int l):width(w), length(l){}
void Rectangle::set(int w, int l) {width = w; length = l;}
int Rectangle::area(){return width * length;}

int main()
{
    Rectangle rect1;
    rect1.set(8, 9);
    cout << rect1.area() << endl;
    Rectangle *rect2 = nullptr;
    rect2 = new Rectangle[3]; // attention: here you don't need *rect = new
    rect2->set(7,2);
    cout << rect2->area() << endl;
//    cout << (rect2+1)->set(3,6);
//    cout << (rect2+1)->area() << endl;
    Rectangle *rect3 = new Rectangle;
    rect3->set(8,7);
    cout << rect3->area() << endl;
    Rectangle rect4 = *rect3;
    cout << rect4.area() << endl;
    Rectangle *rect5 = rect3;
    cout << rect5->area() << endl;
}
*/


// Accout
/*
class Account
{
private:
    char *name;
    double balance;
    unsigned int id;
public:
    Account();
    Account(const Account &a);
    Account(char * const person);
    ~Account();
};

Account::Account(): name(NULL), balance(0.0), id(0) {};
Account::Account(const Account &a) : name(a.name), balance(a.balance), id(a.id)
{
    name = new char[strlen(a.name)+1];
    strcpy(name, a.name);
}
Account::Account(char *const person):balance(0.0), id(0)
{
    name = new char[strlen(person)+1];
    strcpy(name, person);
}

Account::~Account()
{
    if (name != NULL)
        delete[] name;
}
*/


// Static Data Member
/*
class Rectangle
{
private:
    int width, length;
    static int count;
public:
    Rectangle() : length(0), width(0)
    {
        count++;
        cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
    }
    
    Rectangle(int length_, int width_): length(length_), width(width_)
    {
        count ++;
        cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
    }
    
    Rectangle(const Rectangle &R): length(R.length), width(R.width)
    {
        count ++;
        cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
    }
    
    // destructor
    ~Rectangle()
    {
        count --;
        cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
    }
    static int GetCount() {return count;}

};

void RectangleQuestion(void)
{
    Rectangle R1, R2(10, 2), R3 = R2;
    cout << "The number of rectangles = " << Rectangle::GetCount() << endl;
} // destructor will be invoked for each object; last created object will be the 1st to destroy
int Rectangle::count = 0;

int main(void)
{
    RectangleQuestion();
    return 0;
}
*/



