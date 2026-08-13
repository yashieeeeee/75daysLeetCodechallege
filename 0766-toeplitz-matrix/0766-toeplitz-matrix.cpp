class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int m,n,i=0;
        m=matrix.size();
        n=matrix[i].size();
    
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==matrix[i-1][j-1])
                 continue;
                 else
                 return false;

            }
        }
        return true;

    }
};