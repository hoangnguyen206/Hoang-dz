#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    // set : luu cac phan tu khong trung nhau, theo thu tu

    // multiset : luu duoc cac phan tu trung nhau, theo tu tu
    // unordered_set : khong trung nhau, luu cac phan tu khong theo thu tu (khong theo thu tu insert),
    set<int> se;
    multiset<int> s;
    se.insert(1);// them phan tu vao set
    se.insert(2);
    se.insert(8);
    se.insert(3);
    se.count(3); //dem phan tu, =1 la co xuat hien
    se.erase(2);

    
    se.size();
    auto i=se.find(2);
    cout << *i;
























}