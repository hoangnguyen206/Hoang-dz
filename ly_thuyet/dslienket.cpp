#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef Node* node;

struct Node{
    int x;
    // con tro
    Node* next;
};
// tao node moi
node taoNode(int data){
    // cap phat dong 1 node
    node tmp = new Node();
    tmp->x = data;
    tmp->next = nullptr;
    return tmp;

}
// dem so phan tu
int size(node head){
    int dem = 0;
    while(head != nullptr){
        ++dem;
        head = head-> next;
    }
    return dem;
}
// in ra man hinh
void in(node head){
    while (head != nullptr){
        cout << head->data << ' ';
        head = head -> next;
    }
}
// them node vao dau
void themdau(node &head, int data){
    node moi = taoNode(data);
    if (head== nullptr){
        head = moi;
    }
    else {
        moi->next = head;
        head = moi;
    }
}
void themcuoi(node &head, int data){
    node moi = taoNode(data);
    if(head ==nullptr){
        head = moi;
    }
    else {
        node tmp = head;
        while(tmp->next != nullptr){
            tmp = tmp-> next;
        }
        tmp -> next = moi;  
    }
}
void themgiua(node &head, int data, int vitri){
    int n = size(head);
    if (vitri < 1 || vitri > n + 1){
        cout << "fail";
        return;
    }
    else{
        if (vitri == 1){
            themdau(head,data);
        }
        else if(vitri == n + 1){
            themcuoi(head,data);
        }
        else{
            node tmp = head;
            for (int i = 1; i <= vitri - 2; i++){
                tmp = tmp->next;
            }
            node moi = taoNode(data);
            moi->next = tmp -> next;
            tmp-> next = moi;
        }
    }
}

//xoa
void xoadau(node &head){
    node tmp = head;
    head = head-> next;
    delete tmp;
}
void xoacuoi(node &head){
    if (head==nullptr) {
        return;
    }
    node p = head; node q = nullptr;
    while(p->next != nullptr){
        q = p; 
        p = p->next;
    }
    delete p;
    if (q==nullptr){
        head = nullptr;
    }
    else {
        q->next = nullptr;
    } 
}
void xoagiua(node &head,int pos){
    int n = size(head);
    if (pos < 1 || pos > n ){
        cout << "fail";
        return;
    }
    node p = head; node q = nullptr;
    for (int i = 1; i < pos ; i++){
        q = p;
        p = p -> next;
    }
    if (q!= nullptr){
    q->next = p-> next;
    }
    else head = head->next;
    delete p;
    
}
// tim kiem
bool timkiem(node head, int val){
    while(head != nullptr){
        if (head->data == val) return true;
        head = head->next;
    }
    return false;
}
void sapxep(node &head){
    for (node i = head; i!= nullptr; i = i->next){
        node min = i;
        for (node j = i ->next; j != nullptr;j = j->next ){
            if (j-> next < i->next){
                min = j;
            }
        }
        swap(i->x, min->x);
    }
}


int main(){
         
}