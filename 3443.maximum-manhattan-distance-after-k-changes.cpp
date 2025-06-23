/*
 * @lc app=leetcode.cn id=3443 lang=cpp
 * @lcpr version=30204
 *
 * [3443] K 次修改后的最大曼哈顿距离
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
    int maxDistance(string s, int k) {
        int N=0,S=0,E=0,W=0,res=0;
        
        for(auto &ch:s){
            int temp=0;
            switch (ch)
            {
            case 'N':
                N++;
                break;
            case 'S':
                S++;
                break;
            case 'E':
                E++;
                break;
            case 'W':
                W++;
                break;
            default:
                break;
            }
            temp += max(N,S)+max(E,W);
            if(min(N,S)+min(E,W)<=k)
                temp += min(N,S)+min(E,W);
            else temp += 2*k - min(N,S)-min(E,W);

            res = max(res,temp);
            // cout<<res<<endl;
        }
        return res;

    }
};
// @lc code=end



/*
// @lcpr case=start
// "NWSE"\n1\n
// @lcpr case=end

// @lcpr case=start
// "NSWWEW"\n3\n
// @lcpr case=end

 */

