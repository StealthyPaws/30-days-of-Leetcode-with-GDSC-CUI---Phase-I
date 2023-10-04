class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int n = mat.size(); // Assuming it's a square matrix (n x n)
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += mat[i][i]; // Add the element on the main diagonal
            sum += mat[i][n - 1 - i]; // Add the element on the opposite diagonal
        }
        
        // If n is odd, we would have added the center element twice, so subtract it once
        if (n % 2 == 1) {
            int center = n / 2;
            sum -= mat[center][center];
        }
        
        return sum;
    }  
    
};