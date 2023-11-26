// 22. Generate Parentheses

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

class Solution {
public:

    void solve(vector<string>& ans, string& temp, int open, int close, int n) {
        if (temp.length() == n * 2) {
            ans.push_back(temp);
            return;
        }
        if (open > 0) {
            temp += "(";
            solve(ans, temp, open - 1, close, n);
            temp.pop_back();
        }
        if (close > open) {
            temp += ")";
            solve(ans, temp, open, close - 1, n);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        solve(ans, temp, n, n, n);
        return ans;
    }
};