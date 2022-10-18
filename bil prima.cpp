#include <iostream>
using namespace std;
int main(){
	int bil;
	cin>>bil;
	
	if(bil==2||bil==3||bil==5||bil==7||bil==11||bil==19||bil==23||bil==29||bil==31){
		cout<<"Bilangan Prima\n";
	}else if(bil%2!=0&&bil%3!=0&&bil%5!=0&&bil%7!=0&&bil%11!=0&&bil%19!=0&&bil%23!=0&&bil%29!=0&&bil%31!=0){
		cout<<"Bilangan Prima\n";
	}else{
		cout<<"Bukan Bilangan Prima\n";
	}
	return 0;
}
