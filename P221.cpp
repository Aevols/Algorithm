//https://leetcode.cn/problems/maximal-square/description/
#include <vector>
#include <algorithm> // 包含min/max函数
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix)
    {
        // 处理空矩阵边界情况
        if (matrix.empty() || matrix[0].empty()) return 0;

        int n = matrix.size(), m = matrix[0].size();
        int res = 0;
        // 二维前缀和数组，下标从1开始（避免越界）
        vector<vector<int>> sum(n + 1, vector<int>(m + 1, 0));

        // 构建二维前缀和
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x = matrix[i][j] - '0'; // 字符转数字
                sum[i + 1][j + 1] = sum[i][j + 1] + sum[i + 1][j] - sum[i][j] + x;
            }
        }

        // 遍历每个起点(i,j)，二分查找最大正方形
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // 二分的右边界：当前起点能扩展的最大边长-1（mid是边长-1）
                int l = 0, r = min(n - 1 - i, m - 1 - j);
                int ok = 0; // 记录当前起点能构成的最大正方形面积
                while (l <= r) {
                    int mid = l + (r - l) / 2; // 防止溢出
                    int i2 = i + mid, j2 = j + mid; // 正方形右下角坐标（0开始）
                    // 计算该正方形的元素和（前缀和公式）
                    int area = sum[i2 + 1][j2 + 1] - sum[i2 + 1][j] - sum[i][j2 + 1] + sum[i][j];
                    if (area == (mid + 1) * (mid + 1)) { // 全1，面积等于边长平方
                        ok = area;
                        l = mid + 1; // 尝试更大的边长
                    }
                    else {
                        r = mid - 1; // 缩小右边界
                    }
                }
                res = max(res, ok); // 更新最大面积
            }
        }
        return res;
    }
};