// 指针与内存：四个关键实验
// 编译：g++ -std=c++17 -Wall 01-指针与内存.cpp -o t && ./t
// 日期：2026-10-05

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;              // p 指向 arr[0]

    cout << "===== 实验 1：sizeof 测的是「谁」 =====" << endl;
    cout << "sizeof(arr)   = " << sizeof(arr)   << "   预测 20   (5 个 int)" << endl;
    cout << "sizeof(p)     = " << sizeof(p)     << "    预测 8    (64 位指针)" << endl;
    cout << "sizeof(*p)    = " << sizeof(*p)    << "    预测 4    (它指向的 int)" << endl;
    cout << "sizeof(int)   = " << sizeof(int)   << "    预测 4" << endl;

    cout << endl << "===== 实验 2：指针加法按「元素」跳 =====" << endl;
    cout << "*(p+2)        = " << *(p + 2)      << "    预测 3    (跳过 2 个 int 到 arr[2])" << endl;
    cout << "p[2]          = " << p[2]          << "    预测 3    (和 *(p+2) 等价)" << endl;

    cout << endl << "===== 实验 3：指针相减给「元素个数」 =====" << endl;
    cout << "&arr[4]-&arr[0]              = " << (&arr[4] - &arr[0])
         << "    预测 4    (元素个数)" << endl;
    cout << "(char*)&arr[4]-(char*)&arr[0] = "
         << ((char*)&arr[4] - (char*)&arr[0])
         << "   预测 16   (转成 char* 才是字节数)" << endl;

    cout << endl << "===== 实验 4：元素个数怎么算 =====" << endl;
    cout << "sizeof(arr)/sizeof(arr[0])   = "
         << sizeof(arr) / sizeof(arr[0]) << "    预测 5" << endl;

    return 0;
}