/*
 * @lc app=leetcode.cn id=1498 lang=cpp
 * @lcpr version=30204
 *
 * [1498] 满足条件的子序列数目
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
    static constexpr int P = int(1E9) + 7;
        static constexpr int MAX_N = int(1E5) + 5;

    int f[MAX_N];

    void pretreatment() {
        f[0] = 1;
        for (int i = 1; i < MAX_N; ++i) {
            f[i] = (long long)f[i - 1] * 2 % P;
        }
    }

    int numSubseq(vector<int>& nums, int target) {
        pretreatment();
        sort(nums.begin(), nums.end());
        int result = 0;
        int l,r;
        for(int i = 0; i<nums.size(); ++i){
            if(nums[i] > target - nums[i]){
                break;
            }
            if(i > 0 &&  nums[i] == nums[i-1]) {
                result = (result + f[r-i]) % P;
            }else{
                l=i+1;
                r=nums.size()-1;
                while(r>=l) {
                    int mid = l+(r-l)/2;
                    if(nums[mid] > target - nums[i]){
                        r=mid-1;
                    }else{
                        l=mid+1;
                    }
                }
                result = (result + f[r-i]) % P;
            }
        }

        return result;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,5,6,7]\n9\n
// @lcpr case=end

// @lcpr case=start
// [3,3,6,8]\n10\n
// @lcpr case=end

// @lcpr case=start
// [2,3,3,4,6,7]\n12\n
// @lcpr case=end

 */

