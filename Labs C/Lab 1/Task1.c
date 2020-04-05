#include <stdio.h>
#pragma hdrstop
#include <Windows.h>
#include <tchar.h>

#pragma argsused
int _tmain(int argc, _TCHAR* argv[])
{
	int ch;
	char gr[6];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (; ; )
	{
		printf("Введите номер группы:  \n");
		scanf("%s", gr);
		if (strlen(gr) == 6) {
			switch (gr[0]) {
			case '0':
				printf("Год поступления-2020 \n");
				break;
			case '9':
				printf("Год поступления-2019 \n");
				break;
			case '8':
				printf("Год поступления-2018 \n");
				break;
			case '7':
				printf("Год поступления-2017 \n");
				break;
			case '6':
				printf("Год поступления-2016\n");
				break;
			default:
				printf("Срок обучения в БГУИРе 5 лет,значит студент либо закончил обучение либо не поступал\n");
				break;
			}
			switch (gr[1]) {
			case '1':
				printf("Студент учится/учился на ФКП ");
				break;
			case '2':
				printf("Студент учится/учился на ФИТУ ");
				break;
			case '3':
				printf("Студент учится/учился на ФРЭ ");
				break;
			case '4':
				printf("Студент учится/учился на ФКСиС ");
				break;
			case '5':
				printf("Студент учится/учился на ФТК ");
				break;
			case '6':
				printf("Студент учится/учился на ЕФ");
				break;
			default:
				printf("Такого факультета не существует,выдумщик))");
				break;
			}
			getch();
			return 0;
		}
		else {
			printf("Ошибка.Введите правильные данные) \n");
			if (ch == 'A') break; /* выход из цикла */
		}
	}
	getch();
	return 0;
}
