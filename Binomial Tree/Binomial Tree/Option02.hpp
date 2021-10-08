//
//  Options02.hpp
//  Binomial Tree
//
//  Created by 杜学渊 on 9/18/21.
//

#ifndef Options02_hpp
#define Options02_hpp

#include <stdio.h>

#endif /* Options02_hpp */
#pragma once
namespace fre {
int GetInputData(int& N, double& K);
double * PriceByCRR(double S0, double U, double D, double R, int N, double K, double (*Payoff)(double z, double K));
double CallPayoff(double z, double K);
double PutPayoff(double z, double K);
double DigitCallPayoff(double z, double K);
double DigitPutPayoff(double z, double K);
}
