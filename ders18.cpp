#include <iostream>
using namespace std;

struct ogrenci{
	int numara;
	string isim;
	string soyisim;
	string adres;
	
	
};

int main() {
	
	ogrenci o1,o2;
	
	o1.numara=54;
	o1.isim="fatih";
	o1.soyisim="yeni";
	o1.adres="trabzon";
	
	o2.numara=85;
	o2.isim="saliha";
	o2.soyisim="yeni";
	o2.adres="zb";
	
	cout<<"birinci kisinin bilgileri"<<endl;
	cout<<o1.numara<<"	"<<o1.isim<<"	"<<o1.soyisim<<"	"<<o1.adres<<endl;
	cout<<"ikinci kisinin bilgileri"<<endl;
	cout<<o2.numara<<"	"<<o2.isim<<"	"<<o2.soyisim<<"	"<<o2.adres<<endl;
	return 0;
}
