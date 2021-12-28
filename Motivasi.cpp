#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"============================="<<endl;
	cout<<"      Motivasi Untuk Mu      "<<endl;
	cout<<"============================="<<endl;
	cout<<"1. Pendidikan"<<endl;
	cout<<"2. Percintaan"<<endl;
	cout<<"3. Pertemanan"<<endl;
	cout<<"\n Pilih Angka (1,2,3) : ";
	cin>>n;
	
	system("cls");
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
}
