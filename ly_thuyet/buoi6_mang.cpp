#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool dx(int a[], int n){
    int l=0; int r=n-1;
    while (l<=r){
        if (a[l]!= a[r]) return false;
        ++l; --r;
    }
    return true;


}



int main(){
   



int n; cin >> n;
int a[n];
for (int i=0; i < n; i++) cin >> a[i];
if(dx(a,n)) cout << "YES\n";
else cout << "NO\n";

}



// buoi9
// xet duoc cac cap phan tu trong mang
//dung hai bien a,b de xet 2 phan tu (dung for) va giai quyet cac bai toan;
//vdu cho mang xet tinh doi xung cua mang;

