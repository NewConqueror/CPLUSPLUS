#include <iostream>
using namespace std;

class sekil{
	
	public:
	string ad;
	void ciz(){
		cout<<"sekil ciziliyor..\n";
	}
	
};

class ucgen : public sekil {
	
	public:
	string ad;
	int k1,k2,k3;
	void ciz(){
		cout<<"ucgen ciziliyor..\n";
	}
	
};

class kare : public sekil{
	
	public:
	string ad;
	int k1;
	void ciz(){
		cout<<"kare ciziliyor..\n";
	}
	void alanhesapla(){
		cout<<"karenin alani: "<<k1*k1;
		
	}
	
};
int main() {
	
	ucgen u1;
	u1.k1=3;
	u1.k2=4;
	u1.k3=5;
	u1.ciz();
	
	kare k1;
	k1.k1= 10;
	k1.ciz();
	k1.alanhesapla();
	
	return 0;
}
