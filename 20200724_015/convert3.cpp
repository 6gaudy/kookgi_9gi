#include "config.h"

void main() {

	int dec, n;
	printf("10������ ��ȯ�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &dec, &n);

//	10������ �Է¹޾� n�������� ��ȯ�� �� �ʿ��� �迭�� ũ�⸦ ����ϰ� �� ũ�⸸ŭ �迭�� �������� �����Ѵ�.
	int x = 0;
	while (true) {
		if (dec < pow(n, x)) {
			break;
		}
		x++;
	}
//	printf("�迭�� ũ�� : %d\n", x);

//	�迭�� ũ�⸸ŭ �迭�� �������� �����Ѵ�.
//	int* bin = (int*)malloc(sizeof(int) * x);
	int* bin = new int[x];
	memset(bin, 0, _msize(bin));

	/*
	int i = 0;
	while (true) {
		int mok = dec / n;
		bin[i++] = dec % n;
		if (mok == 0) {
			break;
		}
		dec = mok;
	}
	*/

	for (int i = 0; i < x; i++) {
		int mok = dec / n;
		bin[i] = dec % n;
		dec = mok;
	}

	for (int i = x - 1; i >= 0; i--) {
		if (bin[i] < 10) {
			cout << bin[i];
		}
		else {
			cout << (char)(bin[i] + 55);
		}
	}

}