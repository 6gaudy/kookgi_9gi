#include "config.h"

void main() {

//	�������� ������ �Է¹޴´�.
	int n;
	while (true) {
		printf("�������� ����� �迭�� ũ�⸦ 3�̻��� Ȧ���� �Է��ϼ��� : ");

//		Ű����� ������ �Է¹޾� n�̶�� ������ �޸𸮿� ������ �ּҿ� �־��.
		scanf_s("%d", &n);

		if (n >= 3 && n % 2 == 1) {
			break;
		}
		printf("3�̻��� Ȧ���� �Է��϶�ϱ��~~~~~ ��~~~~~\n");
	}

//	������ 1�� ������ġ�� ���ϰ� �迭�� ������ŭ �޸𸮸� �������� �Ҵ��Ѵ�.
	int i = 0, j = n / 2;
	int** data = new int* [n];
	for (int k = 0; k < n; k++) {
		data[k] = new int[n];
	}

	for (int k = 1; k <= n * n; k++) {
		data[i][j] = k;
		if (k % n == 0) {
			i++;
		}
		else {
//			i--;
//			if (i < 0) {
//				i = n - 1;
//			}
			i = --i < 0 ? n - 1 : i;
//			j++;
//			if (j == n) {
//				j = 0;
//			}
			j = ++j == n ? 0 : j;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}

}