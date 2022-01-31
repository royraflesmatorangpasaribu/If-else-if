#include <iostream>  
using namespace std;  

//program dibuat pada 31 Januari 2022
//oleh roy rafles matorang pasaribu

int main(){  
    //deklarasi variabel
    int n,r,sum=0,temp;    
    
    cout<<"Palindrom Program"<<endl;
    cout<<"Masukkan Angkanya : ";    
    cin>>n;    
    temp=n;  
	  
    while(n>0){    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }  
	  
    if(temp==sum)    
    cout<<"Angka tersebut adalah Palindrom";    
    else    
    cout<<"Angka tersebut bukan Palindrom";   
	
    //karena menggunakan fungsi main()
    return 0;  
}  
