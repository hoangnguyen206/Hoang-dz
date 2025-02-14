#include <iostream>
#include <iomanip> 
#include <algorithm>


using namespace std;

int main (){
   long long n; cin >> n;
   int dem=1;

   for (int i=1; i<=n; i++){
      for (int j=1;j<=n-i;j++){
         cout << "  ";

      }
      for (int k=1;k<=dem;k++){
         cout << "*" <<" "; 


      }
      dem+=2;
      cout << endl;
   }
   int dem2=2*n-3;
   int kc=1;

   for (int a=n+1; a<=2*n;a++){
      for (int b=1;b<=kc;b++){
         cout << "  ";

      }
      kc+=1;
      for (int c=1;c<=dem2;c++){
         cout <<"*" << " ";

      }
      dem2-=2;
      cout << endl;



   }










   
      
      


     

   }


















   

   

   
      
   

   










   

 
   















