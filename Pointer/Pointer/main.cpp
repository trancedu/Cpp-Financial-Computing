//
//  main.cpp
//  Pointer
//
//  Created by 杜学渊 on 9/17/21.
//

#include <iostream>
using namespace std;

void getNum(int* iPtr)
{
    cin >> *iPtr;
}

void swap(int *iPtrX, int *iPtrY)
{
    int iTemp;
    iTemp = *iPtrX;
    *iPtrX = *iPtrY;
    *iPtrY = iTemp;
}
int main2(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    double dPrice = 21.68;
//    cout << &dPrice << endl;
//    double *dPtr = &dPrice;
//    cout << *dPtr << endl;
//    int iArray[] = {2, 4, 6};
//    cout << iArray << endl;
//    cout << iArray[0] << endl;
//    cout << *iArray << endl;
//    cout << *iArray+1 << endl;
//    int *arrayPtr = iArray;
//    cout << arrayPtr[1] << endl;
//    cout << arrayPtr[2] << endl;
//    cout << arrayPtr << endl;
//    cout << arrayPtr[0] << endl;
//    cout << *arrayPtr << endl;
//    cout << *(arrayPtr + 1) << endl;
//    cout << iArray[2] << endl;
//    cout << *(iArray + 2) << endl;
//    cout << *arrayPtr << endl;
//    cout << *iArray << endl;
//    cout << iArray << endl;
//    cout << arrayPtr << endl;
//    int *iPtr = NULL;
//    int iNum = 25, *numPtr = &iNum;
//    int iArray[3], *arrayPtr = iArray;
//    float dPrice = 21.83;
////    cout << *iPtr << endl;
//    cout << *&iNum << endl;
//    cout << *iArray << endl;
//    cout << *arrayPtr << endl;
//    cout << ((iArray == arrayPtr)?"True":"False") << endl;
//    if (iArray == arrayPtr) cout << "true" << endl;
    
//    int iNum = 1;
//    getNum(&iNum);
//    cout << iNum << endl;
//    return 0;
//
    int iNum1 = 2, iNum2 = 3;
    swap(&iNum1, &iNum2); // What is the difference with & and without &
    cout << iNum1 << iNum2 << endl;
    return 0;
    
}
