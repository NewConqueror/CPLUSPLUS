#include <iostream>
#include "kisi.h"

using namespace std;

void kisiSinifi::yazdir(){
	
	cout<<"ad    : "<<kisiSinifi::ad<<endl;
	cout<<"soyad : "<<kisiSinifi::soyad<<endl;
	cout<<"maas  : "<<kisiSinifi::maas<<endl;
	
}
  
void kisiSinifi::konus(){
	
	cout<<kisiSinifi::ad<<" konusuyor..\n";
}

void kisiSinifi::yuru(){
	
	cout<<kisiSinifi::ad<<" yuruyor..\n";
}

void kisiSinifi::dinlen(){
	
	cout<<kisiSinifi::ad<<" dinleniyor..\n";
}

