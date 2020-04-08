#include <iostream.h>
#include <fstream.h> // библиотека файловых операций ввода - вывода.
#include <cstdio.h>
#include <windows.h>


using namespace std;

void fail_to_record_info ();

char str[1024];
char tmp[1024];
int i, k;
int d;

int main ()
{
	SetConsoleCP (1251);
	SetConsoleOutputCP (1251);



	int menu = 0;

	do
	{
		cout << "\t\t\tМЕНЮ программы:\n\n";
		cout << "+-----------------------------------------------------------+\n";
		cout << "| (1) Считывание с файла (input).                           |\n";
		cout << "| (2) Запись в файл (output) в виде гистограммы.            |\n";
		cout << "+-----------------------------------------------------------+\n";
		cout << "| (0) Выход.                                                |\n";
		cout << "+-----------------------------------------------------------+\n";

		cout << "\nВведите свой вариант: ";
		cin >> menu;

		if(menu < 0 || menu > 2)
		{
			cout << "Введен неверный пункт меню.\n";
            cout << "Введите еще раз (от 0 до 2): \n";
            cin >> menu;
        }

        cout << endl;


        ifstream in ("input.txt"); // Работа со считыванием информации из текстового файла input.txt

        switch (menu)
		{
		case 1:
            if(!in)
            {
                cout << "Не удается открыть фаил.\n";
                return 1;
            }

            in >> str;
            // Считываем лексему из строки.
            for (i = 0; ; i++)
			{
                // Считываем до тех пор, пока не встретится либо пробел, либо нулевой символ (признак завершения строки).
                for (k = 0; str[i] != ' ' && str[i]; k++, i++)
					tmp[k] = str[i];
                tmp[k] = '\0'; // Завершаем лексему нулевым символом.
                //  Определение длины каждого слова из строки.
                d = strlen(tmp);

                cout << "слово: " << tmp << endl;

                cout << "Длина этого слова: " << d << endl;

                if(!str[i]) break;
            }
            in.close();// Закрываем текстовый файл input.txt

			cout << "\nИнформация считана с файла input.txt\n\n";

            break;

        case 2:
            fail_to_record_info ();

            break;
        }
    } while (menu != 0);

    cout << "!!! ВЫХОД из программы !!!\n";

    return 0;
}

void fail_to_record_info ()
{
	ofstream out ("output.txt"); // Работа с записью информации в текстовый файл output.txt
	out << "слово: " << tmp << endl;

	out << "\nГИСТОГРАММА: \n";
	for(int t = 0; t < d; t++)
	{
		out << " * ";
	}
	cout << endl;

	out.close(); // Закрываем текстовый файл output.txt

	cout << "\nИнформация обработана и записана на фаил output.txt\n\n";
}
