#include <iostream>
using namespace std;

int main() {
	/* d�ng�ler
	for
	while
	do while*/
	
	/*for(int i=0;i<5;i++){
		cout<<"merhaba dunya "<<i<<endl;
	}*/
	
	int i=7;
	/*while(i<5){    // �art sa�lanm�yorsa i�ine girmez yani �al��maz	
		cout<<"merhaba c++ "<<endl;
		i++; // bunu yapmazsan sonsuz d�ng�ye girer
	}*/
	
	do{ // �art sa�lanmasa bile en az bir kere �al���r
		cout<<"yarraaa"<<endl;
		i++;  // yoksa sonsuz d�ng�ye girer ;
	}while(i<5);
	
	
	return 0;
}
