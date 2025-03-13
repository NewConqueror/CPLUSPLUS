#include <iostream>
using namespace std;


int main() {
	// pointer (göstericiler)
	
	int s1=15;
	int *ptr1= &s1;
	
	float s2=85.84;
	float *ptr2=&s2;
	
	char ch='A';
	char *ptr3=&ch;
	
	cout<<"int sayinin degeri      : "<<*ptr1<<endl;
	cout<<"float sayinin degeri    : "<<*ptr2<<endl;
	cout<<"char karakterinin degeri: "<<*ptr3<<endl;
	
	/*int sayi=20;
	int *ptr;
	
	ptr=&sayi;
	
	*ptr=30;
	
	cout<<"sayinin degeri  : "<<sayi<<endl;
	cout<<"sayinin adresi  : "<<&sayi<<endl;
	cout<<"pointerýn degeri: "<<*ptr<<endl;
	cout<<"pointerýn adresi: "<<ptr<<endl;*/
	
	return 0;
}
