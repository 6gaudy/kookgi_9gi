#include "config.h"

void main() {

	char juminNo[14];				// �ֹε�Ϲ�ȣ 13�ڸ��� �Է¹��� ���� �迭
	char check[] = "234567892345";	// ����ġ

	printf("�ֹε�Ϲ�ȣ 13�ڸ��� '-'���� �Է��ϼ��� : ");
	scanf_s("%s", juminNo, sizeof(juminNo));

	int sum = 0;
	for (int i = 0; i < 12; i++) {
//		printf("%c * %c = %d * %d = %d\n", juminNo[i], check[i], juminNo[i], check[i], juminNo[i] * check[i]);
//		sum += (juminNo[i] - '0') * (check[i] - 48);		 // ����ġ
//		sum += (juminNo[i] - '0') * (i < 8 ? i + 2 : i - 6); // ��Ģ1
		sum += (juminNo[i] - '0') * (i % 8 + 2);			 // ��Ģ2
	}
//	printf("%d\n", sum);

	int result = (11 - sum % 11) % 10;
	if (result == (juminNo[12] - 48)) {
		printf("����\n");
	}
	else {
		printf("����\n");
	}
	printf("%s\n", result == (juminNo[12] - 48) ? "����" : "����");
	cout << (result == (juminNo[12] - 48) ? "����" : "����") << endl;

}