#include <iostream>
using namespace std;

class araba{
	public: /// þuanlýk ne bilmiyorum görücez
	
	string marka;
	int model;
	string renk;
	
	void calistir(){
		cout<<"arac calisiyor..";
	}
	
};


int main() {
	// OOP Object Orianted Programing nesne yönelimli programlama 
	
	araba a1;
	
	a1.marka="fiyat";
	a1.model=2016;
	a1.renk="mavi";
	
	cout<<"aracimizin bilgileri\n\n";
	
	cout<<"marka: "<<a1.marka<<endl;
	cout<<"model: "<<a1.model<<endl;
	cout<<"renk : "<<a1.renk<<endl;
	a1.calistir();
	
	return 0;
}
