class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());

        int first = pq.top();
        pq.pop();

        return (first-1)*(pq.top()-1);
    }
};