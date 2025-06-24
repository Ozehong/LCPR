/*
 * @lc app=leetcode.cn id=2081 lang=cpp
 * @lcpr version=30204
 *
 * [2081] k 镜像数字的和
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
    char data[100];
public:
    bool checkhui(int len){
        int left=0,right=len-1;
        while(left<right){
            if(data[left++]!=data[right--])
                return 0;
        }
        return 1;
    }

    bool huiwen(long long i,int k){
        int len=0;
        while(i){
            data[len++] = i%k+'0';
            i = i/k;
        }
        return checkhui(len);
    }

    long long kMirror(int k, int n) {
        int l=0, num=0;
        long long res=0;
        for(l=1;;l++){
            int left = pow(10,(l-1)/2);
            int right = pow(10,(l+1)/2);
            for(int i=left;i<right;++i){
                long long v=i;
                int j = l%2?i/10:i;
                while(j){
                    v = v*10 + j%10;
                    j /= 10;
                }
                // cout<<v<<endl;
                if(huiwen(v,k)){
                    res += v;
                    num++;
                    // cout<<v<<endl;
                }
                if(num>=n) return res;
            }
        }

    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n5\n
// @lcpr case=end

// @lcpr case=start
// 3\n7\n
// @lcpr case=end

// @lcpr case=start
// 7\n17\n
// @lcpr case=end

 */

