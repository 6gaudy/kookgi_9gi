#include "config.h"

void main() {

//	key���� ������ ����� �� �ִ� ����(bool, char, short, int, long long int) �Ǵ� ���� ����� ������ ���ĸ� ��
//	�� �ִ�. => ���ڿ�, �Ǽ��� ����� �� ����. => java 1.7 ���ʹ� ���ڿ��� ����� �� �ִ�.
//	switch (key) {
//		case value:		// case�� �����ڸ� ����� �� ����. => ������ "=="�� ó���ȴ�.
//			key�� value�� ���� �� ������ ����;
//			...;
//			[break;]	// ���� ����, if�� ������ ����� {} ����� Ż���Ѵ�. <=> continue => �����
//		case ...
//		[default:
//			key�� ��ġ�ϴ� value�� ���� �� ������ ����;
//			...;
//			break;]
//	}

	int cpp, java, jsp;

	cout << "3���� ������ �Է��ϼ��� : ";
	cin >> cpp >> java >> jsp;

	int total = cpp + java + jsp;
	double average = (double)total / 3;

	switch ((int)average / 10) {
		case 10:
			cout << "�����߾��!!!" << endl;
//			break;
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
//		case 5: case 4: case 3: case 2: case 1: case 0:		// ��Ÿ ��� ���̽�, �׷�ġ ���� ���̽�
		default:
			cout << "F" << endl;
			break;
	}

}