//#include <iostream>
//
//using namespace std;
//
//// BST 节点
//// 这里采用指针式写法
//struct TreeNode {
//    int val;               // 权值
//    TreeNode* l{ nullptr };  // 左儿子
//    TreeNode* r{ nullptr };  // 右儿子
//} tree[105];
//TreeNode* root;  // 根节点
//
//// 递归插入节点
//TreeNode* insert(TreeNode* root, int x) {
//    if (root == nullptr)  // 找到空位
//        return new TreeNode{ x };
//    if (x < root->val)  // 待插入节点小于根节点则往左子树找
//        root->l = insert(root->l, x);
//    else  // 否则往右子树找
//        root->r = insert(root->r, x);
//    return root;
//}
//
//int row = 0;
//string ans[105];
//
//// 将 pattern 插入在 main 的下标 pos 位置，不足部分用'.'补足
//void insert_string(string& main, string pattern, int pos) {
//    if (main.size() < pos + pattern.size())
//        main += string(pos + pattern.size() - main.size(), '.');
//    for (int i = 0; i < pattern.size(); i++)
//        main[pos + i] = pattern[i];
//}
//
//int dfs(TreeNode* root, int depth = 0) {
//    if (root == nullptr)
//        return row;
//    // 生成当前节点标签
//    string label;
//    if (depth)  // 根节点以外的节点都有父节点
//        label += "|-";
//    label += to_string(root->val);  // 权值
//    if (root->l || root->r)  // 检查是否有子节点
//        label += "-|";
//    depth += label.size() - 1;  // 缩进
//    // 左子树
//    int left_row = dfs(root->l, depth);
//    for (int i = left_row + 1; i < row; i++)
//        insert_string(ans[i], "|", depth);
//    // 绘制节点
//    insert_string(ans[row], label, depth - label.size() + 1);  // 需要暂时取消缩进
//    int current_row = row++;
//    // 右子树
//    int right_row = dfs(root->r, depth);
//    for (int i = current_row + 1; i < right_row; i++)
//        insert_string(ans[i], "|", depth);
//
//    return current_row;
//}
//
//int main()
//{
//    int x;
//    while (cin >> x)
//        root = insert(root, x);
//    dfs(root);
//    // 倒序输出
//    for (int i = row - 1; i >= 0; i--)
//        cout << ans[i] << endl;
//    return 0;
//}
