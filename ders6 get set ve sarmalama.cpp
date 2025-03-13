#include <iostream>
using namespace std;

class kisi{
	private:
	string ad;
	int yas;
	double boy;
	
	public: 
	
	void adgiris(string ad){
		this->ad=ad;
	}
	
	void yasgiris(int yas){
		
		if(yas>=0 && yas<=100){
			this->yas=yas;
		}
		else{
			cout<<"hatali yas girisi"<<endl;
			this->yas=-1;
		}
		
	}
	
	void boygiris(double boy){
		
		if(boy>0 && boy<=3){
			this->boy=boy;
		}
		else{
			cout<<"hatali boy girisi"<<endl;
			this->boy=-1;
		}
	}
	
	string adcikis(){
		return ad;
	}
	
	int yascikis(){
		return yas;
	}
	
	double boycikis(){
		return boy;
	}
};

int main() {
	
	kisi nesne1;
	
	nesne1.adgiris("fatih");
	nesne1.yasgiris(18);
	nesne1.boygiris(1.87);
	
	cout<<"ad: "<<nesne1.adcikis()<<endl<<"yas: "<<nesne1.yascikis()<<endl<<"boy: "<<nesne1.boycikis();
	
	return 0;
}
