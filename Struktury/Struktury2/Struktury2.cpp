#include <iostream>
#include <string>
using namespace std;

union Ocena {
	short ocena_c;
	float ocena_r;
};

int main(){
	Ocena ocena = {ocena.ocena_c = 4};
	/*cout << sizeof(ocena) << endl;
	cout << sizeof(ocena.ocena_c) << endl;*/
	cout << ocena.ocena_c << endl;

	ocena.ocena_r = 3.5;
	cout << ocena.ocena_r << endl;
	cout << ocena.ocena_c << endl;
}