// 118. Pascal's Triangle

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);

        for(int i=0; i<numRows; i++)
        {
            pascal[i].resize(i+1);

            for(int j=0; j<i+1; j++)
            {
                if(j==0 || j==i)
                {
                    pascal[i][j] = 1;
                }
                else
                {
                    pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
                }
            }
        }
        return pascal;
    }
};