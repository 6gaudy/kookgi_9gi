#include "config.h"

//	10���� => 2, 8, 16 ����
void main() {

	int dec, bin[8] = { 0 };
	int arraySize = sizeof(bin) / sizeof(int);
	int n;		// ��ȯ�Ϸ��� ������ �Է��޴� ����

	printf("10������ ��ȯ�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &dec, &n);

	int i = 0;
	while (true) {
		int mok = dec / n;
		bin[i++] = dec % n;
		if (mok == 0) {
			break;
		}
		dec = mok;
	}

//	16������ ����ϴ� �迭�� �̿��� ����Ѵ�.
	char hex[] = "0123456789ABCDEF";

	for (int i = arraySize - 1; i >= 0; i--) {
//		bin �迭�� hex�� �ε����� ���ȴ�.
//		printf("%c", hex[bin[i]]);
		cout << hex[bin[i]];
	}
	printf("\n");

//	bin �迭�� ����� ���ڰ� 10 �̸��̸� �״�� ����ϰ� 10 �̻��̸� ���ڷ� �ٲ� ����Ѵ�.
	for (int i = arraySize - 1; i >= 0; i--) {
		if (bin[i] < 10) {
//			printf("%d", bin[i]);
			cout << bin[i];
		}
		else {
//			printf("%c", bin[i] + 55);
			cout << (char)(bin[i] + 55);
		}
	}

}