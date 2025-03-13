#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	int tahmin,tutulan,hak=5;
	srand(time(NULL)); 
	string devammi;
	
	while(true){
		
		tutulan=rand() %10 +1;
		
		while(true){
			
			if(hak<=0){
				cout<<"maalesef bilemediniz sayimiz: "<<tutulan<<endl;
				break;
			}	
			
			cout<<"tahmininiz: "; cin>>tahmin;
			
			if(tahmin==tutulan){
				cout<<"tebrikler bildiniz sayimiz: "<<tahmin<<endl;
				break;
			}
			else if(tahmin>tutulan){
				cout<<"sayiyi kucultunuz"<<endl;
			}
			else{
				cout<<"sayiyi buyultunuz"<<endl;
			}
			hak--;
			
			
		}
		
		cout<<"devam etmek ister misiniz: [E/H] : "; cin>>devammi;
		
		if(devammi=="E" || devammi=="e"){
			hak=5;
			system("cls");
		} 
		else{
			cout<<"\ncikis yapiliyor.."<<endl;
			break;
		}
	}
	
	
	
	return 0;
}
