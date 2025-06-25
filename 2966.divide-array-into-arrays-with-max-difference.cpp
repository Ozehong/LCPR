/*
 * @lc app=leetcode.cn id=2966 lang=cpp
 * @lcpr version=30204
 *
 * [2966] 划分数组并满足最大差限制
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
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        int cur=0;
        while(cur<nums.size()/3){
            if(nums[cur*3+2]-nums[cur*3]>k)
                return {};
            ans.push_back({nums[cur*3],nums[cur*3+1],nums[cur*3+2]});
            cur++;
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3,4,8,7,9,3,5,1]\n2\n
// @lcpr case=end

// @lcpr case=start
// [2,4,2,2,5,2]\n2\n
// @lcpr case=end

// @lcpr case=start
// [4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11]\n14\n
// @lcpr case=end

 */

