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
	
	kisi *ptr = new kisi("fatih","yeni",18); // pointer ile olu�turulur
	
	delete ptr;   // y�k�c� metot delete ptr yapt���n zaman �al���r ba�ka t�rl� �al��maz
	
	
	return 0;
}
