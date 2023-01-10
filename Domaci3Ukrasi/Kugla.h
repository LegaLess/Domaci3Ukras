#ifndef _KUGLA_H_
#define _KUGLA_H_

#include <iostream>
#include <string>
#include "Ukras.h"

using namespace std;

enum Velicine {MALA, SREDNJA, VELIKA, NAJVECA};

class Kugla : public Ukras {

public:

	Kugla(Boja& b, int g, Velicine v) : Ukras(b, g), velicina(v) {}

	virtual ostream& pisi(ostream& it) const override {

		switch (velicina)
		{
		case MALA:
			it << "." << endl; break;
		case SREDNJA:
			it << "o" << endl; break;
		case VELIKA:
			it << "O" << endl; break;
		case NAJVECA:
			it << "()" << endl; break;
		default:
			break;
		}

		return it;
	}


private:

	Velicine velicina;

};


#endif
