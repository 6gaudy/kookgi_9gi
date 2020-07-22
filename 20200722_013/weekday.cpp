#include "config.h"

void main() {

	int year, month, day;

	//	printf("������ ����� ��, ��, ���� �Է��ϼ��� : ");
	//	scanf_s("%d %d %d", &year, &month, &day);
	//	printf("%d %d %d", year, month, day);

	cout << "������ ����� ��, ��, ���� �Է��ϼ��� : ";
	cin >> year >> month >> day;
	cout << year << " " << month << " " << day << endl;

	//	1�� 1�� 1�� ���� ���⵵ 12�� 31�� ���� ���� ��¥�� ����Ѵ�.
	int sum = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

	//	���⵵ 12�� 31�� ���� ���� ��¥�� ���� ������ ������ ��¥�� ���Ѵ�.
	int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	m[1] = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
	for (int i = 1; i < month; i++) {
		sum += m[i - 1];
		/*
		switch (i) {
			case 2: // 2��
				sum += year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
				break;
			case 4: case 6: case 9: case 11: // ª����
				sum += 30;
				break;
//			case 1: case 3: case 5: case 7: case 8: case 10: case 12: // ��� => ��Ÿ ��� case
			default:
				sum += 31;
				break;
		}
		*/
	}

	//	���� ���� ��¥�� �հ迡 ���� ���Ѵ�.
	sum += day;
	cout << sum % 7 << endl;

	//	������ ����Ѵ�.
		/*
		switch (sum % 7) {
			case 0: cout << "�Ͽ���" << endl; break;
			case 1: cout << "������" << endl; break;
			case 2: cout << "ȭ����" << endl; break;
			case 3: cout << "������" << endl; break;
			case 4: cout << "�����" << endl; break;
			case 5: cout << "�ݿ���" << endl; break;
			case 6: cout << "�����" << endl; break;
		}
		*/

//	���ڿ��� ����ϴ� �迭�� char(����) �迭�� �̸� �տ� "*"�� ���̸� �ȴ�.
//	2018�� ���� ����� ��Ʃ��� 2017�� ������Ʈ �Ǹ鼭 ���ڿ� ����� ����ϴ� �迭 ����� char �տ� �ݵ��
//	const�� �ٿ��� ������ �߻����� �ʰ� ���������� ó���ȴ�.
	const char* week[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	printf("%s����\n", week[sum % 7]);
	cout << week[sum % 7] << "����" << endl;

}