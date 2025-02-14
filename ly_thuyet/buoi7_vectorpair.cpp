#include <bits/stdc++.h>
using namespace std;
int main(){
    typedef long long ll;
    //cu phap pair<kieu du lieu ptu1, kieu du lieu ptu2> ten dai dien
   
    // cac phan tu trong mang cung co the la 1 pair
   // khi do moi phan tu la 1 pair;
    // int n ; cin >> n;
    // pair <int , int > a[100];
    // for (int i; i <n ; i++){
    //   cin >> a[i].first >> a[i].second;


    // }
    // // pair long nhau
    // pair < int , pair <int ,int > > b;
    // cin >> b.first;
    // cin >> b.second.first;//truy cap phan tu 2(la 1 pair) roi truy cap ptu 1 cua pair do
    // cin >> b.second.second;








    //vector
    //vector nhu mang dong co the co, dan
    // cu phap: vector<kieu du lieu> ten bien;

    vector<int> a;
    // them phan tư
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.pop_back();// xoa phan tu o cuoi vector


    cout << a.size() << ' ';// so phan tu vector a
    // for (int i=0; i< a.size(); i++)   {
    //     cout << a[i] << ' ';

    // }
    for (vector<int>:: iterator x = a.begin(); x!= a.end(); x++){
        cout << * x << ' ';

    }
    // khai bao vector co n phan tu giong nhau
    vector <int> y(3,100);
    for (int x:y) cout << x;
    for (int i =0; i< y.size(); i++) cout << y[i];
    a.erase(a.begin()+4); //xoa phan tu thu 4;
    y.erase(y.begin()+4);
    cout << *max_element(a.begin(),a.end()) << ' ';// tim max
    // max_element tra ve 1 con tro tro toi phan tu lon nhat trong vector
    










    //buoi9 1tieng






    

    
    










}