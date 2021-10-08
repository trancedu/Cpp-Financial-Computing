//
//  Option03.hpp
//  Binomial Tree Model Class
//
//  Created by 杜学渊 on 9/30/21.
//

#ifndef Option03_hpp
#define Option03_hpp

#include <stdio.h>

#endif /* Option03_hpp */
#pragma once
#include "BinomialTreeModel02.hpp"

namespace fre {
//inputting and displaying option data
int GetInputData(int& N, double& K);

//pricing European option
double * PriceByCRR(const BinomialTreeModel & Model, int N, double K,
                    double (*Payoff)(double z, double K));
//computing Call Payoff
double CallPayoff(double z, double K);

// computing Put Payoff
double PutPayoff(double z, double K);
}
