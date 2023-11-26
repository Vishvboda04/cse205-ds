class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<s; i++)
        {
            if(nums[i] != i)
                return i;
        }
        return s;
    }
};