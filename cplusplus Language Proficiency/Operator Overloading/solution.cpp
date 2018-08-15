class Matrix
{
public:
    vector<vector<int>> a;
    
    Matrix operator + (Matrix B)
    {
        vector<int> outputColumns (a[0].size(), 0); //Number of columns in matrix, filled with 0s
        Matrix outputMatrix;
        outputMatrix.a.assign(a.size(), outputColumns); //Making a matrix of the same size
        
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[0].size(); j++)
            {
                outputMatrix.a[i][j] = a[i][j] + B.a[i][j];
            }
        }
        
        return outputMatrix;
    }
};
