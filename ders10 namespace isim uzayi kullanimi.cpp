#include <iostream>
using namespace std;

namespace proA{
	int x;
	int y;
	int z;
	
	void selam(){
		cout<<"Ahmet hesabi naptin lan ehe";
	}
		
}

namespace proB{
	int x;
	int y;
	int z;
	int t;
	
	void selam(){
		cout<<"\nBurhan hesabi naptin lan ehe";
	}
		
}


int main() {
	// namespace �ok kapsaml� projerde vs kimin ne yapt���n� bilmek i�in kullan�l�r
	// a�a��daki gibi namespace A n�n yapt��� i�ler de�i�kenler belli B nin yapt��� i�ler de�i�kenleri belli
	// ki�iye ait namespaceler ile proje daha anla��labilir bir hale geliyor
	
	
	int x;
	
	proA::x=10;
	proB::x=20;
	
	cout<<proA::x<<endl;
	cout<<proB::x<<endl;
	
	proA::selam();
	proB::selam();
	
	return 0;
}
