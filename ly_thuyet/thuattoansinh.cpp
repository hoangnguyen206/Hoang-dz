#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// -<khoi tao cau hinh dau tien>
 // while (-< chua phai la cau hinh cuoi cung>){
//     -<xu li cau hình hien tai>
//     -<sinh ra cau hinh tiep theo>


 //*** sinh nhi phan co do dai n*/
// int n, a[100];
// void ktao(){
//      for (int i = 1; i <= n; i++) a[i] = 0;
//     }
//  bool check1(){
//      for (int i = 1; i <= n; i++){
//          if (a[i] == 0) return false;
//      }
//     return true;
// }
// void sinh(){
//     int i = n; 
//     while (i >= 1 && a[i] == 1){
//         a[i] = 0;
//         i--;
//     }
//     a[i] = 1;
// }

//** to hop chap k cua n   */
// int n, k, a[100];
// void ktao(){
//     for (int i = 1; i <= k; i++) a[i] = i;
// }
// bool check1(){
//     for (int i = 1; i <= k; i++){
//         if (a[i] != n - k + i) return false;
//     }
//     return true;
// }
// void sinh(){
//     int i = k;
//     while (i >= 1 && a[i] == n - k + i){
//         i--;
//     }
//     a[i]++;
//     for (int j = i + 1; j <= k; j++){
//         a[j] = a[j - 1] + 1;
//     }
// }

//** hoan vi cua n phan tu */
int n, a[100],ok;
void ktao(){
    for (int i = 1; i <= n; i++) a[i] = i;
}
void sinh(){
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if (i == 0) ok = 0;
    else{
        int j = n;
        while (a[j] < a[i]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
       
        }
}
//** sinh phan hoach */
int n, a[100], ok, dem;
void ktao(){
    dem = 1;
    a[1] = n;
   
}
void sinh(){
    int i = dem;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if (i == 0 ) ok = 0;
    else{
        a[i]--;
        int thieu = dem - i + 1;
        dem = i;
        int thuong = thieu / a[i];
        int du = thieu % a[i];
        if (thuong > 0){
            for (int j = 1; j <= thuong; j++){
                dem++;
                a[dem] = a[i];           
            } 
        }
        if (du > 0){
            dem++;
            a[dem] = du;
    }
}
}



int main(){
    // string s = "ABC";
    // next_permutation(s.begin(), s.end());
    // prev_permutation(s.begin(), s.end());
    // cout << s;
    
}