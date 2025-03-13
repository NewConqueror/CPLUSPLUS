#include <iostream>
using namespace std;

class araba{
	
	public:
	string marka;
	int model;
	string renk;
	
	void gazla(){
		cout<<"gaza basiliyor..";
	}

	void dur(){
		cout<<"arac durduruldu..";
	}
	
};

int main() {
	
	araba nesne1;
	
	nesne1.marka="fiyat";
	nesne1.model=1965;
	nesne1.renk="gri";
	
	cout<<"marka: "<<nesne1.marka<<endl;
	cout<<"model: "<<nesne1.model<<endl;
	cout<<"renk : "<<nesne1.renk<<endl;
	nesne1.gazla();
	cout<<endl;
	nesne1.dur();
	return 0;
}
