#include "config.h"
#include "func.h"

void main() {

	printf("1 ~ 100�� �հ� : %d\n", total());
	printf("1 ~ 100�� �հ� : %d\n", total());

	int n;
	cout << "n : ";
	cin >> n;
	cout << "1 ~ " << n << "�� �հ� : " << total(n) << endl;
	printf("���μ� n : %d\n", n);

	int x, y;
	cout << "x, y : ";
	cin >> x >> y;
	cout << x << " ~ " << y << "�� �հ� : " << total(x, y) << endl;

}

