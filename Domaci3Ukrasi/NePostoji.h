#ifndef _NEPOSTOJI_H_
#define _NEPOSTOJI_H_

#include <iostream>
#include <string>

using namespace std;

class NePostoji {

public:

	friend ostream& operator<<(ostream& it, const NePostoji& n) {
		return it << "Ne postoji element na koji pokazuje tekuci!" << endl;
	}

};



#endif