// 867. Transpose Matrix

// Given a 2D integer array matrix, return the transpose of matrix.

// The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> trans(m, vector<int>(n));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                trans[j][i] = matrix[i][j];
            }
        }
        return trans;
    }
};