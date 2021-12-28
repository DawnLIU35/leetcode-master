// leetcode 59 螺旋矩阵II
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0)); // 使用vector定义一个二维数组
        int startx = 0, starty = 0;
        int loop = n / 2;
        int offset = 1;
        int count = 1;
        int i, j;

        while (loop--) {
            for (i=startx, j=starty; j < n-offset; j++) {
                res[i][j] = count++;
            }
            for (i=startx; i < n-offset; i++) {
                res[i][j] = count++;
            }
            for (;j>starty; j--) {
                res[i][j] = count++;
            }
            for (;i>startx; i--) {
                res[i][j] = count++;
            }

            startx++;
            starty++;
            offset++;
        }
        
        if (n % 2 == 1) {
            res[n/2][n/2] = count;
        }
        return res;
    }

};

int main() {
    Solution solution0;
    int n = 5;
    vector<vector<int>> result;
    result = solution0.generateMatrix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << ' ';
        }
        cout << '\n';
    }
}
