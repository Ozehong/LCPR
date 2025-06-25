/*
 * @lc app=leetcode.cn id=165 lang=cpp
 * @lcpr version=30204
 *
 * [165] 比较版本号
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
    int compareVersion(string version1, string version2) {
        int len1 = version1.length(),len2=version2.length();
        int cur1=0,cur2=0;
        while(cur1<len1 || cur2<len2){
            int x=0;
            while(cur1<len1 && version1[cur1]!='.'){
                x = x*10 + (version1[cur1++]-'0');
            }
            cur1++;

            int y=0;
            while(cur2<len2 && version2[cur2]!='.'){
                y = y*10 + (version2[cur2++]-'0');
            }
            cur2++;

            if(x>y) return 1;
            if(x<y) return -1;

        }
        return 0;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "1.2"\n"1.10"\n
// @lcpr case=end

// @lcpr case=start
// "1.01"\n"1.001"\n
// @lcpr case=end

// @lcpr case=start
// "1.0"\n"1.0.0.0"\n
// @lcpr case=end

 */

