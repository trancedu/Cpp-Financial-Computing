//
//  Function Pointer.cpp
//  Pointer
//
//  Created by 杜学渊 on 9/18/21.
//

#include "Function Pointer.hpp"
#include <iostream>
using namespace std;
int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 1, y = 2;
    int (*fp) (int, int) = addition;
    int result = fp(x, y);
    cout << "Addition of x and y = " << result << endl;
    return 0;
}
