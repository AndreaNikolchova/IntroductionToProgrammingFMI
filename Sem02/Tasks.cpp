#include <iostream>
using namespace std;

int main()
{
	//Task 1: �� �� ������ ��������, ����� ������� ���� ����� ���������� � ���� ��� ��� �� ��������� �.
	int day;
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;

	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Invalid day!";
		break;
	}

	//Task 2: (Between 100 and 200): �� �� ������ ��������, ����� ������� ���� 
	// ����� � ��������� ���� � ��� 100, ����� 100 � 200 ��� ��� 200. �� �� ���������
	//  ��������� ��������� ���� � ��������� ��-����:

	int n;
	cin >> n;
	if (n < 100) {
		cout << "Less than 100";
	}
	else if (n >= 100 && n <= 200) {
		cout << "Between 100 and 200";
	}
	else{
		cout << "Greater than 200";
	}

	//Task 3: (Speed trap): �� �� ������ ��������, ����� ������� ������� (��������� �����)
	//  � ��������� ���������� �� ���������. ��� ������� �� 10 (�����������) ����������� 
	// �slow�. ��� ������� ��� 10 � �� 50 ����������� �average�. ��� ������� ��� 50 � �� 150
	//  ����������� �fast�. ��� ������� ��� 150 � �� 1000 ����������� �ultra fast�. ��� ��-������
	//  ������� ����������� �extremely fast�

	double speed;
	cin >> speed;
	if (speed <= 10) {
		cout << "slow";
	}
	else if (speed > 10 && speed <= 50) {
		cout << "average";
	}
	else if (speed > 50 && speed <= 150) {
		cout << "fast";
	}
	else if (speed > 150 && speed <= 1000) {
		cout << "ultra fast";
	}
	else {
		cout << "extremely fast";
	}

	//Task 4: (���� �� ������): �� �� ������ ��������, ����� ������� ��������� �� �����������
	//  ������ � �������� ������ �. �������� �� ������ ����: ������� (s), ������������ (r), 
	// ���� (c) � ���������� (triangle). �� ������ ��� �� ����� �� ���� ���� �� �������� 
	// (square, rectangle, circle ��� triangle). ��� �������� � �������, �� ��������� ���
	//  �� ���� ���� ����� � ������� �� �������� ��. ��� �������� � ������������, �� ���������� 
	// ��� ���� ����� ��� ����� � ��������� �� �������� ��. ��� �������� � ����, �� ��������� ��� 
	// ���� ���� ����� � �������� �� �����. ��� �������� � ����������, �� ���������� ��� ���� �����
	//  ��� ����� � ��������� �� �������� �� � ��������� �� ���������� ��� ���. ���������� �� �� �������� 
	// �� 3 ����� ���� ����������� �����

	char typeOfFigure;
	const double PI = 3.14;
	cin >> typeOfFigure;
	switch (typeOfFigure)
	{
	case 's':
		double side;
		cin >> side;
		cout << side * side;
		break;
	case 'r':
		double a, b;
		cin >> a >> b;
		cout << a * b;
		break;
	case 'c':
		double r;
		cin >> r;
		cout << PI * r * r;
		break;
	case't':
		double c, h;
		cin >> c >> h;
		cout << (c * h) / 2;
		break;
	default:
		cout << "Invalid figure";
		break;
	}

	//Task 5: (����� + 15 ������) : �� �� ������ ��������, ����� ������� ��� � ������ �� 24-������ 
	// ��������� � ��������� ����� �� � ����� ���� 15 ������. ���������� �� �� �������� ��� ������
	//  hh:mm. �������� ������ �� ����� 0 � 23, � �������� ������ �� ����� 0 � 59.
	//  �������� � �������� �� �������� ������ � �� ��� �����, � ������ ���� ������ � ����������

	int hour, minutes;
	cin >> hour >> minutes;

	minutes += 15;

	if (minutes > 60) {
		minutes -= 60;
		hour++;
	}
	if (hour == 24) {
		hour = 0;
	}

	if (hour < 10) {
		cout << '0';
	}

	cout << hour << ':';

	if (minutes < 10) {
		cout << '0';
	}

	cout << minutes;

	//Task 6  �� �������, �� �������� �� ����� � �����, ��� ����� ����� � ��� 
	// � ������������ �������� ��� ����� �� ����� �� ������ ��� ��� ������������ 
	// ��-����� ��� ����� �� ���. �� ������ � ��������� ������� ����� ���� �� ���� �����. 
	// �������� ��������, ����� ������� �� ����������� 5 �� ���� ���� �����. 
	// �� �� ������ �� ����������� ����� "yes", ��� ���������� �������� � �����, 
	// ��� "no", � �������� ������.

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (!(b <= a && b <= c || b >= a && b >= c)) {
		cout << "no";
	}
	else if (!((c <= b && c <= d || c >= b && c >= d))) {
		cout << "no";
	}
	else if (!((d <= c && d <= e || d >= c && d >= e))) {
		cout << "no";
	}
	else {
		cout << "yes";
	}

	//Task 7: �� �� ������ ��������, ����� ��� �������� ������ r �
	//�������� ����� (�, �) ��������� ���� ������� �� ������ �����/����� 
	// ��� �� ������� �� ��������� � ������ (0,0).

	int r, x, y;
	cin >> r >> x >> y;
	if (x > -1 * r && x < r && y > -1 * r && y < r) {
		cout << "In the circle";
	}
	else if (x < -1 * r || x > r && y < -1 * r || y > r) {
		cout << "Out of the circle";
	}
	else {
		cout << "On the circle";
	}

}


