class Solution {
    public:
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>> matrix(n);
            for(int i=0;i<n;i++){
                matrix[i].resize(n);
            }
            int up = 0;
            int down = n - 1;
            int left = 0;
            int right = n - 1;
            int tmp = 1;
            while (up <= down) {
                if(up == down){
                    matrix[up][down] = tmp;break;
                }
                for (int i = left; i <= right - 1; i++) {
                    matrix[up][i] = tmp;
                    tmp++;
                }
                for (int i = up; i <= down - 1; i++) {
                    matrix[i][right] = tmp;
                    tmp++;
                }
                for (int i = right; i >= left + 1; i--) {
                    matrix[down][i] = tmp;
                    tmp++;
                }
                for (int i = down; i >= up + 1; i--) {
                    matrix[i][left] = tmp;
                    tmp++;
                }
                up++;
                left++;
                right--;
                down--;
            }
            return matrix;
        }
    };