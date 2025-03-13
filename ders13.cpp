#include <iostream>
#include <math.h>
using namespace std;


int main() {
	
	float a,b,c;
	float x1,x2,x;
	
	float delta;
	
	cout<<"ax2 + bx + c formatýnda sayilari giriniz: ";
	cin>>a>>b>>c;
	
	delta= b*b - 4*a*c ;
	
	if(delta <0){
		cout<<"kok yoktur";
	}
	else if(delta==0){
	 	x= -b/2*a;
	 	cout<<"bir tane kok var: "<<x;
	 }
	 else{
	 	x1= (-b +sqrt(delta) ) /2*a;
	 	x2= (-b -sqrt(delta) ) /2*a;
	 	cout<<"iki tane koku var"<<endl;
	 	cout<<"x1="<<x1<<endl ;
	 	cout<<"x2="<<x2;
	 }
	return 0;
}
