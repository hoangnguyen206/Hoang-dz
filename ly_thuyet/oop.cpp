#include <iostream>
#include <string>

using namespace std;
using ll = long long;
// 1. class va object
// 2. dong goi(encapsulation) (1 so thuoc tinh duoc private va chi truy cap theo 1 so lenh) 
// 3. ke thua (inheritance) (tao lop moi tu lop co san, ke thua de su dung)
// 4. da hinh (polymorphism) ( kha nang cua cac doi tuong co cung giao dien nhung hanh vi khac nhau)
class Sinhvien{
    private:
    string ten, ngaysinh, lop;
    double gpa;
    public:
    static string tenTruong; // thuoc ve class Sinhvien
    void nhapthongtin();
    void xuatthongtin();
    string getten();
    void setten(string newname);
    friend void inthongtin(Sinhvien x);
    //thuong khong xay dung ham ben trong ma xay dung ben ngoai
};
void Sinhvien::nhapthongtin(){
    getline(cin, ten);
}
void Sinhvien::xuatthongtin(){
    cout << ten <<' ' << ngaysinh << ' ' << lop << ' ' << gpa << endl;
}

//Getter Setter interface
string Sinhvien::getten(){
    return ten;
}
void Sinhvien::setten(string newname){
    ten = newname;
}
void inthongtin(Sinhvien x){
    cout << x.ten;
}


int main(){
    Sinhvien x;
    x.nhapthongtin();
    x.xuatthongtin();
    x.setten("hoan");
    inthongtin(x);
   
         
}