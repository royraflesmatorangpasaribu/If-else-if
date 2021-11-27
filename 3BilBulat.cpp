#include <iostream>
using namespace std;

//fungsi utama dalam c++
int main(){
	//variabel yang akan digunakan
	int bil1, bil2, bil3;
	
	//judul program
	cout<<"================================================="<<endl;
	cout<<"=   Program Menentukan Bilangan Bulat Terbesar  ="<<endl;
	cout<<"================================================="<<endl<<endl;
	
	//input
	cout<<"Masukan Bilangan Bulat Pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan Bulat Kedua   : ";
	cin>>bil2;
	cout<<"Masukan Bilangan Bulat  Ketiga : ";
	cin>>bil3;
	cout<<"\n\n";
   
	
	if(bil1>bil2){ //mencetak jika bilangan a adalah bilangan terbesar dari 2 bilangan lainnya
		cout<<bil1<<" adalah bilangan terbesar"<<endl;   
	}else{
		if (bil2>bil3){//mencetak jika bilangan b adalah bilangan terbesar dari 2 bilangan lainnya
	  	cout<<bil2<<" adalah bilangan terbesar"<<endl;      
		}else{//mencetak jika bilangan c adalah bilangan terbesar dari 2 bilangan lainnya
        cout<<bil3<<" adalah bilangan terbesar"<<endl;      
		}	
   }

   return 0;
}
