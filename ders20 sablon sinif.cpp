#include <iostream>
using namespace std;

//template <typename tip>

template <class tip>

class sinifim{
	
	public: 
	
	tip s1;
	tip s2;
	
	sinifim(tip s1,tip s2) : s1(s1),s2(s2)
	{
		cout<<"toplam sonuc: "<<s1+s2<<endl;
		
	}
	
};



/*tip topla(tip a,tip b){
	
	cout<<"sayilarin toplam sonucu: "<<a+b<<endl;
	return a+b;
}*/

int main() {
	
	sinifim <float> nesne1(10.5,9.7);
	sinifim <int> nesne2(5,6);
	sinifim <string> nesne3("fatih"," yeni");
	
	
/*	topla(10,20);
	topla(3.5,7.4);	
	
	int sonuc=topla(5.5,7.1);
	cout<<"sonuc: "<<sonuc<<endl;*/
	
	return 0;
}
