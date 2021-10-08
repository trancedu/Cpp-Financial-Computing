//
//  Option01.cpp
//  Binomial Tree
//
//  Created by 杜学渊 on 9/17/21.
//

//#include "Option01.h"
//#include "BinomialTreeModel.h"
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//namespace fre
//{
//double PriceByCRR(double S0, double U, double D, double R, int N, double K)
//{
//    double q = RiskNeutProb(U, D, R);
//    double Price[N];
//    for (int i = 0; i < N; i++)
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
//
//double CallPayoff(double z, double K)
//{
//    if (z > K) return z - K;
//    return 0.0;
//}
//}
