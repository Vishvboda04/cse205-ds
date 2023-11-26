class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }    
        priority_queue<pair<int, char>> pq;

        for(auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        string ans;

        while(!pq.empty())
        {
            pair<int, char> p = pq.top();
            pq.pop();

            for(int i=0; i<p.first; i++)
            {
                ans += p.second;
            }
        }
        return ans;
    }
};