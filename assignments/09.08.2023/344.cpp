// 344 reverse String by recursion

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.


// without recursion
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int len = s.size();
//         for(int i=0 ;i<(len/2); i++)
//         {
//             swap(s[i] , s[len-i-1]);
//         }
//     }
// };

// with recursion
class Solution {
public:

    void function(vector<char>& s, int i){

        int len=s.size();

        if (i>=(len/2)){
            return;
        }

        swap(s[i], s[len-i-1]);
        i++;

        function(s,i);
    }

    void reverseString(vector<char>& s) {
        
        int i=0;
        function(s,i);
        
    }
};