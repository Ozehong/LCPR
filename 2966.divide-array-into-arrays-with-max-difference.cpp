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

        int key=0;
        while(key<nums.size()){
            if(nums[key+2]-nums[key]<=k)
                ans.push_back({nums[key],nums[key+1],nums[key+2]});
            else return {};
            key+=3;
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

