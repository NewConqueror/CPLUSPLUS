#include <iostream>
using namespace std;

int main() {
	
	int a=0;
	int b=1;
	int adim;
	
	cout<<"adim sayisini giriniz: ";
	cin>>adim;
	
	if(adim==1)
	cout<<"	"<<a;
	
	else if(adim==2)
	cout<<a<<"	"<<b;
	
	else{
		cout<<a<<"	"<<b;
		
		for(int i=3;i<=adim;i++){
			int c=a+b;
			cout<<"	"<<c;
			a=b;
			b=c;
		}
		
	}
	
	return 0;
}
