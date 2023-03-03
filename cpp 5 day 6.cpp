#include<iostream>
using namespace std;
int main(){
	//******Multiplication of 2 numbers using do while loop******
	int m, i=0;
	cout<<"enter a number"<<endl;
	cin>>m;
	do{
		cout<<i<<"x"<<m<<"="<<i*m<<endl;
		i++;
	}while(i<=10);
	return 0;
}
