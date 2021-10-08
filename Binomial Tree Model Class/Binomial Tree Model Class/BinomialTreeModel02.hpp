//
//  BinomialTreeModel02.hpp
//  Binomial Tree Model Class
//
//  Created by 杜学渊 on 9/30/21.
//

#ifndef BinomialTreeModel02_hpp
#define BinomialTreeModel02_hpp

#include <stdio.h>

#endif /* BinomialTreeModel02_hpp */

#pragma once
namespace fre {
    class BinomialTreeModel
    {
    private:
        double S0, U, D, R;
    public:
        BinomialTreeModel():S0(0), U(0), D(0), R(0) {}
        BinomialTreeModel(double S0_, double U_, double D_, double R_)
        :S0(S0_), U(U_), D(D_), R(R_) {}
        BinomialTreeModel(const BinomialTreeModel& B)
        :S0(B.S0), U(B.U), D(B.D), R(B.R) {}
        ~BinomialTreeModel() {}
        double RiskNeutProb() const;
        double calculateAssetPrice(int n, int i) const;
        void UpdateBinomialTreeModel(double S0_, double U_, double D_, double R_);
        int ValidateInputData() const;
        int GetinputData();
        double GetS0() const {return S0;}
        double GetU() const {return U;}
        double GetD() const {return D;}
        double GetR() const {return R;}
    };

}
