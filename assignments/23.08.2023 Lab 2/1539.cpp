// 1539. Kth Missing Positive Number

// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> natural;
        for (int i = 1; i < 9999; i++)
        {
            natural.push_back(i);
        }

        for(int i=0; i<arr.size(); i++)
        {
        natural.erase(std::remove(natural.begin(), natural.end(), arr[i]), natural.end());
        }
        
        return natural[k-1];
    }
};