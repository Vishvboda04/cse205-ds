class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> mp;
        for(auto it : arr)
        {
            mp[it]++;
        }

        multimap<int, int, greater<int>> mm;
        for(auto it : mp)
        {
            mm.insert({it.second, it.first});
        }

        int n = arr.size();
        int sum = n;
        int count = 0;


        for(auto i = mm.begin(); i!=mm.end(); i++)
        {
            sum -= i->first;
            count++;
            if(sum<= n/2)
            {
                return count;
            }
        }
        return count;
    }
};