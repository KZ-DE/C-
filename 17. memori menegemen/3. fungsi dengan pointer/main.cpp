#include <iostream>
using namespace std;

// fungsi untuk pointer tidak perlu menggunakan retrun maka kita gunakan void

// fungsi dengan input pointer
void fungsi(int *b){
    cout<<"address b = "<<b<<endl;
    cout<<"nilai b = "<<*b<<endl; 
}

void kuadrat(int *c){
    *c = *c * *c;
}


int main(){
    int a= 5;
    cout<<"address a = "<< &a<<endl;
    cout<<"nilai a = "<< a<<endl;
    
    fungsi(&a); // fungsi dengan input pointer

    kuadrat(&a);
    cout<<"nilai a = "<< a<<endl;

    return 0;
}