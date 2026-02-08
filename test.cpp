//#include <iostream>
//#include <windows.h> // 包含 Windows API
//#include <chrono>    // 用于 C++ 标准库时间函数
//
//using namespace std;
//
//// 将 FILETIME 结构转换为毫秒的辅助函数
//// FILETIME 存储的是 100 纳秒为单位的计数
//long long FileTimeToMilliseconds(const FILETIME& ft) {
//    // 将 FILETIME 结构体转换为 64 位整数
//    ULARGE_INTEGER uli;
//    uli.LowPart = ft.dwLowDateTime;
//    uli.HighPart = ft.dwHighDateTime;
//    // 转换为毫秒 (除以 10000，因为 1毫秒 = 10000 x 100纳秒)
//    return uli.QuadPart / 10000;
//}
//
//int main()
//{
//    // 1. 设置运行时间和计数器
//    const auto RUN_DURATION = chrono::seconds(1);
//    long long count = 0;
//
//    // 获取当前进程的句柄
//    HANDLE hProcess = GetCurrentProcess();
//
//    // 用于存储时间的 Windows API 结构体
//    FILETIME creationTime, exitTime, kernelTimeBefore, userTimeBefore;
//    FILETIME kernelTimeAfter, userTimeAfter;
//
//    // 2. 循环开始前获取 CPU 时间
//    // GetProcessTimes: 获取创建、退出、内核时间和用户时间
//    if (!GetProcessTimes(hProcess, &creationTime, &exitTime, &kernelTimeBefore, &userTimeBefore)) {
//        cerr << "Error: Failed to get initial process times." << endl;
//        return 1;
//    }
//
//    // 记录墙上时钟开始时间
//    auto wall_start = chrono::steady_clock::now();
//
//    // 3. 执行纯计数循环 (1 秒)
//    while (chrono::steady_clock::now() - wall_start < RUN_DURATION)
//    {
//        count++;
//    }
//
//    // 记录墙上时钟结束时间
//    auto wall_end = chrono::steady_clock::now();
//
//    // 4. 循环结束后再次获取 CPU 时间
//    if (!GetProcessTimes(hProcess, &creationTime, &exitTime, &kernelTimeAfter, &userTimeAfter)) {
//        cerr << "Error: Failed to get final process times." << endl;
//        return 1;
//    }
//
//    // 5. 计算并打印结果
//
//    // A. 计算 CPU 时间差 (毫秒)
//    long long kernel_ms = FileTimeToMilliseconds(kernelTimeAfter) - FileTimeToMilliseconds(kernelTimeBefore);
//    long long user_ms = FileTimeToMilliseconds(userTimeAfter) - FileTimeToMilliseconds(userTimeBefore);
//    long long total_cpu_ms = kernel_ms + user_ms;
//
//    // B. 计算墙上时钟时间差 (毫秒)
//    auto wall_duration = chrono::duration_cast<chrono::milliseconds>(wall_end - wall_start).count();
//
//    cout << "------------------------------------------" << endl;
//    cout << "  循环执行次数: " << count << " 次" << endl;
//    cout << "------------------------------------------" << endl;
//    cout << "  **墙上时钟时间 (Real Time):** " << wall_duration << " ms" << endl;
//    cout << "  **总 CPU 时间:** " << total_cpu_ms << " ms" << endl;
//    cout << "     - 用户空间运行时间 (User Time): " << user_ms << " ms" << endl;
//    cout << "     - 内核空间运行时间 (Kernel Time): " << kernel_ms << " ms" << endl;
//    cout << "------------------------------------------" << endl;
//
//    return 0;
//}