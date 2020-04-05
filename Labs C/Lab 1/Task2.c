#include <stdio.h>
#pragma hdrstop
#include <tchar.h>
#include <math.h>
#include <stdlib.h>
#pragma argsused
#include <Windows.h>
int main() {
	int money, m = 0, n = 0, k;
	int ch;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (; ; )
	{
		printf("Введите купюру: ");
		scanf("%d", &money);
		if (money > 7) {
			for (m = 0; money > 12; m++) {
				money -= 5;
			}

			switch (money) {
			case 8:
				m = m + 1;
				n = n + 1;
				break;
			case 9:
				n = n + 3;
				break;
			case 10:
				m = m + 2;
				break;
			case 11:
				n = n + 2;
				m = m + 1;
				break;
			case 12:
				n = n + 4;
				break;
			}
			printf("Я могу разменять эти купюры на столько %d ", n);
			printf("троек");
			printf(" и на столько %d ", m);
			printf("пятёрок \n");
			system("pause");
			return 0;
		}
		else {
			printf("Купюра меньше 7\n");
			if (ch == 'A') break; /* выход из цикла */
		}
	}
	system("pause");
	return 0;
}
