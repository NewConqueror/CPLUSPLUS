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


int kisi::sayi=10; //eğer class da static değişken oluşturacaksak değerini dışarıda ve bu şekilde belirliyoruz	



void yazdir(){
	
	//int sayi=0;
	int static sayi=0;
	sayi++;
	cout<<"sayimiz: "<<sayi<<endl;
	
}


int main() {
	
	kisi k4;    // nesne oluşturulur oluşturulmaz sayimiz calısır sonra selamla
	k4.selamla();
	
	
	
//	kisi::selamla();  çalışmaz çünkü statik değil
	kisi::selamla();  // artık çalışır çünkü statik yaptım
	
	// static olmayan değişkene sadece nesne oluşturarak erişeblirsin yoksa erişemezsin
	kisi::sayi=100;
	cout<<kisi::sayi<<endl<<endl;
	
	kisi k1;
	kisi k2;
	kisi k3;
	
	
	
	cout<<endl<<endl;
	yazdir();  // burda ise sayiyi static yani değişmez olarak belirlediğimiz için dokunmuyor
	yazdir();  // ilk başta neyse o değerin üstüne ekliyor bu yüzden sayı 1 2 3 4 diye sürekli artıyor
	
//	yazdir();  fonksiyonu her çağırdığımız da iceri giriyor ve sayi=0 dediğimiz için sayiyi 0 lıyor
//	yazdir(); sonra 1 arttırıyor bu yüzden sayı hep bir kalıyor
	
	return 0;
}
