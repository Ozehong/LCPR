/*
 * @lc app=leetcode.cn id=151 lang=cpp
 * @lcpr version=30204
 *
 * [151] 反转字符串中的单词
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
    void reverse(int left,int right,string &s){
        while(left<right){
            swap(s[left++],s[right--]);
        }
        // return s;
    }

    void removespace(string &s){
        int left=0,right=0;
        int low=0,cur=0;

        int i=0;
        while(i<s.length()){
            // cout<<s<<endl;
            while(i<s.length() && s[i]==' '){
                i++;
            }
            if(cur && i<s.length()) 
                s[cur++] = ' ';
            int left=cur;
            while(i<s.length() && s[i]!=' '){
                s[cur++] = s[i++];
            }
            right=cur-1;
            reverse(left,right,s);
        }
        
        s.resize(cur);
        
    }

    string reverseWords(string s) {
        removespace(s);
        reverse(0,s.length()-1,s);
        return s;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "the sky is blue"\n
// @lcpr case=end

// @lcpr case=start
// "  hello world  "\n
// @lcpr case=end

// @lcpr case=start
// "a good   example"\n
// @lcpr case=end

 */

