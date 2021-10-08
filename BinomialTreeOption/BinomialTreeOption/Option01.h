//
//  Option01.hpp
//  Binomial Tree
//
//  Created by 杜学渊 on 9/17/21.
//

#ifndef Option01_hpp
#define Option01_hpp

#include <stdio.h>

#endif /* Option01_hpp */
namespace fre
{
double comb(int N, int i);
// pricing European option
double PriceByCRR(double S0, double U, double D, double R, int N, double K);

// compute call payoff
double CallPayoff(double z, double K);


}
