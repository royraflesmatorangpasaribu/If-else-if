#include<iostream>
using namespace std;

//program dibuat oleh Roy Rafles Matorang Pasaribu
//Pada 29 Desember 2021

//minimal terdapat satu fungsi
int main(){
	//tebak 1 soal
	int n;
	
	cout<<"\t\tKuis Senang-senang\n\n";
	cout<<"siapakah yang memiliki akun github ini?"<<endl;
	cout<<"1. Roy Rafles Matorang Pasaribu"<<endl;
	cout<<"2. Roi Rafles Matorang Pangaribuan"<<endl;
	cout<<"3. Roy Raffles Matorang Pasaribu"<<endl<<endl;
	cout<<"Pilih Jawaban Mu (1, 2, 3) : ";
	//input
	cin>>n;
	
	//output
	if(n==1){
		cout<<"ih kamu pinter banget, jawaban kamu BENAR!!!";
	}
	else if(n==2){
		cout<<"aduhhh jawaban kamu salah nihh, coba deh cek ditampilan profil github ini";
	}
	else if(n==3){
		cout<<"aduhhh jawaban kamu salah nihh, coba lebih teliti lagi dehh";
	}
	else{
		cout<<"Opsi yang kamu pilih gadaaa jadinya nutup deh cmdnya hehehe cuman ada opsi 1, 2, 3 yaaa";
	}
	//karena menggunakan fungsi main()
	return 0;
}
