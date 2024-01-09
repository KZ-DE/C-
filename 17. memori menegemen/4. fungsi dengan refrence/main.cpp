#include <iostream>
using namespace std;

void reference(int &c){
    cout<<"Nilai c = "<<c<<endl;
    cout<<"memori c = "<<&c<<endl;    
}

void reference2(int x){
    int &z = x;
    cout<<"Nilai z = "<<z<<endl;
    cout<<"memori z = "<<&z<<endl;    
}


int main(){
    int a = 5;
    cout<<"Nilai a = "<<a<<endl;
    cout<<"memori a = "<<&a<<endl;

    // pointer 
    int *b=&a;
    cout<<"memori b = "<<b<<endl;

    // reference
    int &d = a;
    cout<<&d<<endl;

    reference(a);
    cout<<endl;

    reference2(a);

    return 0;
}