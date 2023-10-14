#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <tuple>
#include <cmath>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)
using ll = long long;

class DinkyFish
{
public:
    int monthsUntilCrowded(int tankVolume, int maleNum, int femaleNum)
    {
        int diff = max(maleNum, femaleNum) - min(maleNum, femaleNum);
        int num = min(maleNum, femaleNum) * 2;
        // cout << "diff=" << diff << ", num=" << num << endl;
        int month = 0;
        while (tankVolume * 2 >= (num + diff))
        {
            num *= 2;
            month++;
        }
        return month;
    }
};

int main()
{
    DinkyFish df;
    cout << df.monthsUntilCrowded(10, 4, 6) << endl;
    cout << df.monthsUntilCrowded(100, 4, 6) << endl;
    cout << df.monthsUntilCrowded(5, 6, 4) << endl;
    cout << df.monthsUntilCrowded(4, 6, 4) << endl;
    cout << df.monthsUntilCrowded(1000000, 3, 2) << endl;
    cout << df.monthsUntilCrowded(431131, 764, 249) << endl;
    return 0;
}
