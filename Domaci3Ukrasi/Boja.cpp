#include <iostream>
#include <string>
#include "Boja.h"

using namespace std;

Boja::Boja(int r, int g, int b)
{
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) throw PogresnaBoja();
	else {
		red = r;
		green = g;
		blue = b;
	}
}

bool operator==(const Boja& b1, const Boja& b2)
{
	return b1.red == b2.red && b1.green == b2.green && b1.blue == b2.blue;
}

Boja operator+(const Boja& b1, const Boja& b2)
{
	int red = (b1.red + b2.red) / 2;
	int green = (b1.green + b2.green) / 2;
	int blue = (b1.blue + b2.blue) / 2;

	return Boja(red, green, blue);
}
