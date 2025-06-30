/*
 * @lc app=leetcode.cn id=34 lang=cpp
 * @lcpr version=30204
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid=0;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]>target)
                right = mid-1;
            else if(nums[mid]<target)
                left = mid+1;
            else break;
        }
        if(left>right) return {-1,-1};

        left=mid-1;
        while(left>=0 && nums[left]==target)
            left--;
        right=mid+1;
        while(right<nums.size() && nums[right]==target)
            right++;
        
        return {left+1,right-1};

    }
};
// @lc code=end



/*
// @lcpr case=start
// [5,7,7,8,8,10]\n8\n
// @lcpr case=end

// @lcpr case=start
// [5,7,7,8,8,10]\n6\n
// @lcpr case=end

// @lcpr case=start
// []\n0\n
// @lcpr case=end

 */

