#include <iostream>
using namespace std;


class kisi{
	public:
//	int sayi=10;
	static int sayi; 
	int sayi2=20;
		
	kisi(){
		sayi++;
		cout<<"sayimiz: "<<sayi<<endl;
	}
	
	static void selamla(){
		cout<<"herkese selamlar\n\n";
	}
	
};


int kisi::sayi=10; //e�er class da static de�i�ken olu�turacaksak de�erini d��ar�da ve bu �ekilde belirliyoruz	



void yazdir(){
	
	//int sayi=0;
	int static sayi=0;
	sayi++;
	cout<<"sayimiz: "<<sayi<<endl;
	
}


int main() {
	
	kisi k4;    // nesne olu�turulur olu�turulmaz sayimiz cal�s�r sonra selamla
	k4.selamla();
	
	
	
//	kisi::selamla();  �al��maz ��nk� statik de�il
	kisi::selamla();  // art�k �al���r ��nk� statik yapt�m
	
	// static olmayan de�i�kene sadece nesne olu�turarak eri�eblirsin yoksa eri�emezsin
	kisi::sayi=100;
	cout<<kisi::sayi<<endl<<endl;
	
	kisi k1;
	kisi k2;
	kisi k3;
	
	
	
	cout<<endl<<endl;
	yazdir();  // burda ise sayiyi static yani de�i�mez olarak belirledi�imiz i�in dokunmuyor
	yazdir();  // ilk ba�ta neyse o de�erin �st�ne ekliyor bu y�zden say� 1 2 3 4 diye s�rekli art�yor
	
//	yazdir();  fonksiyonu her �a��rd���m�z da iceri giriyor ve sayi=0 dedi�imiz i�in sayiyi 0 l�yor
//	yazdir(); sonra 1 artt�r�yor bu y�zden say� hep bir kal�yor
	
	return 0;
}
