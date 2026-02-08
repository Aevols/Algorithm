////https://leetcode.cn/problems/stamping-the-grid/
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    bool possibleToStamp(vector<vector<int>>& grid, int h, int w) {
//        int n = grid.size(), m = grid[0].size();
//        // 1. 预处理grid的二维前缀和（快速判断矩形和）
//        vector<vector<int>> sum(n + 1, vector<int>(m + 1, 0));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + grid[i][j];
//            }
//        }
//
//        // 2. 二维差分矩阵（标记邮票覆盖区域）
//        vector<vector<int>> diff(n + 2, vector<int>(m + 2, 0));
//        for (int i = 0; i <= n - h; i++) {
//            for (int j = 0; j <= m - w; j++) {
//                int x2 = i + h, y2 = j + w;
//                // 前缀和判断矩形是否全0（可贴邮票）
//                int rect_sum = sum[x2][y2] - sum[i][y2] - sum[x2][j] + sum[i][j];
//                if (rect_sum == 0) {
//                    diff[i + 1][j + 1]++;
//                    diff[i + 1][y2 + 1]--;
//                    diff[x2 + 1][j + 1]--;
//                    diff[x2 + 1][y2 + 1]++;
//                }
//            }
//        }
//
//        // 3. 计算差分前缀和，检查0是否被覆盖
//        vector<vector<int>> cnt(n + 1, vector<int>(m + 1, 0));
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                cnt[i][j] = cnt[i - 1][j] + cnt[i][j - 1] - cnt[i - 1][j - 1] + diff[i][j];
//                if (grid[i - 1][j - 1] == 0 && cnt[i][j] == 0) return false;
//            }
//        }
//        return true;
//    }
//};