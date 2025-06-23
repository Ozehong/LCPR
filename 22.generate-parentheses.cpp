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
    // void dfs(int k,int lc,int rc,string &str){
    //     if(rc==k){
    //         res.push_back(str);
    //         return;
    //     }
 
    //     if(lc==rc && lc<k){
    //         str.push_back('(');
    //         dfs(k,lc+1,rc,str);
    //         str.pop_back();
    //     }
    //     else if(lc>rc){
    //         if(lc<k){
    //             str.push_back('(');
    //             dfs(k,lc+1,rc,str);
    //             str.pop_back();
    //         }
            
    //         str.push_back(')');
    //         dfs(k,lc,rc+1,str);
    //         str.pop_back();
    //     }
    // }

    void dfs(int n,int lc,int rc,string temp){
        if(rc==n && lc==n){
            res.push_back(temp);
            return;
        }
    
        if(lc>=rc){
            if(lc==n){
                temp.push_back(')');
                dfs(n,lc,rc+1,temp);
                temp.pop_back();
            }
            else{
                temp.push_back('(');
                dfs(n,lc+1,rc,temp);
                temp.pop_back();

                temp.push_back(')');
                dfs(n,lc,rc+1,temp);
                temp.pop_back();
            }
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

