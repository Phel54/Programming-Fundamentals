#include <iostream>
using namespace std;
int main(){
	int first_value = 5;
	
	int *pttre;
	pttre = &first_value;
	*pttre = *pttre + 1;
	cout<<*pttre<<endl;
	int &reference = first_value;
	++reference;
	cout<<reference<<endl;
cout<<0xf3f2<<endl;
cout<<0437<<endl;
cout<<'a'<<endl;


}
