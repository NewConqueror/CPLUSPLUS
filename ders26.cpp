#include <iostream>
using namespace std;

class araba{  // base ana s�n�f
	
	public:
	string marka;
	string model;	
    string ucret;
	
	void calistir(){
		cout<<marka<<" arabasi calisti\n";
	}
};
 // miras alma olay� olmasa hepsini amele gibi yaz�cakt�k ama buna gerek yok
 // ana class tan di�er class lara miras b�rakarak ordaki de�i�kenleri kullan�caz
class toyota : public araba {
	/*public:
	string marka;
	string model;	
    string ucret;*/
    
    public:
    string klima;
	// buras� ana hari� kendine �zel de�i�kenlerin oldu�u k�s�m
};

class opel : public araba{
	/*public:
	string marka;
	string model;	
    string ucret;*/
    
    public:
    string abs;
	// buras� ana hari� kendine �zel de�i�kenlerin oldu�u k�s�m
	
};


int main() {
	// oop prensipler 2- kal�t�m (miras alma)
	
	toyota t1; // t1.marka ,t1.model ,t1.ucret toyota da tan�mlamad�k ama hepsi otomatik geldi 
	opel o1;
	
	t1.klima="klimasi vardir\n";
	o1.abs="abs sistemi son model\n";
	t1.marka="toyota";
	o1.marka="opel";
	t1.calistir();
	o1.calistir();
	
	return 0;
}
