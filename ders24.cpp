#include <iostream>
using namespace std;


class araba{
	private:
	string marka;
	public:
		
	araba(){
		marka="toyota";  // sadece araba fonksiyonunun i�inde eri�ebilirim markaya d��ar�da eri�emem
	}
	
	int model;
	string renk;
	int ucret;
	
};

int main() {
	// eri�im belirte�leri
	// 1- public : herkese a��k de�i�tirebilirsin istedi�in gibi
	// 2- private: kapal� burdakilere eri�emezsin veya de�i�tiremezsin
	// 3- protected: korumal� bunu sonra g�r�cez
	
	araba a1;
	a1.ucret = 200000; // sadece ucrete eri�ebilirim ��nk� o public k�s�mda di�erleri private o y�zden eri�ilemez
	a1.model=1998;
	a1.renk="mavi";
	
	cout<<a1.ucret<<" "<<a1.model<<" "<<a1.renk;
	
	return 0;
}
