#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int a = 100;
    // &a toán tử lấy địa chỉ của biến a
    // int *ptr là con trỏ trỏ đến kiểu dữ liệu int
    // nullptr : khong tro den dau ca
    //int *ptr = &a;
    // cout << &a  = cout << ptr;
    // cout << *ptr << gia tri tai con tro ptr chi den;
    // int a[]={1,2,3,4,5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    //     cin >> *(a+i);
    

    // }
    // co the khai bao con tro de quan li mang 
    // int *b = a; // int *b = &a[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << b[i] << " ";
    // }
    
    //cap phat dong
  
    int* ptr = new int;  // Cấp phát bộ nhớ cho một biến kiểu int.
    *ptr = 42;           // Gán giá trị 42 cho vùng nhớ này.
    cout << *ptr;   // In ra 42.
    delete ptr;          // Giải phóng bộ nhớ.
    ptr = nullptr;       // Tránh con trỏ lạc (dangling pointer).

    int* arr = new int[5];  // Cấp phát động cho một mảng 5 phần tử.
    for (int i = 0; i < 5; ++i) {
    arr[i] = i + 1;    // Gán giá trị cho từng phần tử.
    }
    for (int i = 0; i < 5; ++i) {
    cout << arr[i] << " ";  // In mảng: 1 2 3 4 5.
    }
    delete[] arr;  // Giải phóng bộ nhớ mảng.
    arr = nullptr;



}