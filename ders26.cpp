#include <iostream>
using namespace std;

class araba{  // base ana sýnýf
	
	public:
	string marka;
	string model;	
    string ucret;
	
	void calistir(){
		cout<<marka<<" arabasi calisti\n";
	}
};
 // miras alma olayý olmasa hepsini amele gibi yazýcaktýk ama buna gerek yok
 // ana class tan diðer class lara miras býrakarak ordaki deðiþkenleri kullanýcaz
class toyota : public araba {
	/*public:
	string marka;
	string model;	
    string ucret;*/
    
    public:
    string klima;
	// burasý ana hariç kendine özel deðiþkenlerin olduðu kýsým
};

class opel : public araba{
	/*public:
	string marka;
	string model;	
    string ucret;*/
    
    public:
    string abs;
	// burasý ana hariç kendine özel deðiþkenlerin olduðu kýsým
	
};


int main() {
	// oop prensipler 2- kalýtým (miras alma)
	
	toyota t1; // t1.marka ,t1.model ,t1.ucret toyota da tanýmlamadýk ama hepsi otomatik geldi 
	opel o1;
	
	t1.klima="klimasi vardir\n";
	o1.abs="abs sistemi son model\n";
	t1.marka="toyota";
	o1.marka="opel";
	t1.calistir();
	o1.calistir();
	
	return 0;
}
