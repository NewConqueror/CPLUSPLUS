#include <iostream>
using namespace std;

void faktor(int sayi){
	
	int sonuc=1;
	for(int i=1;i<=sayi;i++){
		sonuc*=i; // sonuc=sonuc*i demek bu
	}
	cout<<sayi<<" ! = "<<sonuc<<endl;
}


int main() {
	int sayi;
	cout<<"bir sayi giriniz: ";
	cin>>sayi;
	
	faktor(sayi);
	
	
	
	return 0;
}
