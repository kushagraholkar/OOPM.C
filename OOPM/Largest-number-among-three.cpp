#include<iostream>
using namespace std;


int main(){
    int a , b , c;
	cout<<"Enter first digit: ";
	cin>>a;
	cout<<"Enter Second digit: ";
	cin>>b;
	cout<<"Enter Third digit: ";
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<"First digit is larger";
		
		}
		else{
			cout<<"Third digit is larger";
		}
	}
	else{
		if(b>c){
			cout<<"Second digit is larger";
		}
		else{
			cout<<"Third digit is larger";
		}
	}
	}
	
