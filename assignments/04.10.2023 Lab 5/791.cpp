class Solution {
public:
    string customSortString(string order, string s) {

    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;	
    }     

    int idx=0;
    string ans="";

    while(idx<order.length())
    {
        char ch = order[idx];
        if(mp.find(ch)!=mp.end())
        {
            int freq = mp[ch];
            while(freq--)
            {
                ans.push_back(ch);
            }
            mp.erase(ch);
        }
        idx++;
    }
    for(auto it: mp)
    {
        char ch = it.first;
        int freq = it.second;
        
        while(freq--)
        {
            ans.push_back(ch);
        }
    }
    return ans;
    }
};