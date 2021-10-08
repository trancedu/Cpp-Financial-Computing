//
//  Option01.cpp
//  Binomial Tree
//
//  Created by 杜学渊 on 9/17/21.
//

#include "Option01.h"
#include "BinomialTreeModel.h"
#include <iostream>
#include <cmath>

using namespace std;
namespace fre
{
//double PriceByCRR(double S0, double U, double D, double R, int N, double K)
//{
//    double q = RiskNeutProb(U, D, R);
//    double Price[N];
//    for (int i = 0; i < sizeof(Price) / sizeof(Price[0]); i++)
//        Price[i] = 0.0;
//    for (int i = 0; i <= N; i++)
//    {
//        Price[i] = CallPayoff(CalculateAssetPrice(S0, U, D, N, i), K);
//    }
//    for (int n = N - 1; n >= 0; n--)
//    {
//        for (int i = 0; i <= n; i++)
//        {
//            Price[i] = (q * Price[i+1] + (1 - q) * Price[i]) / R;
//        }
//    }
//    return Price[0];
//}
double comb(int N, int i)
{
    double s = 1;
    if (i < 0 || i > N)
    {
        return 1;
    }
    for (int j = 1; j <= i; j++)
    {
        s = s * (N - j + 1) / j;
    }
    return s;
}

double PriceByCRR(double S0, double U, double D, double R, int N, double K)
{
    double q = RiskNeutProb(U, D, R);
    double H = 0;
    for (int i = 0; i <= N; i++)
    {
        double S = CalculateAssetPrice(S0, U, D, N, i);
        H = H + comb(N, i) * pow(q, i) * pow(1-q, N-i) * CallPayoff(S, K);
    }

    return H / pow(R, N);
}

double CallPayoff(double z, double K)
{
    if (z > K) return z - K;
    return 0.0;
}
}
