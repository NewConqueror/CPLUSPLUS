#include <iostream>
using namespace std;


class nokta{
	public: 
	
	virtual void ciz(){  // bunu virtual yani sanal yapt���m�z zaman 
	// sadece nokta �zerinden olu�turursan bu metot �al���r
	// ama nokta s�n�f�n� referans alarak olu�turulanlar kendi metotlar�n� �al��t�r�r
	// virtual sanal yapmadan �nce hep nokta �al���yor yaz�yordu �imdi nokta kare daire vs �al���yor dicek 
	
		cout<<"nokta ciziliyor..\n";
	}
	
};

class kare : public nokta{
	
	public:
	void ciz(){				// override(ezme)
		cout<<"kare ciziliyor..\n";
		
		cout<<"kare icindeki nokta cizimi : "; nokta::ciz();
		// e�er ba�ka bir class i�inde override ezme yapmak istemiyorsak
		// kal�t�m ald��� s�n�f�n i�inden �a��rmak i�in  ana s�n�f::fonk();
		// 										 ana s�n�f�n i�indeki fonksiyonu �a��r demek;
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
	
	
	fonk(&d1); // n1 ise nokta d1 ise daire k1 ise kare olarak �al��acak
	
	
	nokta *dizi[3];
	
	dizi[0]=&n1;
	dizi[1]=&k1;
	dizi[2]=&d1;
	
	dizi[0]->ciz();   // ana s�n�f�n metodunu sanal yapmadan �nce hepsi nokta �al���yor diyordu
	dizi[1]->ciz();   // ama �imdi onu sanal yapt���m�z i�in sadece kendinden olu�turulanlar onu �al��t�racak
	dizi[2]->ciz();   // ana s�n�f� referans alarak olu�turulanlar kendi metodunu �al��t�rabilecek
	
	
	/*n1.ciz();
	k1.ciz();
	d1.ciz();*/
	
	
	return 0;
}
