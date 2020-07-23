#include "config.h"
#include <time.h>

void main() {

	srand(time(NULL));
	char baseball[] = "123456789";
	for (int i = 0; i < 1000000; i++) {
		int r = rand() % 8 + 1;
		swap(baseball[0], baseball[r]);
	}
//	printf("%s\n", baseball);

	int level;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &level);
	printf("cpu : ");
	for (int i = 0; i < level; i++) {
		printf("%c", baseball[i]);
	}
	printf("\n");

	int count = 0;
	int start = time(NULL);
	while (true) {
		int s = 0, b = 0;

//		��ǻ�Ͱ� �߻���Ų ���ڸ� ���߱� ���� ������ ũ�⸸ŭ �޸𸮸� �������� �Ҵ��ϰ� ���ڿ��� �Է¹޴´�.
//		char* user = (char*)malloc(sizeof(char) * level + 1);
		char* user = new char[level + 1];
		cout << "user : ";
//		scanf_s() �Լ��� ���ڿ��� �Է¹��� �� �ݵ�� 3��° �μ��� �Է¹��� ���ڿ��� �ִ� ���̸� �����ؾ� �Ѵ�.
		scanf_s("%s", user, _msize(user));
		count++;

		for (int i = 0; i < level; i++) {
			if (baseball[i] == user[i]) {
				s++;
			}
			for (int j = 0; j < level; j++) {
				if (baseball[j] == user[i]) {
					b++;
				}
			}
		}

		if (level == s) {
			break;
		}
		printf("%d ��Ʈ����ũ %d ��\n", s, b - s);

	}

	int end = time(NULL);
	printf("%d�� �ɷ��� %d�� ���� �����.\n", end - start, count);

}