#include <iostream>
#include <array>
using namespace std;

int main(){
    array < int, 10> nilai;
    printf("Mambuar grafik nilai mahasiswa\n\n");

    for(int i=1; i<=nilai.size(); i++ ){
        cout<<"masukan jumlah mahasiswa dengan nilai ";
        if(i==0){
            cout<<"0-9 : ";
            
        }else if (i==10){
            cout<<100<<" : ";
            cin>>nilai[i];
            break;
        }else{
            cout<<i*10<<"-"<<i*10+9<<" : ";

        }
        cin>>nilai[i];
        cout<<"Dari urutan ke: "<<i<<endl;
        
    }

    return 0;
}