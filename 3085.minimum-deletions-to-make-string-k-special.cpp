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
        for(auto i:word){
            data[i]++;
        }

        auto iter = data.begin();
        int res=word.size()+1;
        while(iter!=data.end()){
            auto temp = data.begin();
            int num=0;
            while(temp!=data.end()){
                if(temp->second<iter->second)
                    num += temp->second;
                if(temp->second- iter->second > k)
                    num += (temp->second- iter->second-k);
                temp++;
            }
            res = min(res,num);
            iter++;
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

