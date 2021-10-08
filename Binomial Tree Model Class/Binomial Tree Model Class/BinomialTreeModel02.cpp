//
//  BinomialTreeModel02.cpp
//  Binomial Tree Model Class
//
//  Created by 杜学渊 on 9/30/21.
//

#include "BinomialTreeModel02.hpp"
#include <iostream>
#include <cmath>
using namespace std;
namespace fre{
    double BinomialTreeModel::RiskNeutProb() const
    {
        return (R-D) / (U-D);
    }
    double BinomialTreeModel::calculateAssetPrice(int n, int i) const
    {
        return S0 * pow(U, i) * pow(D, n-i);
    }
    void BinomialTreeModel::UpdateBinomialTreeModel(double S0_, double U_, double D_, double R_)
    {
        S0 = S0_; U = U_; D = D_; R = R_;
    }
    int BinomialTreeModel::GetinputData()
    {
        cout << "Enter S0: "; cin >> S0;
        cout << "Enter U: "; cin >> U;
        cout << "Enter D: "; cin >> D;
        cout << "Enter R: "; cin >> R;
        cout << endl;
        if (S0<=0.0 || U<=-1.0 || D<=-1.0 || U<=D || R<=-1.0)
        {
            cout << "Illegal data ranges" << endl;
            cout << "Terminating program" << endl;
            return -1;
        }
        if (R>=U || R<=D)
        {
            cout << "Arbitrage exists" << endl;
            cout << "Terminating program" << endl;
            return -1;
        }
        
        cout << "Input data checked" << endl;
        cout << "There is no arbitrage" << endl << endl;
        
        return 0;
    }
    int BinomialTreeModel::ValidateInputData() const
{
    //making sure that S0>0, U>D>0, R>0
    if (S0 <= 0.0 || U <= 0.0 || D <= 0.0 || U <= D || R <= 0.0)
    {
        cout << "Illegal data ranges" << endl;
        cout << "terminating program" << endl;
        return -1;
    }
    //checking for arbitrage
    if (R >= U || U <= D)
    {
        cout << "Arbitrage exists" << endl;
        cout << "Terminating program" << endl;
        return -1;
    }
    cout << "Input data checked" << endl;
    cout << "There is no arbitrage" << endl << endl;
    
    return 0;
}
    
}
