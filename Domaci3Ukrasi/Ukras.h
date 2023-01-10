#ifndef _UKRAS_H_
#define _UKRAS_H_

#include <iostream>
#include "Boja.h"

using namespace std;

class Ukras {

public:

	Ukras(Boja& b, int g) : boja(b), masa(g) {}

	Boja& get_boja() { return boja; }

	int get_masa() { return masa; }

	friend ostream& operator<<(ostream& it, const Ukras& u) {
		return u.pisi(it);
	}

protected:

	virtual ostream& pisi(ostream& it) const = 0;

private:

	Boja boja;
	int masa = 0;

};


#endif
