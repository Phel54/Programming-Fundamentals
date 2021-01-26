#include <iostream>
using namespace std;

int main(){
enum Colours {RED, YELLOW, AMBER=YELLOW, GREEN}
Colours A = YELLOW;
switch (A) {
case RED :{
cout<<"RED"<<endl; break;
}
case YELLOW:{
cout<<"YELLOW"<<endl; break;
}

}

}
