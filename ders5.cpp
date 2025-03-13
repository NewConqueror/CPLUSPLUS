#include <iostream>
using namespace std;

int main() {
	/* döngüler
	for
	while
	do while*/
	
	/*for(int i=0;i<5;i++){
		cout<<"merhaba dunya "<<i<<endl;
	}*/
	
	int i=7;
	/*while(i<5){    // þart saðlanmýyorsa içine girmez yani çalýþmaz	
		cout<<"merhaba c++ "<<endl;
		i++; // bunu yapmazsan sonsuz döngüye girer
	}*/
	
	do{ // þart saðlanmasa bile en az bir kere çalýþýr
		cout<<"yarraaa"<<endl;
		i++;  // yoksa sonsuz döngüye girer ;
	}while(i<5);
	
	
	return 0;
}
