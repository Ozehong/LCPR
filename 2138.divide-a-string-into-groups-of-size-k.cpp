/*
 * @lc app=leetcode.cn id=2138 lang=cpp
 * @lcpr version=30204
 *
 * [2138] 将字符串拆分为若干长度为 k 的组
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
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int num = s.length()%k?s.length()/k+1:s.length()/k;
        for(int i=0;i<num;i++){
            cout<<i;
            if(i!=num-1){
                res.push_back(s.substr(i*k,k));
                
            }     
            else{
                string temp = s.substr(i*k);
                if(i==s.length()/k)
                    while(temp.length()!=k)
                        temp+=fill;
                res.push_back(temp);
            }


        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abcdefghi"\n3\n"x"\n
// @lcpr case=end

// @lcpr case=start
// "abcdefghij"\n3\n"x"\n
// @lcpr case=end

 */

