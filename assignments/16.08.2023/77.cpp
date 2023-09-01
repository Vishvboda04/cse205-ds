// 77. Combinations

// Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

// You may return the answer in any order.

class Solution {
public:

    void solve(int n, int k, int i, vector<int>& temp, vector<vector<int>>& ans){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(i>n){
            return;
        }
        temp.push_back(i);
        solve(n, k-1, i+1, temp, ans);
        temp.pop_back();
        solve(n, k, i+1, temp, ans);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(n,k, 1, temp , ans);
        return ans;
    }
};