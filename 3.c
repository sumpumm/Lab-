#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,p,power;
	cout<<"Enter the number to check prime: ";
	cin>>p;
	cout<<"Enter any integer less than "<<p<<" for fermat's test : ";
	cin>>a;
	power=pow(a,p-1);
	if(power%p==1){
		cout<<p<<" is prime number.";
	}
	else{
		cout<<p<<" is not prime.";
	}
	return 0;
}
