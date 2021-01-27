#include <iostream>
using namespace std;

int Sum(int n, int value, ...)
{
	int sum = 0;
	int* start = &value; //объялвяем указатель 'start' и инициализируем его адресом переменной 'value'
	for (int i = 0; i < n; i++)
	{
		sum += *start++; // разыменовывавем переменную 'start', переменной 'sum' присваиваем значение 'start', инкремируем переменую 'start'
	}
	return sum;// возвращаем переменную sum в main
}

int Mul(int value ...)
{
	int product = 1;
	int* start = &value;
	while (*start != int())
		product *= *start++;
	return product;
}




void main()
{
	setlocale(LC_ALL, "");
	cout <<"Sum = " << Sum(10, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22) << endl;
	cout << "Mul = " << Mul(8, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0) << endl;

}