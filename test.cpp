/*
 * @Author: your name
 * @Date: 2020-03-24 23:57:58
 * @LastEditTime: 2020-03-31 08:35:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_resources\test.cpp
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        vector<int> St;
        prices.emplace_back(-1);
        for (int i = 0; i < prices.size(); ++ i){


            while (!St.empty() && St.back() > prices[i]){
                ans = std::max(ans, St.back() - St.front());
                cout << St.front() << endl;
                cout << St.back() << endl;
                St.pop_back();
            }
            St.emplace_back(prices[i]);
        }

        return ans;
    }
};
int main(){
    Solution slu;
    vector<int> a={7,3,5,1,6,4};
    cout << slu.maxProfit(a) << endl;
}