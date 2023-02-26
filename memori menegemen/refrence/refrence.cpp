#include <iostream>
using namespace std;

int main(){
    int a=5;
    cout<<"address a = "<<&a<<endl;
    cout<<"nilai a = "<<a<<endl;


    int &b = a; // nilai dan pointer b akan sama dengan a
    cout<<"address b = "<<&b<<endl;
    cout<<"nilai b = "<<b<<endl;

    b= 10; // walaupun nilai b berubah maka nilai a akan  ikut berubah karena nilai pointernya sama

    cout<<"address a = "<<&a<<endl;
    cout<<"nilai a = "<<a<<endl;
    cout<<"address b = "<<&b<<endl;
    cout<<"nilai b = "<<b<<endl;
    

    return 0;
}