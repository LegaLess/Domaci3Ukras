#ifndef _POGRESNABOJA_H_
#define _POGRESNABOJA_H_

#include <iostream>
#include <string>

using namespace std;

class PogresnaBoja {

public:

	friend ostream& operator<<(ostream& it, const PogresnaBoja& p) {
		return it << "Uneli ste nepravilnu vrednost za neku od komponenata boje!" << endl;
	}

};


#endif