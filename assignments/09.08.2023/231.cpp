// Power of 2
// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n<0)
        return 0;

        else if(n%2==0 || n==1)
        {
            if(n==1)
            return 1;

            return isPowerOfTwo(n/2);
        }
        return 0;
    }
};