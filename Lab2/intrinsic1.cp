#include <iostream>
using namespace std;

int main(){

	enum {RED, YELLOW, AMBER=YELLOW, GREEN};
	cout<<RED<<endl;
	cout<<YELLOW<<endl;
	cout<<AMBER<<endl;
	cout<<GREEN<<endl;
}
