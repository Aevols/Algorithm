////https://www.luogu.com.cn/problem/P1080
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//using LL = long long;
//const int N = 1005;
//struct Minister {
//    LL l, r;
//    bool operator<(const Minister& t) const {
//        return l * r < t.l * t.r;
//    }
//} m[N];
//
//// 高精度大数结构体（低位在前存储，例如 123 存储为 [3,2,1]）
//struct BigInt {
//    int num[5005]; 
//    int len;        
//    // 默认构造函数，初始化为 0
//    BigInt() 
//    {
//        memset(num, 0, sizeof(num));
//        len = 0;
//    }
//    // 从 long long 构造大数
//    BigInt(LL x) {
//        memset(num, 0, sizeof(num));
//        len = 0;
//        if (x == 0) {
//            len = 1;
//            num[0] = 0;
//            return;
//        }
//        while (x) {
//            num[len++] = x % 10;
//            x /= 10;
//        }
//    }
//    // 高精度乘低精度（返回新的大数）
//    BigInt operator*(LL x) const {
//        BigInt res;
//        LL carry = 0; // 进位
//        for (int i = 0; i < len; ++i) {
//            LL product = (LL)num[i] * x + carry;
//            res.num[res.len++] = product % 10;
//            carry = product / 10;
//        }
//        // 处理剩余进位
//        while (carry) 
//        {
//            res.num[res.len++] = carry % 10;
//            carry /= 10;
//        }
//        return res;
//    }
//
//    // 高精度除低精度（返回商，向下取整）
//    BigInt operator/(LL x) const {
//        BigInt res;
//        LL remainder = 0; // 余数
//        // 从高位到低位计算（因为数组是低位在前，所以倒序遍历）
//        for (int i = len - 1; i >= 0; --i) {
//            remainder = remainder * 10 + num[i];
//            res.num[i] = remainder / x;
//            remainder %= x;
//        }
//        // 计算商的长度，去掉前导零
//        res.len = len;
//        while (res.len > 1 && res.num[res.len - 1] == 0) 
//        {
//            --res.len;
//        }
//        return res;
//    }
//    bool operator>(const BigInt& b) const 
//    {
//        if (len != b.len) return len > b.len;
//        // 从高位到低位逐位比较
//        for (int i = len - 1; i >= 0; --i) {
//            if (num[i] != b.num[i]) return num[i] > b.num[i];
//        }
//        return false; 
//    }
//};
//// 重载输出运算符，方便打印大数
//ostream& operator<<(ostream& out, const BigInt& b) 
//{
//    for (int i = b.len - 1; i >= 0; --i) {
//        out << b.num[i];
//    }
//    return out;
//}
//int n;
//int main() 
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cin >> n;
//    cin >> m[0].l >> m[0].r; 
//    for (int i = 1; i <= n; ++i) 
//    {
//        cin >> m[i].l >> m[i].r;
//    }
//    sort(m + 1, m + 1 + n);
//    BigInt product(m[0].l); // 前面所有人左手的乘积（初始为国王的左手）
//    BigInt max_gold(0);     // 获得最多金币的大臣的金币数
//    for (int i = 1; i <= n; ++i) 
//    {
//        BigInt gold = product / m[i].r; 
//        if (gold > max_gold) 
//        {
//            max_gold = gold;
//        }
//        product = product * m[i].l; 
//    }
//    cout << max_gold << endl;
//    return 0;
//}