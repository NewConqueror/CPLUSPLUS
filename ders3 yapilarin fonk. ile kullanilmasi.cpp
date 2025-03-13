#include <iostream>
using namespace std;

struct kisi{
	string ad;
	int yas;
};

void yazdirkopya(kisi nesne){
	
	cout<<"yapinin kopyalanmis hali"<<endl;
	//nesne.ad="cemre";
	cout<<"ad : "<<nesne.ad<<endl;
	cout<<"yas: "<<nesne.yas<<endl;
}

void yazdirreferans(kisi *ptr){
	
	cout<<"yapinin referansli hali"<<endl;
	ptr->ad="cemre";
	cout<<"ad : "<<ptr->ad<<endl;
	cout<<"yas: "<<ptr->yas<<endl;
}


int main() {
	
	kisi nesne1 = {"fatih",18};
	
	yazdirreferans(&nesne1);
	yazdirkopya(nesne1);
	
	
	return 0;
}
