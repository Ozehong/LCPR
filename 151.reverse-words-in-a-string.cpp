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
        while(left<right)
            swap(s[left++],s[right--]);
    }
    void remodespace(string &s){
        int cur=0,len = s.length();
        int temp=0;

        while(temp<len){
            while(temp<len && s[temp]==' ')
                temp++;
            if(temp<len && cur!=0)
                s[cur++] = ' ';
            int left=cur;
            while(temp<len && s[temp]!=' ')
                s[cur++] = s[temp++];
            int right = cur;
            reverse(left,right-1,s);
        }
        s.resize(cur);
    }
    string reverseWords(string s) {
        reverse(0,s.length()-1,s);
        remodespace(s);
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

