// 39. Combination Sum

// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

class Solution {
public:

    void solve(vector<int>& candidates, int target,vector<vector<int>> &output, vector<int> &temp, int index){
        if(index == candidates.size()){
            if(target == 0){
                output.push_back(temp);
            }
            return;
        }

        if(candidates[index] <= target){
            temp.push_back(candidates[index]);
            solve(candidates, target-candidates[index], output, temp, index);
            temp.pop_back();
        }
        solve(candidates, target, output, temp, index+1);        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> output;
        vector<int> temp;
        solve(candidates, target, output, temp, 0);
        return output;
    }
};