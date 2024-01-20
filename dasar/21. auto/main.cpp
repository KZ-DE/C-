#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // auto di gunakan untuk memberi tipe data variabel kita menjadi mengikuti nilai yang kita beri apakah itu int aja float atau string dll
    auto a = 15;
    auto b = 3.14;
    auto name = "bejo";
    cout << &a << endl;
    cout << &b << endl;
    cout << &name << endl;
    return 0;
}
