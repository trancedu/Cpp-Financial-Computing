//
//  main.cpp
//  HW3
//
//  Created by 杜学渊 on 10/1/21.
//

#include <iostream>
using namespace std;

class DefInt
{
private:
    double a, b;
    double (*funcptr)(double);
public:
    DefInt(double a_, double b_, double (*funcptr_)(double)): a(a_), b(b_), funcptr(funcptr_){};
    double ByTrapzoid(int N)
    {
        double s = 0;
        double h = (b-a) / N;
        for (int k=1; k <= N-1; k++)
        { s += funcptr(a+k*h) * 2; }
        s += funcptr(a) + funcptr(b);
        double sum = s * h / 2;
        return sum;
    }
    double BySimpson(int N)
    {
        double s = 0;
        double h = (b-a) / N;
        for (int k=1; k <= N/2-1; k++)
        { s += 2 * funcptr(a+2*k*h) + 4 * funcptr(a+(2*k-1)*h);}
        s += funcptr(a) + funcptr(b) + 4 * funcptr(a+(2*N/2-1)*h);
        double sum = s * h / 3;
        return sum;
    }
};

double f(double x) { return x*x*x -x*x + 1;}
int main(int argc, const char * argv[]) {
    DefInt MyInt(1.0, 2.0, f);
    cout << MyInt.ByTrapzoid(100) << endl;
    cout << MyInt.BySimpson(100) << endl;
    return 0;
}

/*
 2.41673
 2.41667
 Program ended with exit code: 0
 */
