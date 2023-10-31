class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        stack<int> st;
        int n = nums2.size();
        int n1 = nums1.size();
        int result;

        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty() && st.top() < nums2[i])
            {
                st.pop();
            }
            if(st.empty())
                result = -1;
            else
                result = st.top();

            umap.insert({nums2[i],result});
            st.push(nums2[i]);
        }

        vector<int> ans;
        for(auto x:nums1)
        {
            ans.push_back(umap[x]);
        }
        return ans;
    }
};