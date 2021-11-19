#include <iostream>
using namespace std;

int main()
{
    int bayar,akhir,diskon;
    cout<<"=========================================="<<endl;
	cout<<"Program Potongan atau Diskon harga Belanja"<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Masukkan Total Pembayaran = ";
    cin>>bayar;
    if ((bayar>=1000000) && (bayar<3000000)){
        diskon=bayar*0.05;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 5%"<<endl;
    } else if ((bayar>=3000000) && (bayar<5000000)){
        diskon=bayar*0.1;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if (bayar>=5000000){
        diskon=bayar*0.15;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 15%"<<endl;
    }else {
        akhir=bayar;
    }
    cout<<endl<<"Jadi Total Pembayarannya adalah"<<" "<<akhir<<endl;;
    return 0;
}
