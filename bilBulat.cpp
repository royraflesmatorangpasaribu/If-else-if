#include<iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	float bill;
	
	//output judul program
	cout<<"========================================="<<endl;
	cout<<"=   Program Menentukan Bilangan Bulat   ="<<endl;
	cout<<"========================================="<<endl<<endl;
	
	//input
	cout<<"Inputkan Bilangan yang akan di cek : ";
	cin>>bill;
	
	//output
	cout<<"Bilangan "<<bill<<" adalah ";
	if(bill<0){
		while(bill<0){
			bill++;
		}
	}else{
		while(bill>0){
			bill--;
		}
	}if(bill==0){
		cout<<"Bilangan Bulat";
	}else{
		cout<<"Bukan Bilangan Bulat";
	}
	
	//karena menggunakan fungsi main()
	return 0;
}
