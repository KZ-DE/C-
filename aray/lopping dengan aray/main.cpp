#include <iostream>
using namespace std;

int main(){
    int nilai[]={1,2,3,4,5,6,7,8,9,10};

    // looping biasah
    for(int i=0; i<10; i++){ // harus ada batasan loopingnya
    cout<<"address : "<<&nilai[i]<<" nilainya : "<<nilai[i]<<endl;
    }

    cout<<endl;

    // looping dengan array
    for(int loparray : nilai){ // address yang di gunakan adalah adress dari int loparray
    cout<<"address : "<<&loparray<<" nilainya : "<<loparray<<endl;
    loparray= 111; // kelibahnnya adalah nilainya tidak bisa di rubah walaupun di dalam
    
    nilai[2]=100; // untuk mengubah nilai array
    // loparray[3] = 111; // sedangkan varibale looping tidak mempunya array

    loparray = 1000; // kelibahnnya adalah nilainya tidak bisa di rubah walaupun di dalam
    }

    cout<<endl;

    // agar mendapat address yang berbeda juga bisa dengan menggunakna teknikn ref
    for(int &arrayref : nilai){
        arrayref *= 2; // dengan menggunakan ini dapat merubah isi dari variable yanga ada di looping array karena adreesnya saling berbeda
        cout<<"Nilai address : "<<&arrayref<<" nilainya : "<<arrayref<<endl;
        
    }

    return 0;
}