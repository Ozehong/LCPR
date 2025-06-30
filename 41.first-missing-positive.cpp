/*
 * @lc app=leetcode.cn id=41 lang=cpp
 * @lcpr version=30204
 *
 * [41] 缺失的第一个正数
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
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]<=0)
                nums[i] = len+1;
        }

        for(int i=0;i<len;i++){
            int temp = abs(nums[i]);
            if(temp<=len)
                nums[temp-1] = -abs(nums[temp-1]);
        }

        for(int i=0;i<len;i++){
            if(nums[i]>0)
                return i+1;
        }
            
        return len+1;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,0]\n
// @lcpr case=end

// @lcpr case=start
// [3,4,-1,1]\n
// @lcpr case=end

// @lcpr case=start
// [7,8,9,11,12]\n
// @lcpr case=end

 */

