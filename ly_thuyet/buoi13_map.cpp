#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    // map<key,value> tendulieu;
    // map ma hoa 1 key cho 1 value duy nhat 
    map <int, int> mp;
    mp.insert({1,2});
    mp.insert({2,3});
    mp.insert({2,5}); // value 3 khong bi thay doi bang 5
    //mp[key] =value // cach khai bao khac
    mp[2]=5; // value 3 bi thay doi bang 5
    //duyet map // key tang dan
    for(auto x: mp) cout << x.first << ' ' << x.second << endl;
    for (map<int, int>::iterator i=mp.begin(); i!=mp.end();++i){
        cout << (*i).first << ' ' << (*i).second;


    }

    mp.find(1); // tra ve con tro toi vi tri cua key 1
    // neu khong tim thay tra ve mp.end()
    multimap<int, int> mmp; // co the co nhieu value cho 1 key
    unordered_map<int, int> ump; // khong theo thu tu













//buoi 12 53p
//video btap buoi 12 13























}