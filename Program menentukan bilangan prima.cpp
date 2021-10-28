#include <iostream>
using namespace std;

int input(int bilangan, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (bilangan % i == 0) { 
		return 1 + input(bilangan, --i); 
		} else { 
		return 0 + input(bilangan, --i); 
	} 
}
  
int cek(int bilangan){ 
	if (bilangan > 1) { 
		return (input(bilangan, bilangan) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int bilangan;
	cout<<"Masukan Bilangan : ";
	cin>>bilangan;
	cout<<endl;

	if (cek(bilangan)){
		cout<<bilangan<<" "<<"Bilangan Prima"<<endl;
	}else {
		cout<<bilangan<<" "<<"Bukan Bilangan Prima"<<endl;
	}
	return 0;
} 
