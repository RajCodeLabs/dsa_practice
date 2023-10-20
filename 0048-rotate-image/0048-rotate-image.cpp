class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i, j, size = matrix.size();
        
        //transposing the matrix
        for(i = 0; i < size; i++)
        {
            for(j = i; j < size; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        
        //reversing each row after the transpose
        for(i = 0; i < size; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};