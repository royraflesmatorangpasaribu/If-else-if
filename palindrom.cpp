#include <iostream>  
using namespace std;  
int main(){  
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
    return 0;  
}  
