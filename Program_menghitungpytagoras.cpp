#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cari;
    float A,B,C;
    cout<<"============================"<<endl;
	cout<<"Program Menghitung Pytagoras"<<endl;
	cout<<"============================"<<endl<<endl;
    cout<<"Pilih Opsi yang mau di cari :"<<endl;
    cout<<"               "<<endl;
    cout<<"          /|   "<<endl;
    cout<<"      3  / | 1 "<<endl;
    cout<<"        /  |   "<<endl;
    cout<<"       /___|   "<<endl;
    cout<<"         2     "<<endl;
    cout<<"Masukkan Pilhan Opsi (1,2,3):";
    cin>>cari;
    if (cari== 1 ) {
        cout<<"Masukkan sisi 2 : ";
        cin>>B;
        cout<<"Masukkan sisi 3 : ";
        cin>>C;
        A=sqrt(pow(C,2)-pow(B,2));
        cout<<"\nhasilnya : "<<A;
    } else if (cari== 2){
        cout<<"Masukkan sisi 1 : ";
        cin>>A;
        cout<<"Masukkan sisi 3 : ";
        cin>>C;
        B=sqrt(pow(C,2)-pow(A,2));
        cout<<"\nHasilnya : "<<B;
    } else if (cari==3){
        cout<<"Masukkan sisi 1 : ";
        cin>>A;
        cout<<"Masukkan sisi 2 : ";
        cin>>B;
        C=sqrt(pow(B,2)+pow(A,2));
        cout<<"\nHasilnya : "<<C;
    } else {
        cout<<"masukkan dengan benar bagian mana yang akan di hitung"<<endl<<endl;

    }
    return 0;
}
