#ifndef _BOJA_H_
#define _BOJA_H_

#include <iostream>
#include "PogresnaBoja.h"

class Boja {

public:

	Boja(int r, int g, int b);

	friend bool operator==(const Boja&, const Boja&);

	friend Boja operator+(const Boja&, const Boja&);

private:

	int red = 0, green = 0, blue = 0;

};

#endif
