// Sem03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//Task 1: Напишете програма, която приема две естествеи числа и връща най-малкото общо кратно.
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

	//Task 2:Напишете програма, която приема две естествеи числа и връща най - големият им общ делител.

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

	//Task 3: Напишете програма, която приема естествено число и връща дали числото е просто.
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
