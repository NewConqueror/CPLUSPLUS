#include <iostream>
using namespace std;

/*int topla(int s1,int s2){
	
	return s1+s2;
}

float topla(float s1,float s2){
	
	return s1+s2;
}*/

// iki tane ayr� fonksiyon ile yapmak yerine tip tan�mlay�p tek seferde yapt�k

/*template <class tip>
tip topla(tip s1,tip s2){
	
	return s1+s2;
}*/


template <class tip>

class sayi{
	
	public:
	tip s1,s2;
	
	sayi(tip s1,tip s2){
		
		this->s1=s1;
		this->s2=s2;
	}
	
	tip topla(){
		
		return s1+s2;
	}
	
};






int main() {
	// template (�ablon) tipler
	
	/*int a=1,b=2;
	float c=3.3,d=4.4;
	
	cout<<topla(a,b)<<endl;
	cout<<topla(c,d)<<endl;*/
	
	sayi <float> nes1(4.7,5.8);
	
	cout<<nes1.topla();
	
	
	return 0;
}
