#include "config.h"

//	10���� => 2����
void main() {

	int dec;				// 10������ �Է¹��� ����
	int bin[16] = { 0 };	// ��ȯ�� ������ ���� ����� �迭

//	�迭�� ũ�⸦ ����Ѵ�. => �� ���� �����͸� ������ �� �ִ°� ����Ѵ�.
	int arraySize = sizeof(bin) / sizeof(int);
	printf("�迭�� ũ�� : %d\n", arraySize);

	printf("10���� : ");
	scanf_s("%d", &dec);

//	10������ ��ȯ�Ϸ��� ������ ���� ���� ���� 0�� �� �� ���� �ݺ��Ѵ�.
	int i = 0;				// dec �迭�� �ε����� ����� ������ �����ϰ� �ʱ�ȭ�Ѵ�.
	while (true) {

		int mok = dec / 2;	// ��

//		int nmg = dec % 2;	// ������
//		bin[i] = nmg;		// �������� �迭�� �����Ѵ�.
//		i++;				// �ε����� ������Ų��.
//		���� �ּ����� ó���� 3���� �Ʒ��� ���� 1�ٷ� �ٿ��� ����� �� �ִ�.
		bin[i++] = dec % 2;

//		dec�� ��ȯ�Ϸ��� ������ ���� ���� ���� 0�� �Ǹ� �� �̻� �ݺ��� �ʿ䰡 �����Ƿ� ���� ������ Ż���Ѵ�.
		if (mok == 0) {
			break;
		}

//		���� 0�� �ƴ� ��� ���� ������ ���ؼ� ���� dec�� �־��ش�.
		dec = mok;

	}
	printf("���� ��Ǫ�� ����� �� i�� ����� �� : %d\n", i);
	int start = i;

//	26 => 00011010
	for (int i = arraySize - 1; i >= 0; i--) {
		printf("%d", bin[i]);
	}
	printf("\n");

//	26 => 0001 1010
	for (int i = arraySize - 1; i >= 0; i--) {
		printf("%d", bin[i]);
		if (i % 4 == 0) {
			printf(" ");
		}
	}
	printf("\n");

//	26 => 11010 #1
	for (int i = start - 1; i >= 0; i--) {
		printf("%d", bin[i]);
	}
	printf("\n");

//	26 => 11010 #2
	bool flag = false;
	for (int i = arraySize - 1; i >= 0; i--) {
		if (flag || bin[i]) {
			printf("%d", bin[i]);
			flag = true;
		}
	}
	printf("\n");

}