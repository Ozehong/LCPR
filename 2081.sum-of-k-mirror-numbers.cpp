/*
 * @lc app=leetcode.cn id=2081 lang=cpp
 * @lcpr version=30204
 *
 * [2081] k 镜像数字的和
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
    bool checkhui(vector<int> &data){
        int left=0,right=data.size()-1;
        while(left<right){
            if(data[left++]!=data[right--])
                return 0;
        }
        return 1;
    }

    
    long long kMirror(int k, int n) {
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n5\n
// @lcpr case=end

// @lcpr case=start
// 3\n7\n
// @lcpr case=end

// @lcpr case=start
// 7\n17\n
// @lcpr case=end

 */

