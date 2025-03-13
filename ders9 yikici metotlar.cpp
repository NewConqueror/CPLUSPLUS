#include <iostream>
using namespace std;


class kisi{
	private:
	string ad;
	string soyad;
	int yas;
	
	public: 
	kisi(string ad, string soyad, int yas){
		cout<<"yapici metot calisti\n";
	}
	~kisi(){
		cout<<"yikici metot calisti\n";
	}
	
};


int main() {
	
	kisi *ptr = new kisi("fatih","yeni",18); // pointer ile oluþturulur
	
	delete ptr;   // yýkýcý metot delete ptr yaptýðýn zaman çalýþýr baþka türlü çalýþmaz
	
	
	return 0;
}
