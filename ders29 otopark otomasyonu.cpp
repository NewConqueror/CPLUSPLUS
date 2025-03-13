#include <iostream>
using namespace std;

class otopark{
	
	private:
	int saat;
	int secim;
	int araccinsi;
	int toplamucret;
	void hesapla();
	public:
	void menu();
	
};


void otopark::hesapla(){
	
	while(true){
		cout<<"saat: "; cin>>saat;
	
	switch(araccinsi){
		
		case 1: toplamucret= saat*10 + 10; cout<<"toplam ucret: "<<toplamucret<<endl<<endl; break;
		case 2: toplamucret= saat*5 + 5;   cout<<"toplam ucret: "<<toplamucret<<endl<<endl; break;
		case 3: toplamucret= saat*7 + 7;   cout<<"toplam ucret: "<<toplamucret<<endl<<endl; break;
		case 0: break;
		default: cout<<"hatali secim yaptiniz."; break;
		
	}
	menu();
	}
	
	
	
}


void otopark::menu(){
	
	cout<<"OTOPARK UYGULAMASI\n\n";
	
	cout<<"1-taksi"<<endl;
	cout<<"2-minibus"<<endl;
	cout<<"3-uber"<<endl;
	cout<<"0-cikis"<<endl;
	cout<<"seciminiz: "; cin>>secim;
	
	if(secim>0 && secim<4){
		araccinsi=secim;
		hesapla();
	}
	else if(secim==0){
		cout<<"cikis yapiliyor.."<<endl;
		exit(1);
	}
	else{
		cout<<"hatali secim yaptiniz.\n";
	}
	
}


int main() {
	
	otopark o1;
	o1.menu();
	
	
	
	return 0;
}
