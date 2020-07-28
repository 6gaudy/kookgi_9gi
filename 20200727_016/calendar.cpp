#include "config.h"
#include "calendar.h"

void main() {

//	cout << isLeapYear(2020) << endl;
//	cout << lastDay(2020, 2) << endl;
//	cout << totalDay(2020, 7, 27) << endl;
//	cout << weekDay(2020, 7, 27) << endl;

	int year, month;
	printf("�޷��� ����� ��, ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &year, &month);

	printf("============================\n");
	printf("         %4d��%2d��\n", year, month);
	printf("============================\n");
	printf(" ��  ��  ȭ  ��  ��  ��  �� \n");
	printf("============================\n");

//	����ϱ� ������ ���� ��¥�� ����Ѵ�.
	int week = weekDay(year, month, 1);
	int start = 0;
	if (month == 1) {
		start = 31 - week; // 1��
	}
	else {
		start = lastDay(year, month - 1) - week; // 2 ~ 12��
	}

//	1���� ��µ� ������ ��ġ�� ���߱� ���� 1���� ���ϸ�ŭ �ݺ��ϸ� �� ĭ�� ����Ѵ�. => �� �� ��¥�� ����Ѵ�.
	for (int i = 0; i < week; i++) {
//		printf("    ");
		printf(" %2d ", ++start);
	}

//	1�� ���� �޷��� ����� ���� ������ ��¥���� �ݺ��ϸ� ��¥�� ����Ѵ�.
	for (int i = 1; i <= lastDay(year, month); i++) {
		printf(" %2d ", i);
		if (weekDay(year, month, i) == 6 && i != lastDay(year, month)) {
			printf("\n");
		}
	}

//	������ ��¥�� ����ϰ� ���� ĭ�� ������ 1���� ���Ϻ��� ����ϱ��� �ݺ��ϸ� �������� ��¥�� ����Ѵ�.
	if (month == 12) {
		week = weekDay(year + 1, 1, 1); // 12��
	}
	else {
		week = weekDay(year, month + 1, 1); // 1 ~ 11��
	}
	
	if (weekDay(year, month, lastDay(year, month)) != 6) {
		start = 1;
		for (int i = week; i <= 6; i++) {
			printf(" %2d ", start++);
		}
	}

	printf("\n============================\n");

}