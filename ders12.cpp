#include <iostream>
using namespace std;

int main() {
	
	int vize,final,ort;
	
	cout<<"vize notunu girin: ";
	cin>>vize;
	cout<<"final notunu girin: ";
	cin>>final;
	
	ort=vize*0.4 + final*0.6;
	
	if(ort<50){
		cout<<"ortalamaniz: "<<ort<<"kaldýnýz."<<endl;
	}
	else if(ort<70){
		cout<<"ortalamaniz: "<<ort<<" gecdiniz CC"<<endl;
	}
	else if(ort<85){
		cout<<"ortalamaniz: "<<ort<<" gecdiniz BB"<<endl;
	}
	else if(ort<101){
		cout<<"ortalamaniz: "<<ort<<" gecdiniz AA"<<endl;
	}
	else{
		cout<<"hatali giris yaptiniz";
	}
	
	
	return 0;
}
