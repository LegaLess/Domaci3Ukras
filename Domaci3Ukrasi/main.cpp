#include <iostream>
#include <string>
#include "Lista.h"
#include "Boja.h"
#include "Kugla.h"

using namespace std;

int main() {

	Lista<Kugla> lista;

	Boja b1(10, 210, 78);
	Boja b2(10, 210, 78);
	Boja b3(98, 123, 90);
	Boja b4(243, 87, 5);

	Kugla k1(b1, 15, MALA);
	Kugla k2(b1, 20, SREDNJA);
	Kugla k3(b1, 30, VELIKA);
	Kugla k4(b1, 50, NAJVECA);

	lista <<= k1;
	lista <<= k2;
	lista >>= k3;
	lista >>= k4;

	for (lista.reset_tekuci(); lista.check_tek(); lista.sled()) {
		cout << lista.get_tek();
	}

	return 0;
}
