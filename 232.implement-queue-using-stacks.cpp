/*
 * @lc app=leetcode.cn id=232 lang=cpp
 * @lcpr version=30204
 *
 * [232] 用栈实现队列
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
class MyQueue {
    stack<int> data1;
    stack<int> data2;
public:
    MyQueue() {    
    }
    
    void push(int x) {
        data1.push(x);
    }
    
    int pop() {
        if(!data2.empty()){
            int temp = data2.top();data2.pop();
            return temp;
        }
        else{
            int temp = data1.top();data1.pop();
            while(!data1.empty()){
                data2.push(temp);
                temp = data1.top();data1.pop();
            }
            return temp;
        }
    }
    
    int peek() {
        int temp = pop();
        data2.push(temp);
        return temp;
    }
    
    bool empty() {
        return data1.empty() && data2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end



/*
// @lcpr case=start
// ["MyQueue", "push", "push", "peek", "pop", "empty"][[], [1], [2], [], [], []]\n
// @lcpr case=end

 */

