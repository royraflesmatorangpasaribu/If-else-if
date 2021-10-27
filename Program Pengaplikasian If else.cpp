#include <iostream>
using namespace std;
/* Nama		: Roy Rafles Matorang Pasaribu
   NPM		: 2117051058
   Kelas	: B  */
int main (){
	float JumlahBitcoin;
	
	//input
	cout << "Masukkan Jumlah Bitcoin\t : ";
	cin >> JumlahBitcoin;
	cout << endl;
	
	//output
	if (JumlahBitcoin<1){
		cout << "Tipe Ranking : Shrimp";
	}else if (JumlahBitcoin>=1 && JumlahBitcoin<10){
		cout << "Tipe Ranking : Crab";
	}else if (JumlahBitcoin>=10 && JumlahBitcoin<50){
		cout << "Tipe Ranking : Octopus";
	}else if (JumlahBitcoin>=50 && JumlahBitcoin<100){
		cout << "Tipe Ranking : Fish";
	}else if (JumlahBitcoin>=100 && JumlahBitcoin<500){
		cout << "Tipe Ranking : Dolphin";
	}else if (JumlahBitcoin>=500 && JumlahBitcoin<1000){
		cout << "Tipe Ranking : Shark";
	}else if (JumlahBitcoin>=1000 && JumlahBitcoin<5000){
		cout << "Tipe Ranking : Whale";
	}else{
		cout << "Tipe Ranking : Humpback";
	}
	
	return 0;
}
