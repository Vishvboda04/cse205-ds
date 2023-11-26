class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> answer;
        int mini = INT_MAX;
        int diff;

        for(int i=0; i<arr.size()-1; i++)
        {
            diff = arr[i+1]-arr[i];
            mini = min(mini, diff);
        }

        for(int j=0; j<arr.size()-1; j++)
        {
            if(arr[j+1] - arr[j] == mini)
            { 
                answer.push_back({arr[j], arr[j + 1]});
            }
        }
        return answer;

    }
};