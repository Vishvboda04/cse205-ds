class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(2);
        vector<int> m(n, 0);
                
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]-1]++;
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(m[i]==2)
                ans[0]=i+1;

            if(m[i]==0)
                ans[1]=i+1;    
        }
        return ans;
    }
};