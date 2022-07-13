/* We use a magic number and hope that it isn't present in the input */
#define MAGIC_NUMBER    0xdeadbeef

class Solution {
public:
    /* Search for zeros, setting rows and columns to our magic number */
    void setZeroes(vector<vector<int>>& matrix) {
        for (size_t i = 0; i < matrix.size(); i++) {
            for (size_t j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    for (size_t k = 0; k < matrix.size(); k++) {
                        matrix[k][j] = matrix[k][j] == 0 ? 0 : MAGIC_NUMBER;
                    }
                    for (size_t k = 0; k < matrix[i].size(); k++) {
                        matrix[i][k] = matrix[i][k] == 0 ? 0 : MAGIC_NUMBER;
                    }
                }
            }
        }
        
        /* Now set all elements equal to our magic number to 0 */
        for (size_t i = 0; i < matrix.size(); i++) {
            for (size_t j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == MAGIC_NUMBER) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};