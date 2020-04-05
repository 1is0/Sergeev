//---------------------------------------------------------------------------

#include <stdio.h>
#pragma hdrstop
#include <math.h>
#include <tchar.h>
#include <Windows.h>
//---------------------------------------------------------------------------

#pragma argsused
int Radius(int a) {
    printf("Введите радиус:");
    scanf("%d", &a);
    printf("Радиус: ", &a);
    return a;
}
int Square(int b) {
    int a;
    printf("Введите радиус:");
    scanf("%d", &a);
    b = (3.15 * a * a);
    printf("Площадь круга: ", &b);
    return b;
}
int SectorArea(int с) {
    int a, u, c;
    printf("Введите радиус:");
    scanf("%d", &a);
    printf("Введите угол (в градусах):");
    scanf("%d", &u);
    c = (3.15 * powl(a, 2) * u / 360);
    printf("Площадь сектора круга,образованного углом :", &с);
    return c;
}
int Circumference(int d) {
    int a;
    printf("Введите радиус:");
    scanf("%d", &a);
    d = (3.15 * a * 2);
    printf("Длина окружности:", &d);
    return d;
}
int SideOfaSquare(int e) {
    int a;
    printf("Введите радиус:");
    scanf("%d", &a);
    e = ((2 * a) / sqrt(2));
    printf("Сторона квадрата,вокруг которого описана окружность:", &e);
    return e;
}
int ConeVolume(int  f) {
    int a;
    printf("Введите радиус:");
    scanf("%d", &a);
    f = (a * (3.15 * powl(a, 2)) / 3);
    printf("Объем конуса:", &f);
    return f;
}
int Information(void) {
    printf("Автор проги:Я))");
    return 0;
}
int Exit(void) {
    system("pause");
    return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int i, g, y, p, o, m, n, b, ch;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Что вы/ты хотите/хочешь сделать?: \n");
    printf("1)Ввести радиус окружности :\n");
    printf("2)Площадь окружности:\n");
    printf("3)Площадь сектора круга,образованного углом :\n");
    printf("4)Длина окружности:\n");
    printf("5)Сторона квадрата,вокруг которого описана окружность:\n");
    printf("6)Объем конуса:\n");
    printf("7)Информация о авторе и версии программы:\n");
    printf("8)Выход:\n");
    for (; ; )
    {
        scanf("%d", &i);
        switch (i) {
        case 1:
            printf(" %d\n", Radius(g));
            break;
        case 2:
            printf(" %d\n", Square(y));
            break;
        case 3:
            printf(" %d\n", SectorArea(p));
            break;
        case 4:
            printf(" %d\n", Circumference(o));
            break;
        case 5:
            printf(" %d\n", SideOfaSquare(m));
            break;
        case 6:
            printf(" %d\n", ConeVolume(n));
            break;
        case 7:
            printf(" \n", Information());
            break;
        case 8:
            printf(" \n", Exit());
            return 0;
            break;
        default:
            printf("Такого номера не существует.Введите заново\n");
        }
        if (ch == 'A') break; /* выход из цикла */
    }
    system("pause");
    return 0;
}
