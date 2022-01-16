#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//soal dari hackerrank

//fungsi utama
int main() {
    int N,jam,menit,detik,tes;
    cin>> N;
    menit = N/60;
    tes = N%60;
    //cout<< tes;
    if(menit<60){
        jam = 0;
        detik = N%60;
    }
    else{
    	if(detik<60){
    		jam = 0;
    		menit = 0;
    		detik = N;
		}
		else if(detik==60){
			jam = 0;
			menit = 1;
			detik = 0;
		}
		else{
			jam = menit/60;
			detik = tes;
		}
    }
    cout<<jam <<" jam "<<menit<< " menit "<<detik<< " detik ";
    return 0;
}
