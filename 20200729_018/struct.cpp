#include "config.h"

//	���α׷����� ���� �ʸ��� �����ʹ� ���� �ڷ������� �������� �ʴ´�.
//	����ü�� ���� �ڷ����� ��� ���α׷����� ����� ���ο� �ڷ����� ����� ���̴�. => ����� ���� �ڷ��� => ���ڵ�
//	����ü�� ����� �����͸� ó���� �� �ִ� �Լ��� �߰��Ǹ� Ŭ������ �ȴ�.

//	typedef�� ���� �ݵ�� ����ü ������ �����ؾ� �Ѵ�.
//	[typedef] struct ����ü�̸� {
//		����ü�� �����ϴ� ��� ���� ����;	// �ʵ�
//		...;
//	} [����];		// ";"�� �������� ������ �߻��ȴ�.

//	���α׷����� Jumsu��� �ڵ��ϸ� �����Ϸ��� typedef���� ������ ��� struct Score�� �������Ѵ�.
typedef struct Score {
	int no;
	char name[11];
	int cpp, java, jsp, total;
	double average;
} Jumsu;

void main() {

//	����ü ���� ���� ���
//	[struct] ����ü�̸� ����ü�����̸�;
//	[struct] ����ü�̸� ����ü�����̸� = {�ʱ�ġ};
//	[struct] ����ü�̸� ����ü�迭�̸�[�ε���];
//	[struct] ����ü�̸�* ����ü�����ͺ����̸�;

	struct Score score1;

//	����ü ��� ������ �����ϴ� ���
//	����ü ������ �迭���� ����ü ��� ������ �����Ϸ��� ����ü �����̸� �ڿ� "."�� �� �����Ѵ�.
//	����ü ������ �������� ����ü ��� ������ �����Ϸ��� ����ü �����̸� �ڿ� "->"�� �� �����Ѵ�.

	score1.no = 1;
	strcpy_s(score1.name, "ȫ�浿");
	score1.cpp = 100;
	score1.java = 100;
	score1.jsp = 99;
	score1.total = score1.cpp + score1.java + score1.jsp;
	score1.average = (double)score1.total / 3;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", score1.name, score1.average);

	Score score2 = { 2, "�Ӳ���", 55, 74, 69 };
	score2.total = score2.cpp + score2.java + score2.jsp;
	score2.average = (double)score2.total / 3;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", score2.name, score2.average);

	Jumsu* pScore = &score1;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", pScore->name, pScore->average);

}

//	��Ʈ => �Ϻ�(4��Ʈ) => ����Ʈ(8��Ʈ) => ����(���� => 2����Ʈ, Ǯ => 4����Ʈ, ���� => 8����Ʈ) => �ʵ� => ���ڵ� => �� => ����