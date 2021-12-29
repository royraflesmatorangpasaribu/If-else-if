#include <iostream>
using namespace std;

//program dibuat oleh Roy Rafles Matorang Pasaribu
//pada 29 Desember 2021

//minimal terdapat satu fungsi 
int main(){
	char harga;
	
	cout<<"Sistem untuk mengetahui harga Makanan di Rumah Makan Royrafmp"<<endl;
	cout<<"1. Mie Ayam"<<endl;
	cout<<"2. Bakso"<<endl;
	cout<<"3. Es tea"<<endl;
	cout<<"Pilih makanan yang ingin diketahui harganya (1,2,3): ";
	cin>>harga;
	
	cout<<endl;
	switch(harga){
		case'1':
			cout<<"Harga Mie Ayam : Rp.7000,00"<<endl;
			break;
		case'2':
			cout<<"Harga Bakso : Rp.6000,00"<<endl;
			break;
		case'3':
			cout<<"Harga Es tea : Rp.2000,00"<<endl;
			break;
		default:
			cout<<"INPUTAN TIDAK SESUAI KAWAN!!!";
	}
	//karena menggunakan fungsi main()
	return 0;
}
