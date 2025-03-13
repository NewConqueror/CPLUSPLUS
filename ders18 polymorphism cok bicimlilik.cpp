#include <iostream>
using namespace std;


class nokta{
	public: 
	
	virtual void ciz(){  // bunu virtual yani sanal yaptýðýmýz zaman 
	// sadece nokta üzerinden oluþturursan bu metot çalýþýr
	// ama nokta sýnýfýný referans alarak oluþturulanlar kendi metotlarýný çalýþtýrýr
	// virtual sanal yapmadan önce hep nokta çalýþýyor yazýyordu þimdi nokta kare daire vs çalýþýyor dicek 
	
		cout<<"nokta ciziliyor..\n";
	}
	
};

class kare : public nokta{
	
	public:
	void ciz(){				// override(ezme)
		cout<<"kare ciziliyor..\n";
		
		cout<<"kare icindeki nokta cizimi : "; nokta::ciz();
		// eðer baþka bir class içinde override ezme yapmak istemiyorsak
		// kalýtým aldýðý sýnýfýn içinden çaðýrmak için  ana sýnýf::fonk();
		// 										 ana sýnýfýn içindeki fonksiyonu çaðýr demek;
	}
	
};


class daire : public nokta{
	
	public:
	void ciz(){				// override(ezme)
		cout<<"daire ciziliyor..\n";
	}
	
};


void fonk(nokta *ptr){
	
	ptr->ciz();
	
}


int main() {
	
	nokta n1;
	daire d1;
	kare k1;
	
	
	fonk(&d1); // n1 ise nokta d1 ise daire k1 ise kare olarak çalýþacak
	
	
	nokta *dizi[3];
	
	dizi[0]=&n1;
	dizi[1]=&k1;
	dizi[2]=&d1;
	
	dizi[0]->ciz();   // ana sýnýfýn metodunu sanal yapmadan önce hepsi nokta çalýþýyor diyordu
	dizi[1]->ciz();   // ama þimdi onu sanal yaptýðýmýz için sadece kendinden oluþturulanlar onu çalýþtýracak
	dizi[2]->ciz();   // ana sýnýfý referans alarak oluþturulanlar kendi metodunu çalýþtýrabilecek
	
	
	/*n1.ciz();
	k1.ciz();
	d1.ciz();*/
	
	
	return 0;
}
