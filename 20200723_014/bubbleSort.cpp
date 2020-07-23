#include "config.h"

void main() {

	int d[] = { 21, 1, 19, 10, 5, 39, 4, 74, 64, 99 };
//	left  => ���ʿ��� ���������� ���� �� �����ϱ� ���� �񱳸� �����ϴ� ��ġ
//	right => �����ʿ��� �������� ���� �� �����ϱ� ���� �񱳸� �����ϴ� ��ġ
//	shift => ���������� �� ��ȯ�� ����� ��ġ => �߿�....
	int left = 0, right = 9, shift, i;

	while (left < right) {

//		���ʿ��� ���������� ���ϸ� ���Ľ�Ų��.
		i = left;
		while (i < right) {
			if (d[i] > d[i + 1]) {
				swap(d[i], d[i + 1]);
				shift = i;
			}
			i++;
		}
		right = shift;

//		�����ʿ��� �������� ���ϸ� �����Ѵ�.
		i = right;
		while (i > left) {
			if (d[i - 1] > d[i]) {
				swap(d[i - 1], d[i]);
				shift = i;
			}
			i--;
		}
		left = shift;

	}

	printf("���� ��� : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");

}