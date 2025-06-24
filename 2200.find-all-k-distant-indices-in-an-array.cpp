/*
 * @lc app=leetcode.cn id=2200 lang=cpp
 * @lcpr version=30204
 *
 * [2200] 找出数组中的所有 K 近邻下标
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
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                for(int j=((i-k)>=0?i-k:0);j<=(((i+k)<nums.size())?i+k:nums.size()-1);j++){
                    // cout<<j<<endl;
                    if(!res.size() || j>res[res.size()-1])
                        res.push_back(j);
                }
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,4,9,1,3,9,5]\n9\n1\n
// @lcpr case=end

// @lcpr case=start
// [2,2,2,2,2]\n2\n2\n
// @lcpr case=end

 */

