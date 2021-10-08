//
//  OptionPricer03.cpp
//  Binomial Tree Model Class
//
//  Created by 杜学渊 on 9/30/21.
//

#include "OptionPricer03.hpp"
#include "BinomialTreeModel02.hpp"
#include "Option03.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace fre;

int main()
{
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K = 100.00;
    BinomialTreeModel BinModel(S0, U, D, R);
    if (BinModel.ValidateInputData() != 0) return -1;
    double * optionPrice = NULL;
    optionPrice = PriceByCRR(BinModel, N, K, CallPayoff);
    cout << "European Call option price = " << optionPrice[0] << endl;
    optionPrice = PriceByCRR(BinModel, N, K, PutPayoff);
    cout << "European Put option price = " << optionPrice[0] << endl;
    delete optionPrice; // Dynamic allocation needs to be deleted
    optionPrice = NULL;
    return 0;
}
