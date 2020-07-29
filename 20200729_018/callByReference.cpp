#include "config.h"

//	call by value => ���� ���� ȣ�� => �����͸� ������ �Ϲ� ������ �޴´�.
//	ȣ��Ǵ� �Լ��� ���μ��� ���μ��� ���� �����ؼ� �Ѱ��ش�. => ���μ��� ���μ��� ������ �޸� ������ ����Ѵ�. => ���μ��� ����� �����Ͱ�
//	����Ǵ��� ���μ��� ����� �����ʹ� ������� �ʴ´�. => ���ۿ�(side effect) ������ �߻����� �ʴ´�.
//	�Լ��� ȣ���� �� �������� �����͸� �Ѱ��� �� ������ ����� return�� ���ؼ� 1���� ���� �� �ִ�.

//	call by reference(pointer, address) => �ּ�(����)�� ���� ȣ�� => �����Ͱ� ����� �ּҸ� ������ ������ ������ �޴´�.
//	ȣ��Ǵ� �Լ��� ���μ��� ���μ��� �޸𸮿� ������ �ּҸ� �Ѱ��ش�. => ���μ��� ���μ��� ���� �ּҸ� �����Ѵ�. => ���� �޸� ������
//	�����ؼ� ����Ѵ�.
//	���μ��� ���μ��� ���� �޸� ������ ����ϹǷ� ���μ��� ����� �����Ͱ� ����Ǵ� ���� ���μ��� ����� �����Ͱ� ���ÿ� ����ȴ�.
//	=> ���ۿ�(side effect) ������ �߻��� �� �ֱ� ������ �����ؼ� ����ؾ� �Ѵ�.
//	���μ��� ����� �����Ͱ� ����� �� ���μ��� ����� �����͵� ���� ����ǹǷ� �������� ����� �޴� ȿ���� ����.

//	pointer�� �̿��� call by reference
void change(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void change(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}

void change(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void change(bool* a, bool* b) {
	bool temp = *a;
	*a = *b;
	*b = temp;
}

//	reference ������ �̿��� call by reference
/*
void change(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void change(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

void change(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

void change(bool& a, bool& b) {
	bool temp = a;
	a = b;
	b = temp;
}
*/

//	template�� �Լ��� ȣ��� �� ���μ��� ������ Ÿ���� �Ѱܹ޴´�. => �ڹٿ����� ���׸��̶� �θ���.
//	�Լ��� ����� ���ø��� 1���̰� �Լ��� ȣ���� �� �μ��� 2�� �̻��� ��� ù ��° �μ��� ������ Ÿ���� ���ø����� ���޵ȴ�.
template <class T>
void change(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void main() {

	int a = 3, b = 4;
	printf("a = %d, b = %d\n", a, b);			// a = 3, b = 4
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);			// a = 4, b = 3
	change(&a, &b);
	printf("a = %d, b = %d\n", a, b);			// a = 3, b = 4
	change(a, b);
	printf("a = %d, b = %d\n", a, b);			// a = 4, b = 3
	printf("===========================\n");

	double c = 9.1, d = 3.4;
	printf("c = %.1f, b = %.1f\n", c, d);		// c = 9.1, b = 3.4
	change(&c, &d);
	printf("c = %.1f, b = %.1f\n", c, d);		// c = 3.4, b = 9.1
	change(c, d);
	printf("c = %.1f, b = %.1f\n", c, d);		// c = 9.1, b = 3.4
	printf("===========================\n");

	char ch1 = 'A', ch2 = 'a';
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);	// ch1 = A, ch2 = a
	change(&ch1, &ch2);
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);	// ch1 = a, ch2 = A
	change(ch1, ch2);
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);	// ch1 = A, ch2 = a
	printf("===========================\n");

	bool e = true, f = false;
	printf("e = %d, f = %d\n", e, f);			// e = 1, f = 0
	change(&e, &f);
	printf("e = %d, f = %d\n", e, f);			// e = 0, f = 1
	change(e, f);
	printf("e = %d, f = %d\n", e, f);			// e = 1, f = 0

}