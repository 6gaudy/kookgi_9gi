#include "config.h"

/*
template <class T>
T myMin(T a, T b) {
	T min = a;
	if (a > b) {
		min = b;
	}
	return min;
}
*/

template <class T>
T myMin(T a, T b) {
	return a > b ? b : a;
}

void main() {

	int a = 3, b = 4;
	printf("������ : %d\n", myMin(a, b));
	double c = 9.1, d = 3.4;
	printf("������ : %f\n", myMin(c, d));
	char ch1 = 'Z', ch2 = 'A';
	printf("������ : %c\n", myMin(ch1, ch2));

}