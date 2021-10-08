#include "BinomialTreeModel.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace fre;

double comb(int N, int i)
{
    double s = 1;
    if (i < 0 || i > N)
    {
        cout << "Warning: input number < 0 or > " << N << endl;
        return s;
    }
    for (int j = 1; j <= i; j++)
    {
        s = s * (N - j + 1) / j;
    }
    return s;
}

int main2()
{
    double u = 1.15125, d = 0.86862, r = 1.00545;
    double s0 = 106.00; double N = 8;
    if (ValidateInputData(s0, u, d, r) == -1)
    return -1;
    
    double q = RiskNeutProb(u, d, r);
    double H = 0;
    for (int i = 0; i <= N; i++)
    {
        H = H + comb(N, i) * pow(q, i) * pow(1-q, N-i) * max(CalculateAssetPrice(s0, u, d, N, i), 0.0);
    }
    H = H / pow(r, N);
    cout << H << endl;
    return 0;

}
