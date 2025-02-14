#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    unsigned int a = 23;
    unsigned int b = 13;
    unsigned int c = a&b; // and
    unsigned int d = a|b; // or
    unsigned int e = a^b; // xor( khac nhau thi 1, giong nhau thi 0)
    unsigned int f = ~a; // not
    // dich bit
    unsigned int g = a << 1; // dich trai 1 bit
    unsigned int h = a >> 1; // dich phai 1 bit
    //1h18'
    cout << e << endl;
    // bit cua 2^x = 1 << x thi chi co 1 so 1 o vi tri x duoc bat
    // -> cach xet xem bit thu i bat hay tat
}