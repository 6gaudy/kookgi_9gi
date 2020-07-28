#include "config.h"
#include <iomanip>		// setw() �Լ��� ����� �� �ְ� ���ִ� ��� ����

void main() {

//	�ڷ��� �迭�̸�[��][��];			// 2���� �迭�� ���� �Ѵ�. => ��� �����Ⱑ ä������.
//	�ڷ��� �迭�̸�[��][��] = { 0 };	// 2���� �迭�� �����ϰ� ��� ��Ҹ� 0���� �ʱ�ȭ ��Ų��.

	int data[4][5] = { 
		{1, 2, 3, 4, 5}, 
		{6, 7}, 
		{8, 9, 10, 11},
		{12}
	};

	/*
//	¦����� Ȧ������ �ݺ����� �ٸ��� �����
	int count = 0;
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
//			¦������ ���ʿ��� ���������� ���ڸ� ä���.(�� 0 => 4)
			for (int j = 0; j < 5; j++) {
				data[i][j] = ++count;
			}
		}
		else {
//			Ȧ������ �����ʿ��� �������� ���ڸ� ä���.(�� 4 => 0)
			for (int j = 4; j >= 0 ; j--) {
				data[i][j] = ++count;
			}
		}
	}
	*/

	int count = 0;
	int start = 0, end = 4, sw = 1;

	for (int i = 0; i < 4; i++) {

		for (int j = start; j != end + sw; j += sw) {
			data[i][j] = ++count;
		}

		swap(start, end);
		sw *= -1;
	}

	for (int i = 0; i < 4; i++) {		// ��
		for (int j = 0; j < 5; j++) {	// ��
//			printf("%2d ", data[i][j]);
//			setw() : cout���� ����� �ڸ����� �����Ѵ�.
			cout << setw(2) << data[i][j] << " ";
		}
		printf("\n");
	}

}