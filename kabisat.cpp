#include <iostream>
using namespace std;
int main(){
	
	int tahun;
	cin>>tahun;
	if (tahun%4==0){
		cout<<"Tahun Kabisat\n";
	}else if(tahun%1==0){
		cout<<"Bukan Tahun Kabisat\n";
	}
	return 0;
}
