// 1295. Find Numbers with Even Number of Digits

// Given an array nums of integers, return how many of them contain an even number of digits.

class Solution {
public:

    int count(int n)
    {
        int digit=0;

        if(n==0)
            return 1;

        while(n!=0)
        {
            n=n/10;
            digit++;
        }
        return digit;

    }

    int findNumbers(vector<int>& nums) {
        int answer=0;
        for(int i=0; i<nums.size(); i++)
        {
            int ans = count(nums[i]);

            if(ans%2==0)
            {
                answer++;
            }
        }
        return answer;
    }
};