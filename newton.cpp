#include<iostream>
using namespace std;

//dibuat oleh Roy Rafles Matorang Pasaribu

int main(){
	//variabel yang digunakan
	int hk1, hk2, hk3, pilihan;
	
	//output judul program
	cout<<"==========================================="<<endl;
	cout<<"Program Menampilkan Rumus Gaya Hukum Newton"<<endl;
	cout<<"==========================================="<<endl<<endl;
	
	//input
	cout<<"Pilih Opsi Untuk Menampilkan Rumus"<<endl;
	cout<<"1. Hukum Newton 1"<<endl;
	cout<<"2. Hukum Newton 2"<<endl;
	cout<<"3. Hukum Newton 3"<<endl;
	cout<<"Pilihan Opsi : ";
	cin>>pilihan;
	cout<<"\n\n";
	
	//output
	if(pilihan==1){
		cout<<"F=0";
	}else if(pilihan==2){
		cout<<"F=m.a";
	}else if(pilihan==3){
		cout<<"F aksi = -F reaksi";
	}else{
		cout<<"Pilihan Tidak Sesuai!!!";
	}
	
	//karena menggunakan fungsi int main()
	return 0;
}
