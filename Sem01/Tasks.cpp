#include <iostream>
using namespace std;

int main()
{
	//Task 1: ������� �� ���� �����. ����������� 1, ��� ������� � ����� � 0, ��� � �������.
	int n;
	cin >> n;
	bool isNumberEven = n % 2;
	cout << !isNumberEven;

	//Task 2: ������� �� ���������� ���� ����� n. �� �� �������� ���������� ����� ������� � �������.
	int n;
	cin >> n;
	int reversed = (n % 10) * 100 + (n / 10 % 10) * 10 + n / 100;
	cout << reversed + 1;

	//Task 3: ������ �� ������. �� �� �������� 1, ��� � ��������� ������ �����, � 0, ��� �� �.
	char ch;
	cin >> ch;
	bool result = ch > 'A' && ch < 'z';
	cout << result;

	//Task 4: ������ �� ���� �����. �� �� �������� 1, ��� ������� � ������� ������ �� �������, � 0, ��� �� � �������.
	int grade;
	cin >> grade;
	bool result = grade >= 2 && grade <= 6;
	cout << result;

	//Task 5: ������ �� ���� �����. �� �� �������� ��� ���������� �����.
	int n;
	cin >> n;
	n /= 10;
	cout << n;

	//Task 6: �������� ��������, ����� ������� ��� ����� - a � b � ������� ���� �������� (a + b)^4 - (a-b)^2
	int a, b;
	cin >> a >> b;
	int sum = a + b;
	int subtract = a - b;
	int result = (sum * sum * sum * sum) - (subtract * subtract);
	cout << result;

	//Task 7:������� �� ���� ����� n - n ����. �� �� ������ �� ��������� ��� ���� �� �� �����������
	//�� ��������, ���� �� �� ����� ��������� ���� ��������. � ��������� ��������, �� ����� �������� �� 1 � 2 ����.
	int n;
	cin >> n;
	int hundred = n / 100;
	n -= hundred * 100;
	int fifty = n / 50;
	n -= fifty * 50;
	int twenty = n / 20;
	n -= twenty * 20;
	int ten = n / 10;
	n -= ten * 10;
	int five = n / 5;
	n -= five * 5;
	int two = n / 2;
	n -= two * 2;
	cout << hundred << "x100lv " << fifty << "x50lv " << twenty << "x20lv " << ten << "x10lv " << five << "x5lv " << two << "x2lv " << n << "x1lv ";

	//Task 8: �������� �� ��� �����. �� �� �������� ��-�������� �� �����.
	int a, b;
	cin >> a >> b;
	bool isBigger = a > b;
	cout << a*isBigger + b*!isBigger;

}

