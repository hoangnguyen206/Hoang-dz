#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[100];
bool ok[100];
//**sinh nhi phan */
// void backtrack(int i){
//     for (int j = 0; j <= 1; j++){
//         a[i] = j;
//         if (i == n){
//             for (int i = 1; i <= n; i++) cout << a[i];
//             cout << endl;
//         }
//         else backtrack(i + 1);
//     }
// }

//**sinh to hop chap k cua n */
// void backtrack(int i){
//     for (int j = a[i - 1] + 1; j <= n - k + i; j++){
//         a[i] = j;
//         if (i == k){
//             for (int i = 1; i <= k; i++) cout << a[i] << ' ';
//             cout << endl;
//         }
//         else backtrack(i + 1);
//     }
// }

//**sinh hoan vi cua n phan tu */
// void backtrack(int i){
//     for (int j = 1; j <= n; j++){
//         if (!ok[j]){
//             a[i] = j;
//             ok[j] = true;
//             if (i == n){
//                 for (int i = 1; i <= n; i++) cout << a[i] << ' ';
//                 cout << endl;
//             }
//             else backtrack(i + 1);
//             ok[j] = false;
//         }
//     }
// }

//** sinh phan hoach */





int main(){
    cin >> n;
    
         
}