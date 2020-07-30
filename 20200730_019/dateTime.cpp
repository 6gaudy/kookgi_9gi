#include "config.h"
#include <time.h>

void main() {

	/*
//	time.h ��� ���Ͽ� ���ǵ� tm ����ü�� ��¥ �� �ð��� ó���� �� �ֵ��� ����� �ڷ��� time_t�� ������ �����Ѵ�.
	time_t timer;
//	tm ����ü�� ������ ������ �����Ѵ�.
	tm* t;
//	��ǻ�� �ý����� ���� ��¥�� �ð� ������ ����ü time_t ������ �־��ش�.
	timer = (unsigned)time(NULL);
//	c���� localtime() �Լ��� ����ؼ� ���н� Ÿ���� ��, ��, ��, ��, ��, �� ������ �����ؼ� tm ����ü�� �� ��� ������ �־��ش�.
	t = localtime(&timer);
	*/


//	���н� Ÿ���� 1970�� 1�� 1�� �������� time(NULL) �Լ��� ����Ǵ� ���������� �ð��� �� ������ ���´�.
//	printf("%d\n", (unsigned)time(NULL));
	time_t timer = (unsigned)time(NULL);
	tm* t = localtime(&timer);

//	c/c++���� �⵵�� 1900���� �������� ó���ϱ� ������ �⵵�� ���� ���� 1900�� ���ؼ� ���;� �Ѵ�.
	cout << "�� : " << t->tm_year + 1900 << endl;
//	�츮�� 1 ~ 12�� ������ ��ǻ�ʹ� 0 ~ 11���� ó���ϱ� ������ ���� ���� ���� 1�� ���ؼ� ���;� �Ѵ�.
	cout << "�� : " << t->tm_mon + 1 << endl;
	cout << "�� : " << t->tm_mday << endl;
	cout << "�� : " << t->tm_hour << endl;
	cout << "�� : " << t->tm_min << endl;
	cout << "�� : " << t->tm_sec << endl;
	cout << "���� : " << t->tm_wday << endl;
	cout << "1�� 1�� ���� ���� ��¥ : " << t->tm_yday << endl;
	cout << "�ϱ� �ð� ������ �ǽ� ���� : " << t->tm_isdst << endl;

}