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
        int res=0;
        int m=0,temp_k=k;
        while(temp_k){
            temp_k /=2;
            m++;
        }

        int len = s.length();
        if(m>len)
            return len;

        int temp=0;
        for(int i=len-m;i<len;i++){
            temp = temp * 2 + (s[i]-'0');
        }
        if(temp<=k)
            res=m;
        else res = m-1;

        for(int i=0;i<len-m;i++)
            if(s[i]=='0')
                res +=1;
        
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

