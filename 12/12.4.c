#include <locale.h>
#include <stdio.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int n, a, b, c,b1;
	char s[][10] = { "", "���", "������", "������", "���������" , "�������", "��������", "�������", "���������", "���������" };
	char d[][15] = {"", "", "��������", "��������", "�����", "���������", "����������", "���������", "�����������", "���������" };
	char e[][15] = {"", "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
	char dop[][26] = { "������", "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
	printf("������� �����\n");
	scanf_s("%i", &n);
	a = n / 100;
	b = n % 100;
	b1 = b;
	if ((b1 < 20) && (b1>9)) {
		b = b % 10;
		printf("%s %s", s[a], dop[b]);
		return 0;
	}
	else {
		b = (n % 100)/10;
		c = n % 10;
		printf("%s %s %s", s[a], d[b], e[c]);
	}
	return 0;
}