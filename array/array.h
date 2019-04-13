/*
 Name:		array.h
 Created:	2019-04-13 10:00:45
 Author:	qinbi
 Editor:	http://www.visualmicro.com
*/

#ifndef _array_h
#define _array_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
template<class T,const size_t N>
class Array {
private:
	T arr[N];
public:
	Array() {
		T* initValue = new T();
		for (size_t i = 0; i < N; i++) {
			arr[i] = (*initValue);
		}
		delete initValue;
	}
	const size_t length() {
		return N;
	}
	T& operator[](size_t index) {
		return arr[index];
	}
	T* begin() {
		return arr;
	}
	T* end() {
		return (arr + N);
	}
};

#endif

