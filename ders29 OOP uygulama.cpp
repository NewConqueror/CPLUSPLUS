#include <iostream>
using namespace std;

class hayvan{
	
	protected:
	int boy;
	int kilo;
	
	public:
	string ad;
	void sesver(){
		cout<<"sesleniyorum...\n";	
	}
	
};


class kopek : public hayvan{
	
	public:
	void boygir(int a){
		boy=a;
	}
	
	int boygonder(){
		return boy;
	}
	
	void kilogir(int a){
		kilo=a;
	}
	
	int kilogonder(){
		return kilo;
	}
	
	public: 
	string cinsi;
	
	void sesver(){
		cout<<"hav hav...\n";	
	}
	
};

class kedi : public hayvan{
	
	public:
	void boygir(int a){
		boy=a;
	}
	
	int boygonder(){
		return boy;
	}
	
	void kilogir(int a){
		kilo=a;
	}
	
	int kilogonder(){
		return kilo;
	}
	
	public:
	string gozrengi;
	void sesver(){
		cout<<"miyav miyav...\n";	
	}
	
};


class kus : public hayvan{
	
	public:
	void boygir(int a){
		boy=a;
	}
	
	int boygonder(){
		return boy;
	}
	
	void kilogir(int a){
		kilo=a;
	}
	
	int kilogonder(){
		return kilo;
	}
	
	public:
		
	int kanatacikligi;
	void sesver(){
		cout<<"cik cik ...\n";	
	}
};

int main() {
	// oop prensiplerle ilgili uygulama
	
	kopek ko1;
	ko1.ad="saliha";
	ko1.cinsi="kanis";
	ko1.boygir(2);
	ko1.kilogir(20);
	
	cout<<"koppege ait bilgiler\n";
	cout<<"adi   : "<<ko1.ad<<endl;
	cout<<"cinsi : "<<ko1.cinsi<<endl;
	cout<<"boyu  : "<<ko1.boygonder()<<endl;
	cout<<"kilosu: "<<ko1.kilogonder()<<endl;
	
	kedi ke1;
	ke1.ad="cemre";
	ke1.gozrengi="kahverengi";
	ke1.boygir(1);
	ke1.kilogir(10);
	
	cout<<"kedicige ait bilgiler\n\n";
	cout<<"adi   : "<<ke1.ad<<endl;
	cout<<"goz   : "<<ke1.gozrengi<<endl;
	cout<<"boyu  : "<<ke1.boygonder()<<endl;
	cout<<"kilosu: "<<ke1.kilogonder()<<endl;
	
	kus ku1;
	ku1.ad="halime";
	ku1.kanatacikligi=3;
	ku1.boygir(0.5);
	ku1.kilogir(2);
	
	cout<<"kusa ait bilgiler\n\n";
	cout<<"adi   : "<<ku1.ad<<endl;
	cout<<"kanat : "<<ku1.kanatacikligi<<endl;
	cout<<"boyu  : "<<ku1.boygonder()<<endl;
	cout<<"kilosu: "<<ku1.kilogonder()<<endl;
	
	return 0;
}
