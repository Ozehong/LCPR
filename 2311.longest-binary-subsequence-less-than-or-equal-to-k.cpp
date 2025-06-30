/*
 * @lc app=leetcode.cn id=2311 lang=cpp
 * @lcpr version=30204
 *
 * [2311] 小于等于 K 的最长二进制子序列
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
    int longestSubsequence(string s, int k) {
        int temp=k,num_k=0;
        while(temp){
            temp /= 2;
            num_k++;
        }

        int num=0;
        long long len = s.length();
        if(len<num_k)
            return len;
        for(int i=len-num_k;i<s.length();i++){
            num = num*2 + s[i]-'0';
        }
        int res= num<=k? num_k:num_k-1;
        for(int i=0;i<len-num_k;i++)
            if(s[i]=='0')
                res++;
        return res;

    }
};
// @lc code=end



/*
// @lcpr case=start
// "1001010"\n5\n
// @lcpr case=end

// @lcpr case=start
// "00101001"\n1\n
// @lcpr case=end

 */

