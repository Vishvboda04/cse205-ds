class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> ss = heights;
        sort(heights.begin(), heights.end());
        
        for(int i=0; i<heights.size(); i++)
        {
            if(heights[i] != ss[i])
                count++;
        }
        return count;
    }
};