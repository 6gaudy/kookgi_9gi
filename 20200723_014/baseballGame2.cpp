#include "config.h"
#include <time.h>

void main() {

	srand(time(NULL));
	int baseball[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < 1000000; i++) {
		int r = rand() % 8 + 1;
		swap(baseball[0], baseball[r]);
	}

	int level;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &level);
	printf("cpu : ");
	for (int i = 0; i < level; i++) {
		printf("%d", baseball[i]);
	}
	printf("\n");

	int count = 0;
	int start = time(NULL);
	while (true) {
		int s = 0, b = 0;

		int user;
		printf("user : ");
		scanf_s("%d", &user);
		count++;
		
		for (int i = 0; i < level; i++) {

//			�Է��� ������ �� �κ� ���� ���ϱ� ���� �Է��� ������ 3�� ��� 100, 10, 1�� ���� ���� ����Ѵ�.
//			level�� 3�� �Է����� ��� i���� 0, 1, 2�� ����ǹǷ� level - i - 1�� ����ϸ� �Ʒ��� ����.
//			3 - 0 - 1 => 2, pow(10, 2) => 100
//			3 - 1 - 1 => 1, pow(10, 1) => 10
//			3 - 2 - 1 => 0, pow(10, 0) => 1
			int r = pow(10, level - i - 1);

			int mok = user / r;

			if (baseball[i] == mok) {
				s++;
			}
			for (int j = 0; j < level; j++) {
				if (baseball[j] == mok) {
					b++;
				}
			}

//			���� �ڸ��� ���ڸ� ���ϱ� ���� user�� ����� ���� pow(10, level - i - 1)�� ���� �������� �����Ų��.
			user %= r;

		}

		if (level == s) {
			break;
		}
		printf("%d ��Ʈ����ũ %d ��\n", s, b - s);

	}

	int end = time(NULL);
	printf("%d�� �ɷ��� %d�� ���� �����.\n", end - start, count);

}