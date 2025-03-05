class Solution {
public:
    long long coloredCells(int n) {
        long long total = 0; 
        int a = 1;          
        int d = 4;          

        if (n == 1) {
            return 1; 
        } else if (n > 1) {
            
            total = (long long)((n / 2.0) * (2 * a + (n - 1) * d)) - (n - 1);
        }

        return total;
    }
};
