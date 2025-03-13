#include <iostream>
using namespace std;

struct kisi{
	string ad;
	int yas;
};


int main() {
	
	kisi nes1;
	kisi *ptr=&nes1;
	
	ptr->ad="fatih";
	ptr->yas=18;
		
	nes1.ad="saliha"; // ptr->ad="saliha"; ikisi aynı şey biri direkt diğeri pointer aracılığı ile
	ptr->yas=12;
	
	cout<<ptr->ad<<endl;
	cout<<ptr->yas<<endl;
	
	
	
	return 0;
}
