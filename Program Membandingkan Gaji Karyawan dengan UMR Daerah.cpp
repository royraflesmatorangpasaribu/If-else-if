#include <iostream>
using namespace std;

int main(){
	int GajiKaryawan, UMRDaerah;
	
	//input
	cout << "Masukkan Nominal Gaji Anda\t : ";
	cin >> GajiKaryawan;
	cout << "Masukkan UMR Daerah Anda\t : ";
	cin >> UMRDaerah;
	cout << endl;
	
	//output
	cout << "====================Output====================" << endl;   
	if(GajiKaryawan<UMRDaerah){
		cout << "Gaji anda dibawah UMR";
	}else if(GajiKaryawan==UMRDaerah){
		cout << "Gaji anda setara dengan UMR";
	}else{
		cout << "Gaji anda diatas UMR";
	}
	return 0;
}
