#include <iostream>  
using namespace std;  

//program dibuat pada 31 Januari 2022
//oleh roy rafles matorang pasaribu

//fungsi utama
int main(){  
	//deklarasi variabel
	int n,r,sum=0,temp;    

	//judul program
	cout<<"Palindrom Program"<<endl;
	
	//input
	cout<<"Masukkan Angkanya : ";    
	cin>>n;  
	
    //menyimpan data sementara
    temp=n;  
	  
    //pengecekan kondisi
    while(n>0){    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }  
    
    //output 
    if(temp==sum)    
    cout<<"Angka tersebut adalah Palindrom";    
    else    
    cout<<"Angka tersebut bukan Palindrom";   
	
    //karena menggunakan fungsi main()
    return 0;  
}  
