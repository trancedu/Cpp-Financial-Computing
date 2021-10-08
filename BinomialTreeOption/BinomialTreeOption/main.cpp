//
//  OptionPricer02.cpp
//  Binomial Tree
//
//  Created by 杜学渊 on 9/17/21.
//


#include "BinomialTreeModel.h"
#include "Option01.h"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace fre;
int main()
{
    double u = 1.15125, d = 0.86862, r = 1.00545;
    double s0 = 106.00, k = 100.00;
    const int N = 8;
    double optionPrice = PriceByCRR(s0, u, d, r, N, k);
    cout << "European call option price = " << fixed << setprecision(2) << optionPrice << endl;
    return 0;
}

/*
 European call option price = 21.68
 Program ended with exit code: 0
 */
