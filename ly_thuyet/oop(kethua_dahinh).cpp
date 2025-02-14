#include <iostream>
#include <iomanip>
using namespace std;
using ll = long long;
//ke thua : tao lop moi tu lop co san
class Person{
    private:
        string ten, diachi;
    public:
        string getTen(){
            return ten;
        }
        string getDiachi(){
            return diachi;
        }
        void setTen(string a){
            ten = a;
        }
        void setDiachi(string b){
            diachi = b;
        }
        void in(){
            cout << ten << ' ' << diachi << ' ' ;
        }
};
class Student : public Person{ // cac thuoc tinh private, public cua person thi student deu co
    private:
    double gpa;
    public:
    //function override : ghi de 1 ham da co
    void in(){
        Person::in(); // toan tu pham vi (::)
        cout << fixed << setprecision(2) << gpa;
    }

    double getGpa(){
        return gpa;
    }
    void setGpa(double gpa){
        this -> gpa = gpa;
    }

};

// da hinh: cung 1 giao dien nhung co nhieu hanh vi
class Hinh{
    protected:
    int cao, rong;
    public:
    void set_value(int a, int b){
        cao = a;
        rong = b;

    }
    virtual int getArea(){ // ham ao : duoc dinh nghia lai trong class con
        return 0;
    }
};
class HinhChuNhat : public Hinh{
    public :
    int getArea(){
        return cao * rong;
    }
};
class TamGiac : public Hinh{
    public:
    int getArea(){
        return cao*rong/2;
    }
};  
int main(){
    HinhChuNhat a;
    TamGiac b;
    Hinh *ptr1 = &a;
    Hinh *ptr2 = &b;
    ptr1 ->set_value(100,200);
    ptr2 ->set_value(30,100);
    cout << a.getArea() << endl;
    cout << b.getArea() << endl;
    // de truy cap cac ham trong lop con thi can 1 ham ao (virtual)
    cout << ptr1->getArea();

   
         
}