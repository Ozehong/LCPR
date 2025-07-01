/*
 * @lc app=leetcode.cn id=594 lang=cpp
 * @lcpr version=30204
 *
 * [594] 最长和谐子序列
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
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> data;
        for(int i:nums)
            data[i]++;
        int res=0;
        for(auto [val,num]:data){
            if(data.count(val+1))
                res = max(res,data[val+1]+num);
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3,2,2,5,2,3,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,1,1]\n
// @lcpr case=end

 */

