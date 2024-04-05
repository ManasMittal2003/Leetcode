#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for (char ch : s) {
            if (!stk.empty() && abs(stk.top() - ch) == 32) {
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        string result = "";
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};
