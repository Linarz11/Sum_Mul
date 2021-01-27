#include <iostream>
using namespace std;

int Sum(int n, int value, ...)
{
	int sum = 0;
	int* start = &value; //��������� ��������� 'start' � �������������� ��� ������� ���������� 'value'
	for (int i = 0; i < n; i++)
	{
		sum += *start++; // ��������������� ���������� 'start', ���������� 'sum' ����������� �������� 'start', ����������� ��������� 'start'
	}
	return sum;// ���������� ���������� sum � main
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