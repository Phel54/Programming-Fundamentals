#include <iostream>
using namespace std;

int main(){

        int first_value = 5;
        int &reference = first_value;
        cout<<first_value<<reference<<endl;
        ++first_value;
        cout<<first_value<<reference<<endl;
        ++reference;
        cout<<first_value<<reference<<endl;
}
