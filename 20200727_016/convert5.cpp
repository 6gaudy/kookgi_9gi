#include "config.h"

void main() {

	char s[9];			// 2������ �Է¹��� ���� �迭
	int dec = 0;

//	26 => 00011010, -26 => 11100110
	printf("2������ �Է��ϼ��� : ");
	scanf_s("%s", s, sizeof(s));
//	printf("%s\n", s);

	for (int p = 1; p < 8; p++) {
//		printf("%d\n", p);
		int k = pow(2, 7 - p);
		dec += k * (s[p] - 48);
	}

	if (s[0] != '0') {	// ��ȣ bit�� 1�� ��� �����̹Ƿ� ���� ó���� �Ѵ�.
		dec = 128 - dec;
		dec *= -1;
	}

	printf("10���� : %d\n", dec);

}