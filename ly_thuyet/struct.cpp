#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
using ll = long long;
//khoi tao struct
//constructor - ham khoi tao
// khong co gia tri tra ve
// ten ham trung voi ten struct

struct sinhvien{
    string name;
    int age;
    float score;
    sinhvien(){
        name = "";
        age = 0;
        score = 0;
    }
    sinhvien(   string name, int age, float score){
       this -> name = name;
        this ->age = age;
        this ->score = score;
    }
    void in(){
        cout << name << " " << age << " " << score << endl;
    }
};
// struct phuc tap
struct sophuc{
    float thuc; float ao;
    // sophuc operator+(sophuc b){
    //     sophuc c;
    //     c.thuc = thuc + b.thuc;
    //     c.ao = ao + b.ao;
    //     return c;
    // }
    friend sophuc operator + (sophuc a, sophuc b){
        sophuc c;
        c.thuc = a.thuc + b.thuc;
        c.ao = a.ao + b.ao;
        return c;
    }
    friend istream &operator >> (istream &is, sophuc &a){
        is >> a.thuc >> a.ao;
        return is;
    }
    friend ostream &operator << (ostream &os, sophuc a){
        os << a.thuc << " + " << a.ao << "i";
        return os;
    }
};
int main(){
    sinhvien a;
    getline(cin, a.name);
    cin >> a.age >> a.score;
    a.in();
    
}