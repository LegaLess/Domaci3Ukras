#ifndef _LISTA_H_
#define _LISTA_H_

#include <iostream>
#include "NePostoji.h"

using namespace std;


template<typename T> class Lista {

public:

	Lista() {}

	Lista(const Lista&) = delete;
	Lista& operator=(Lista&) = delete;

	Lista& operator<<=(T);
	Lista& operator>>=(T);
	
	void reset_tekuci() { tek = prvi; }
	void sled() { tek = tek->next; }
	bool check_tek() { return tek; }
	T& get_tek();

private:

	struct Elem {
		T val;
		Elem* next = nullptr;
		Elem(T& v) : val(v), next(nullptr) {}
	};

	Elem* prvi = nullptr;

	Elem* tek = nullptr;

	Elem* posl = nullptr;

};


#endif

template<typename T>
inline Lista<T>& Lista<T>::operator<<=(T obj)
{
	Elem* novi = new Elem(obj);

	if (!prvi) {
		prvi = novi;
		posl = novi;
	}
	else {
		posl->next = novi;
		posl = novi;
	}

	return *this;
}

template<typename T>
inline Lista<T>& Lista<T>::operator>>=(T obj)
{
	Elem* novi = new Elem(obj);

	if (!prvi) {
		prvi = novi;
		posl = novi;
	}
	else {
		novi->next = prvi;
		prvi = novi;
	}

	return *this;

}

template<typename T>
inline T& Lista<T>::get_tek()
{
	if (!tek) throw NePostoji();

	return tek->val;
}
