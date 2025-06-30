/*
 * @lc app=leetcode.cn id=2099 lang=cpp
 * @lcpr version=30204
 *
 * [2099] 找到和最大的长度为 K 的子序列
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    static bool cmp(const pair<int,int> &a,const pair<int,int> &b){
        return a.second>b.second;
    }

    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> res;
        vector<pair<int,int>> data;
        for(int i=0;i<nums.size();i++)
            data.push_back({i,nums[i]});
        sort(data.begin(),data.end(),cmp);
        sort(data.begin(),data.begin()+k);
        for(int i=0;i<k;i++)
            res.push_back(data[i].second);
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,1,3,3]\n2\n
// @lcpr case=end

// @lcpr case=start
// [-1,-2,3,4]\n3\n
// @lcpr case=end

// @lcpr case=start
// [3,4,3,3]\n2\n
// @lcpr case=end

 */

