#include "config.h"

void main() {

	/*
	if (���ǽ�) {
		���ǽ��� ���� ��� ������ ����;
		...;
	} else {
		���ǽ��� ������ ��� ������ ����;
		...;
	}
	*/

	int age;

	/*
//	printf("���̸� �Է��ϼ��� : ");
//	scanf_s("%d", &age);
	cout << "���̸� �Է��ϼ��� : ";
	cin >> age;

	if (age >= 19) {
		printf("�����Դϴ�. �������\n");
	}
	else {
		printf("�̼������Դϴ�. �ֵ��� ����~~~~~\n");
	}
	*/
	/*
//	c���� ���α׷����� ����� ������ ���α׷� ��ܿ��� �̸� �������ϰ� ����ؾ� ������ c++ ���ʹ� ������ �ʿ���
//	���� ���� ����ϸ� �ȴ�.
	int cpp, java, jsp;

//	printf("3���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d %d", &cpp, &java, &jsp);
	cout << "3���� ������ �Է��ϼ��� : ";
	cin >> cpp >> java >> jsp;

	int total = cpp + java + jsp;
	double average = (double) total / 3;

//	printf("���� : %d, ��� : %.2f\n", total, average);
	cout << "���� : " << total << ", ��� : " << average << endl;
	*/
	/*
	if (average >= 90) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'A');
	}
	if (average < 90 && average >= 80) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'B');
	}
	if (average < 80 && average >= 70) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'C');
	}
	if (average < 70 && average >= 60) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'D');
	}
	if (average < 60) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'F');
	}
	*/

	/*
	if (average >= 90) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'A');
	} else if (average < 90 && average >= 80) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'B');
	} else if (average < 80 && average >= 70) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'C');
	} else if (average < 70 && average >= 60) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'D');
	} else if (average < 60) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'F');
	}
	*/
	/*
	if (average >= 90) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'A');
	} else if (average >= 80) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'B');
	} else if (average >= 70) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'C');
	} else if (average >= 60) {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'D');
	} else {
		printf("��� ���� %f�� %c ��� �Դϴ�.\n", average, 'F');
	}
	*/

	int year;

//	printf("����, ����� �Ǵ��� �⵵�� �Է��ϼ��� : ");
//	scanf_s("%d", &year);
	cout << "����, ����� �Ǵ��� �⵵�� �Է��ϼ��� : ";
	cin >> year;

//	����, ��� �Ǻ���
//	�⵵�� 4�� ���� �������� 100���� ������������ �ʰų� 400���� ���� �������� ����, �׷�ġ ������ ���

//	���α׷����� ������ ���Ǵ� ���� ������ �����ؼ� ����ϸ� ���ϴ�.
//	������ ����ϴ� ������ ���(����) ���� ������ �Լ��� �̸��� "is"�� �����ϴ� ���� �����̴�.
//	int isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	bool isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	if (isLeapYear) {
		printf("%d ���� �����Դϴ�.\n", year);
		cout << year << " ���� �����Դϴ�." << endl;
	}
	else {
		printf("%d ���� ����Դϴ�.\n", year);
		cout << year << " ���� ����Դϴ�." << endl;
	}

//	���� ������ => ?: => ������ if, ������ ���̳� ������ �� ������ ������ �� 1������ ��� ����ϸ� ���ϴ�.
//	���� => ���ǽ� ? ���ǽ��� ���� �� ������ ���� : ���ǽ��� ������ �� ������ ����
//	���̽� ���� => ���ǽ��� ���� �� ������ ���� if ���ǽ� else ���ǽ��� ������ �� ������ ����

	printf("%d ���� %s���Դϴ�.\n", year, isLeapYear ? "��" : "��");
	cout << year << " ���� " << (isLeapYear ? "��" : "��") << "���Դϴ�." << endl;

}