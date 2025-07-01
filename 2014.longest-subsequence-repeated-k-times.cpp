/*
 * @lc app=leetcode.cn id=2014 lang=cpp
 * @lcpr version=30204
 *
 * [2014] 重复 K 次的最长子序列
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
    // 47. 全排列 II
    // 枚举从 nums 中选任意个数的所有排列，用 f 处理枚举的排列
    void permuteFunc(const string& nums, auto&& f) {
        int n = nums.size();
        string path;
        vector<int8_t> on_path(n); // on_path[j] 表示 nums[j] 是否已经填入排列
        auto dfs = [&](this auto&& dfs) -> void {
            // 如果 path*k 不是 s 的子序列，那么继续往 path 后面添加元素，更不可能是 s 的子序列
            if (!path.empty() && !f(path)) {
                return; // 剪枝
            }
            if (path.size() == n) {
                return;
            }
            // 枚举 nums[j] 填入 path[i]
            for (int j = 0; j < n; j++) {
                // 如果 nums[j] 已填入排列，continue
                // 如果 nums[j] 和前一个数 nums[j-1] 相等，且 nums[j-1] 没填入排列，continue
                if (on_path[j] || j > 0 && nums[j] == nums[j - 1] && !on_path[j - 1]) {
                    continue;
                }
                path += nums[j]; // 填入排列
                on_path[j] = true; // nums[j] 已填入排列（注意标记的是下标，不是值）
                dfs(); // 填排列的下一个数
                on_path[j] = false; // 恢复现场
                path.pop_back(); // 恢复现场
            }
        };
        dfs();
    };

    // 392. 判断子序列
    // 返回 seq*k 是否为 s 的子序列
    bool isSubsequence(const string& seq, int k, const string& s) {
        int n = seq.size();
        int i = 0;
        for (char c : s) {
            if (seq[i % n] == c) {
                i++;
                if (i == n * k) { // seq*k 的所有字符匹配完毕
                    return true; // seq*k 是 s 的子序列
                }
            }
        }
        return false;
    }

public:
    string longestSubsequenceRepeatedK(string s, int k) {
        int cnt[26]{};
        for (char c : s) {
            cnt[c - 'a']++;
        }

        string a;
        for (int i = 25; i >= 0; i--) { // 倒序，这样我们可以优先枚举字典序大的排列
            a.insert(a.end(), cnt[i] / k, 'a' + i);
        }

        string ans;
        permuteFunc(a, [&](const string& seq) -> bool {
            if (!isSubsequence(seq, k, s)) {
                return false;
            }
            if (seq.size() > ans.size() || seq.size() == ans.size() && seq > ans) {
                ans = seq;
            }
            return true;
        });
        return ans;
    }
};

// @lc code=end



/*
// @lcpr case=start
// "letsleetcode"\n2\n
// @lcpr case=end

// @lcpr case=start
// "bb"\n2\n
// @lcpr case=end

// @lcpr case=start
// "ab"\n2\n
// @lcpr case=end

 */

