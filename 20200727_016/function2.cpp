#include "config.h"

//	main() �Լ����� ����� �Լ��� main() �Լ� �տ��� �����ϸ� �� ��������� main() �Լ� �ڿ��� �����ϸ� ������ �߻��ȴ�.
//	������ �߻����� �ʰ� �Ϸ��� �����Ϸ����� �Լ����� �˷��ִ� �Լ��� ������ main() �Լ� �տ��� ���� ������ �ؾ��Ѵ�.

//	�Լ��� ������ �Լ��� �Ӹ� �κ��� ������ �ǰ� �ڷ����� �ݵ�� ����� ������ �μ� �̸��� ���� �ʾƵ� �������.
int total();			// int total() �Լ��� ����
int total(int);			// int total(int n) �Լ��� ����
int total(int, int);	// int total(int x, int y) �Լ��� ����

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

int total() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	return sum;
}

int total(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int total(int x, int y) {
	int sum = 0;
	for (int i = x; i <= y; i++) {
		sum += i;
	}
	return sum;
}
