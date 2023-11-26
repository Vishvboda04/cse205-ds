class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        vector<int> v;

        for(int i=0; i<arr2.size(); i++)
        {
            for(int j=0; j<arr1.size(); j++)
            {
                if(arr2[i] == arr1[j])
                {
                    v.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }  
        }

        for(int i=0; i<arr1.size(); i++)
        {
            if(arr1[i] != -1)
            {
                v.push_back(arr1[i]);
            }
        }
        return v;


    }
};