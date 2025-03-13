#include <iostream>
using namespace std;


class araba{
	private:
	string marka;
	public:
		
	araba(){
		marka="toyota";  // sadece araba fonksiyonunun içinde eriþebilirim markaya dýþarýda eriþemem
	}
	
	int model;
	string renk;
	int ucret;
	
};

int main() {
	// eriþim belirteçleri
	// 1- public : herkese açýk deðiþtirebilirsin istediðin gibi
	// 2- private: kapalý burdakilere eriþemezsin veya deðiþtiremezsin
	// 3- protected: korumalý bunu sonra görücez
	
	araba a1;
	a1.ucret = 200000; // sadece ucrete eriþebilirim çünkü o public kýsýmda diðerleri private o yüzden eriþilemez
	a1.model=1998;
	a1.renk="mavi";
	
	cout<<a1.ucret<<" "<<a1.model<<" "<<a1.renk;
	
	return 0;
}
