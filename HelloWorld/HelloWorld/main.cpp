//
//  main.cpp
//  HelloWorld
//
//  Created by 杜学渊 on 9/17/21.
//

#include <iostream>
using namespace std;
void MySwap(int * x, int * y)
{
    int temp = *x;
    *x = *y ;
    *y = temp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 3, num2 = 4;
    MySwap(&num1, &num2);
    cout << num1 << ' ' << num2 << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
