#include "config.h"

void main() {

	int s;				// 2������ �Է¹��� ����
	int dec = 0;

	printf("2������ �Է��ϼ��� : ");
	scanf_s("%d", &s);

	for (int p = 7; p >= 1; p--) {
		int k = pow(2, 7 - p);
		dec += k * (s % 10);
		s /= 10;
	}

	printf("��ȣ : %d\n", s);
	if (s != 0) {
		dec = 128 - dec;
		dec *= -1;
	}

	printf("10���� : %d\n", dec);

}