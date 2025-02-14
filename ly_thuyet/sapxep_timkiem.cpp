#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(int x, int y) {
        return abs(x) < abs(y);
    }   // sort theo 1 tieu chi (comparator)
    // neu co 2 dieu kien
    // bool cmp(int x, int y) {
    //  if (dieu kien 1) return true;
    // else (dieu kien 2);
  
    // neu sap xep theo thu tu xuat hien
    // su dung stable_sort
int main(){
    
    int n; cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), cmp);
    
}
////// tim kiem
tim kiem tuyen tinh (linear search) : O(n)
bool  search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return true;
    }
    return false;
}
tim kiem nhi phan (binary search) : O(logn) // sap xep truoc
bool search(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) return true;
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}
binary_search(a, a + n, x); // tra ve true neu co x trong mang a
lower_bound(a, a + n, x) ; // tra ve vi tri dau tien >= x
upper_bound(a, a + n, x) ; // tra ve vi tri dau tien > x 
// manh trong set map
tinh khoang cach giua hai iterator
auto it = lower_bound(x);
int dis = distance(a.begin(), it);
buoi 14
btap buoi 13