/*
 * @lc app=leetcode.cn id=22 lang=cpp
 * @lcpr version=30204
 *
 * [22] 括号生成
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
private:
    vector<string> res;
public:
    void dfs(int n,int lc,int rc,string &str){
        if(lc==n && rc==n){
            res.push_back(str);
            return;
        }
        if(lc>=rc){
            if(lc!=n){
                str.push_back('(');
                dfs(n,lc+1,rc,str);
                str.pop_back();
            }
            str.push_back(')');
            dfs(n,lc,rc+1,str);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string temp;
        dfs(n,0,0,temp);
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

 */

