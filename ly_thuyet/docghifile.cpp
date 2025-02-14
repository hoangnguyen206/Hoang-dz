#include <iostream>
#include <fstream>
using namespace std;
using ll = long long;
// ifstream : doc file
// ofstream : ghi file
// fstream : doc va ghi file

// mode: ios::in : doc file
// mode: ios::out : ghi file
// mode: ios::app : ghi tiep vao file
// mode: ios::ate : ghi vao cuoi file
// mode: ios::binary : mo file nhi phan
// mode: ios::trunc : xoa noi dung file
int main(){
    ifstream in;
    ofstream out;
    in.open("filelinhtinh/input.txt");
    out.open("filelinhtinh/output.txt");
    if (out.is_open()){
        out << "ok";
        out.close();
    }
    in.eof(); // file da doc het chua
    
         
}