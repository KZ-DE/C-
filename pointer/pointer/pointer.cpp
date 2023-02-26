// untuk meakses memori dari sebuah variable menggunakan &<nama variable>
// sedangkan untuk membuat varibale pointer menggunakan tanda * di depan nama variable 

// pointer selalu bertipe data int
#include <iostream>
using namespace std;

int main(){
    int a = 5;

    // membuat variable pointer
    int *b = &a; // meakses pointer dari variable a

    // melihat nilai dan pointer
    cout<<"nilai = "<<a<<endl;
    cout<<"memori : "<<&a<<endl;
    cout<<"memori : "<<b<<endl;

    return 0;
}