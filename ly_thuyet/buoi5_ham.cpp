#include <iostream>
#include <iomanip>
#include <algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

typedef long long ll;
const int maxn = 100000007;
int prime[maxn+1];
void sang(){
    for (int i=0; i<=maxn; i++){
        prime[i] =1;

    }
    prime[0] =prime[1] =0;
    for (int i=2; i<=sqrt(maxn) ; i++){
        if(prime[i]){
            for (int j=i*i; j<=maxn; j+=i){
                prime[j]=0;
            }
        }

    }

}
ll pow1(ll a, ll b){
    int x=1;
    ll res =1;
    while(b!=0){ 
        if (b%2==1){
            res *=a;

        }
        a*=a;
        b/=2;
        x+=1;

    }
    cout << x;
    return res;
}










int main (){
    ll a,b;
    cin >> a >> b;

    cout << pow1(a,b);
    


    }

    
    
    

    
    
    
    
    
   

// buoi 8 35p46
// btap buoi 7 1tieng15

    


    


    
    
























