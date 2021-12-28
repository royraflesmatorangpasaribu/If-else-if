#include<iostream>
using namespace std;

//program ini dibuat oleh roy rafles matorang pasaribu
//pada tanggal 28 Desember 2021

int main(){
	
	//deklarasi variabel
	int n;
	
	cout<<"============================="<<endl;
	cout<<"      Motivasi Untuk Mu      "<<endl;
	cout<<"============================="<<endl;
	cout<<"1. Pendidikan"<<endl;
	cout<<"2. Percintaan"<<endl;
	cout<<"3. Pertemanan"<<endl;
	cout<<"\n Pilih Angka (1,2,3) : ";
	cin>>n;
	
	system("cls");  //untuk membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data 
			//yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.
	
	cout<<endl;
	if(n==1){
		cout<<"Kejarlah mimpimu, abaikan omongan orang yang berusaha mematikan mimpimu, jadikan omongan mereka sebagai motivasimu untuk sukses"<<endl;
		cout<<"by : royrafmp";
	}
	else if(n==2){
		cout<<"hargailah pasanganmu selagi ia masih bersamamu, karena jika dia sudah tidak bersamamu penyesalan tiada berguna"<<endl;
		cout<<"by : royrafmp";
	}
	else if(n==3){
		cout<<"sedihlah saat temanmu bersedih dan bahagialah saat temanmu berbahagia"<<endl;
		cout<<"by : royrafmp";
	}
	else{
		cout<<"INPUTAN TIDAK SESUAI!!!";
	}
	//karena menggunakan fungsi main()
}
