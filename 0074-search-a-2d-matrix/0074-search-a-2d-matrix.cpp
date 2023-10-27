class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size(), i, j;
        bool result = false;
        for(i =  0; i < rows; i++)
        {
            if( (target >= matrix[i][0]) && (target <= matrix[i][cols - 1]))
            {
                for(j = 0; j < cols; j++)
                {
                    if(matrix[i][j] == target)
                        result = true;
                }
            }
            else
            {
                continue;
            }
        }
        return result;    
    }
};