/*
 * @lc app=leetcode.cn id=32 lang=cpp
 * @lcpr version=30204
 *
 * [32] 最长有效括号
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
    int longestValidParentheses(string s) {
        int res=0;
        stack<int> stk;
        stk.push(-1);

        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                stk.push(i);
            else{
                stk.pop();
                if(stk.empty())
                    stk.push(i);
                else
                    res = max(res,i-stk.top());
            }
        }
        return res;


        // int len = s.length();
        // int res=0;
        // vector<int> dp(len+1,0);


        // for(int i=1;i<=s.length();i++){
        //     if(s[i]==')'){
        //         if(s[i-1]=='(' ){
        //             dp[i] = ((i-2)>=0?dp[i-2]:0) +2;
        //         }
        //         else if(s[i-1]==')' && (i-1-dp[i-1]>=0 && s[i-1-dp[i-1]]=='(')){
        //             dp[i] = dp[i-1] + 2 + ((i-2-dp[i-1])>=0?dp[i-2-dp[i-1]]:0);
        //         }
        //     }
        //     res = max(res,dp[i]);
        // }
        // return res;


        // // case 2: 保持栈底元素为当前已经遍历过的元素中「最后一个没有被匹配的右括号的下标」
        // int res=0,temp=0;
        // int before = 0;

        // stack<int> data;
        // data.push(-1);
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='('){
        //         data.push(i);
        //     }
        //     else{
        //         data.pop();
        //         if(data.empty()){
        //             data.push(i);
        //         }
        //         else{
        //             res = max(res,i-data.top());
        //         }
        //     }      
        // }
        // return res;

        // case 3
        // int res=0;
        // int left =0,right=0;
        // for(int i=s.length()-1;i>=0;i--){
        //     if(s[i]=='(')
        //         left++;
        //     if(s[i]==')')
        //         right++;
            
        //     if(left==right){
        //         res = max(res,2*right);
        //     }
        //     if(left>right){
        //         left=0;right=0;
        //     }
        // }
        // left =0,right=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(')
        //         left++;
        //     if(s[i]==')')
        //         right++;
            
        //     if(left==right){
        //         res = max(res,2*right);
        //     }
        //     if(left<right){
        //         left=0;right=0;
        //     }
        // }
        // return res;

    }
};
// @lc code=end



/*
// @lcpr case=start
// "(()"\n
// @lcpr case=end

// @lcpr case=start
// ")()())"\n
// @lcpr case=end

// @lcpr case=start
// ""\n
// @lcpr case=end

 */

