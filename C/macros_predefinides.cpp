#include <iostream>
using namespace std;
/* proves amb macros predefinides de C++ */

int main() {
	#define HOLA "hola"          //definir macros
	cout << HOLA << " món\n";
	cout << __LINE__ << endl;    //línia actual (13)
	cout << __FILE__ << endl;    //arxiu actual (proves.cpp)
	cout << __DATE__ << endl;    //dia de compilació
	cout << __TIME__ << endl;    //hora de compilació
	cout << __STDC__ << endl;    //is standard c++ code (1 o 0)
	cout << __cplusplus << endl; //norma standard c++ conforming
	return 0;
}
