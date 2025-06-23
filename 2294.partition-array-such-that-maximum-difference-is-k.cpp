/*
 * @lc app=leetcode.cn id=2294 lang=cpp
 * @lcpr version=30204
 *
 * [2294] 划分数组使最大差为 K
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
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=0,left=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]-nums[left]>k){
                left=i;
                res++;
            }
        }
        return res+1;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,6,1,2,5]\n2\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n1\n
// @lcpr case=end

// @lcpr case=start
// [2,2,4,5]\n0\n
// @lcpr case=end

 */

