#include <clocale>
#include <stdio.h>
#include <math.h>
const float e = 0.001;
double radians(double degrees)
{
	double radians = (3.14 / 180) * degrees;
	return radians;
}
double factorial(int n)
{
	if (n < 0) return 0;
	else if (n == 0) return 1;
	else return n * factorial(n - 1);
}
int sin2(double radians, int n)
{
	long double d, e, a, b, c, result = 0;
	for (int y = 1; y < 100; y++) {
		d = (2 * y) - 1;
		e = y - 1;
		a = pow(-1, e);
		b = pow(radians, d);
		c = factorial(d);
		result += (a * b) / (long double)c;
		if (result - sin(radians) < e) {
			printf("S(x) - %lf\n", result);
			return y;
		}
	}
}
void main()
{
	setlocale(LC_ALL, "ru");
	double x;
	int res1 = 0;
	do {
		printf("Введите значение икса: ");
		rewind(stdin);
		res1 = scanf_s("%lf", &x);
		if (res1 == 1) {
			x = radians(x);
			printf("Значение в радианах %lf\n", x);
			printf("Y(x) - %lf\t", sin(x));
			printf("%d", sin2(x, 0));
		}
		else {
			printf("%s", "Некорректный ввод.Попробуйте в другой раз...\n");
		}
	} while (res1 <= 0);

}
