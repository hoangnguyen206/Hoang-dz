#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool nt(int n){
    if (n<=1) return false;
    for (int i =2; i<=sqrt(n); i++){
        if(n%i==0) return false;

    
    }
    return true;
}

using namespace std;



int main(){
   
    
    int n ; cin >> n;
    int a[n];
    int b[n];

    for (int i =0 ; i<n; i+=2) cin >> a[i];
    int tienthua=0;
    for (int i=0; i<n; i++){
        if(tienthua<a[i]-25) cout << "NO\n"; break;
        tienthua+=25;
        if(a[i]!=25) tienthua=tienthua-(a[i]-25);
        if(i==n-1) cout << "YES\n";
    }
 
    
           
       

    
    
  








}





//bai13



















    





















    

    

















