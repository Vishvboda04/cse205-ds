class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto x : mp)
        {
            pq.push({x.second, x.first});
        }

        int count =0;
        vector<int> ans;

        while(count != k)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            count++;
        }
        return ans;
    }
};