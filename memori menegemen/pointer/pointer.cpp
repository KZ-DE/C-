// untuk meakses memori dari sebuah variable menggunakan &<nama variable>
// sedangkan untuk membuat varibale pointer menggunakan tanda * di depan nama variable 

// pointer selalu bertipe data int
#include <iostream>
using namespace std;

int main(){
    int a = 5;

    // membuat variable pointer
    int *c=nullptr; // medeklarasikan pointer kosong

    int *b = &a; // meakses pointer dari variable a
    int *x; /* atau bisa n=menggunakan sperti ini
    x = &a; */
    

    // melihat nilai dan pointer
    cout<<"nilai = "<<a<<endl;
    cout<<"memori : "<<&a<<endl;
    cout<<"memori : "<<b<<endl;
    cout<<"pointer kosong : "<<c<<endl;

    // deferensi (mengambil data dari sebuah pointer)
    cout<<"mengambil nilai data dari pointer :"<<*b<<endl;
    

    return 0;
}