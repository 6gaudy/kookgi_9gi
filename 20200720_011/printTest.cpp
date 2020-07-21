//	�ý����� �����ϴ� ��� ������ "<"�� ">" ���̿� �Է��ϰ� ����� ���� ��� ������ ū����ǥ ���̿� �Է��Ѵ�.
//	����� ���� ��� ���ϰ� ����� ���� ��� ������ ����ϴ� �ҽ� ���α׷��� ���� ��翡 ���� ��� ū����ǥ �ȿ�
//	��� ���� �̸��� �����ָ� ������ �ٸ� ������ ���� ��� ����� ���� ��� ������ ��ġ�� ��θ� ���� ����� �Ѵ�.

#include "config.h"

//	��� ���� ����� ���� ��� ���� ����� ��� ��� ���� ����� �ִ�.
//	���� ��δ� ������ ��ġ�� ��ũ ����̺��� �ֻ���(root) ����(���丮) ���� ������ ��ġ�� �������� ��θ�
//	���Ѵ�.
//	#include "D:\\kookgi_9gi\\C\\workspace\\0720\\0720\\include\\config.h"	// ���� ǥ��
//	#include "D:\kookgi_9gi\C\workspace\0720\0720\include\config.h"			// ����� ��Ʃ����� 1���� �ᵵ �ȴ�.
//	#include "D:/kookgi_9gi/C/workspace/0720/0720/include/config.h"			// �������� ��� �����ø� ����ص� �ȴ�.

//	��� ��δ� ���� ȭ�鿡 ���̴� �ҽ� ������ ��ġ�� ���� ���� ��� ������ ��ġ�� �������� ��θ� ���Ѵ�.
//	"."  => ���� ȭ�鿡 ���̴� ������ ��ġ�� ����
//	".." => ���� ȭ�鿡 ���̴� ������ ��ġ�� ������ �� �ܰ� ���� ����
//	#include "./include/config.h"

void main() {

//	�����ִ� ��� => printf => ���� ���ڸ� ������ ������ ���ڴ� �Է��� �״�� ��µȴ�.
//	printf("��� ����", ����� ������)
//	��� ���� ���� : d(����), f(�Ǽ�), s(���ڿ�), c(����)
//	��� ������ ���� : %[-][0][n][.m]���Ĺ���
//	- : ��ü �ڸ����� ������ ��� �������� ���� ����Ѵ�.
//	0 : ��ü �ڸ����� ������ ��� ������ ���� �ڸ��� '0'�� ä�� ����Ѵ�.
//	n : ��ü �ڸ���
//	.m : �Ҽ��� �Ʒ� �ڸ���, �Ҽ����� ��ü �ڸ����� ���Եǰ� �߸��� �ڸ����� �ݿø����� ȭ�鿡 �����ش�. => ���� �����ʹ�
//	������� �ʴ´�.

	printf("%d\n", 100);
	printf("%d\n", 1);
	printf("%d\n", 10000);
	printf("==================================\n");

	printf("%5d\n", 100);
	printf("%5d\n", 1);
	printf("%-5d\n", 1);
	printf("%05d\n", 1);
	printf("%5d\n", 10000);
	printf("==================================\n");

	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "abcde");
	printf("==================================\n");

	printf("%5s\n", "abc");
	printf("%5s\n", "a");
	printf("%-5s\n", "a");
	printf("%05s\n", "a");
	printf("%5s\n", "abcde");
	printf("%c\n", 'abc');
	printf("==================================\n");

	printf("%f\n", 123.45);
	printf("%6.2f\n", 123.45);
	printf("%6.3f\n", 123.45);
	printf("%6.1f\n", 123.45);
	printf("%6.0f\n", 60.4);
	printf("%6.0f\n", 59.5);
	printf("==================================\n");

	printf("%d + %d = %d\n", 5, 3, 5 + 3);
	printf("%d - %d = %d\n", 5, 3, 5 - 3);
	printf("%d * %d = %d\n", 5, 3, 5 * 3);
	printf("%d / %d = %d\n", 5, 3, 5 / 3);		// ������ ������ ������ ����� ������. �� => ���̽��� "//"�� ����Ѵ�.
	printf("%d %% %d = %d\n", 5, 3, 5 % 3);		// ��� ���Ŀ� '%'�� ����Ϸ��� 2���� �����ؼ� ��� �Ѵ�.
	printf("%d / %d = %f\n", 5, 3, 5 / 3.);
	printf("==================================\n");

//	c/c++�� �⺻ �ڷ���
//	bool : 1byte, c���� ���� c++���� �߰��� �ڷ������� ��(true => 1) �Ǵ� ����(false => 0)�� ����Ѵ�.
//	char : 1byte, Ű���� ���� ������, ����, Ư������ 1���� ����Ѵ�. => �ѱ�, ����, Ű���忡 ���� Ư�����ڴ� 2����Ʈ�̴�.
//	short : 2byte, -32768 ~ 32767 ������ ������ ����Ѵ�.
//	int : 4byte, -2147483648 ~ 2147483647 ������ ������ ����Ѵ�.
//	float : 4byte, ������ �Ǽ�, �Ҽ��� �Ʒ� 6�ڸ� ������ ǥ���Ѵ�.
//	long long int : 8byte, -2�� 63�� ~ 2�� 63�� - 1 ������ ������ ����Ѵ�.
//	double : 8byte, ������ �Ǽ�, �Ҽ��� �Ʒ� 16�ڸ� ������ ǥ���Ѵ�.

//	������ ����ȯ
//	�ڷ����� ũ�Ⱑ ���� �ٸ� �������� ���� ����� ũ�Ⱑ ū �ڷ������� �ڵ� ��ȯ�ȴ�.
	printf("%d / %d = %d\n", 5, 3, 5 / 3);
	printf("%d / %d = %f\n", 5, 3, 5 / 3.);
	printf("==================================\n");

//	���ľ��� ��� => cout => c++���� �߰�
	cout << 5 << " + " << 3 << " = " << 5 + 3 << endl;	// endl => c++���� �߰��� �ٹٲ� => "\n"�� ���� �ǹ̷� ���ȴ�.
	cout << 5 << " - " << 3 << " = " << 5 - 3 << endl;
	cout << 5 << " * " << 3 << " = " << 5 * 3 << endl;
	cout << 5 << " * " << 3 << " = " << 5 * 3 << endl;
	cout << 5 << " / " << 3 << " = " << 5 / 3 << endl;
	cout << 5 << " % " << 3 << " = " << 5 % 3 << endl;
	cout << 5 << " / " << 3 << " = " << 5 / 3. << endl;
	printf("==================================\n");

	printf("'A' + 32 = %d\n", 'A' + 32); // 97 => �ƽ�Ű �ڵ尪
	printf("'A' + 32 = %c\n", 'A' + 32); // a  => �ƽ�Ű �ڵ尪�� �ش�Ǵ� ����
	cout << 'A' << " + " << 32 << " = " << 'A' + 32 << endl; // 97

//	������ ����ȯ => casting
//	���α׷��Ӱ� �� ������ �ڷ����� ������ �� �ִ�.
	cout << 5 << " / " << 3 << " = " << (double) 5 / 3 << endl;
	cout << 'A' << " + " << 32 << " = " << (char) ('A' + 32) << endl; // a
	cout << 'a' << " - " << 32 << " = " << (char) ('a' - 32) << endl; // A

}