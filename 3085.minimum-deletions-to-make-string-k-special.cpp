/*
 * @lc app=leetcode.cn id=3085 lang=cpp
 * @lcpr version=30204
 *
 * [3085] 成为 K 特殊字符串需要删除的最少字符数
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
    int minimumDeletions(string word, int k) {

        unordered_map<char,int> data;
        for(auto i:word)
            data[i] ++;
        int res=word.length();
        auto iter=data.begin();
        while(iter!=data.end()){
            int temp=0;
            auto it = data.begin();
            while(it!=data.end()){
                if(it->second-k>iter->second)
                    temp += it->second - iter->second - k;
                if(it->second < iter->second)
                    temp += it->second;
                it++;
            }
            iter++;
            res = min(res,temp);
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "aabcaba"\n0\n
// @lcpr case=end

// @lcpr case=start
// "dabdcbdcdcd"\n2\n
// @lcpr case=end

// @lcpr case=start
// "aaabaaa"\n2\n
// @lcpr case=end

 */

