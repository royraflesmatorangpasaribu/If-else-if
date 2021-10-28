#include <iostream>
using namespace std;

int main(){
	int bilangan;
	cout<<"Masukkan Bilangan : ";
	cin>>bilangan;
	cout<<endl;
	
	if(bilangan%2==0){
		cout<<bilangan<<" "<<"Adalah Bilangan Genap"<<endl;
	}else{
		cout<<bilangan<<" "<<"Adalah Bilangan Ganjil"<<endl;
	}
	return 0;
}
