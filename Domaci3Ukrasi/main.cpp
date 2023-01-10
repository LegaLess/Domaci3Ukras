#include <iostream>
#include <string>
#include "Lista.h"
#include "Boja.h"
#include "Kugla.h"

using namespace std;

int main() {

	Lista<int> lista;

	try {
		Boja b1(213, 31, 214);
		Boja b2(7, 78, 14);
		
		Kugla kugla(b1, 120, NAJVECA);

		cout << kugla.get_masa() << endl;

	}
	catch(const PogresnaBoja& p){
		cout << p;
	}

	lista <<= 2;
	lista <<= 3;
	lista <<= 4;
	lista >>= 5;
	lista >>= 6;
	lista >>= 7;

	for (lista.reset_tekuci(); lista.check_tek(); lista.sled()) {

		cout << lista.get_tek() << " ";

	}

	return 0;
}
