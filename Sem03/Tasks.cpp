// Sem03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//Task 1: �������� ��������, ����� ������ ��� ��������� ����� � ����� ���-������� ���� ������.
    int n, k;
	cin >> n >> k;
	if (n < k) {
		int help = k;
		k = n;
		n = help;
	}
	while (n%k)
	{
		n += n;
	}
	cout << n;

	//Task 2:�������� ��������, ����� ������ ��� ��������� ����� � ����� ��� - �������� �� ��� �������.

	int n, k;
	cin >> n >> k;
	if (n < k) {
		int help = k;
		k = n;
		n = help;
	}
	int minDivider = k;
	while (!minDivider || n % minDivider || k % minDivider) {
		minDivider--;
	}
	cout << minDivider;

	//Task 3: �������� ��������, ����� ������ ���������� ����� � ����� ���� ������� � ������.
	int n;
	cin >> n;
	if (n <= 1) {
		cout << "Not Prime";
	}
	int numbers = sqrt(n);
	bool isPrime = true;
	for (size_t i = 2; i <= numbers; i++)
	{
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		cout << "Prime";
	}
	else {
		cout << "Not Prime";
	}
}
