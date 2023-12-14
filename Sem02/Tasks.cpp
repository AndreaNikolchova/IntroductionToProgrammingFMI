#include <iostream>
using namespace std;

int main()
{
	//Task 1: Да се напише програма, която въвежда цяло число отпечатава с думи кой ден от седмицата е.
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

	//Task 2: (Between 100 and 200): Да се напише програма, която въвежда цяло 
	// число и проверява дали е под 100, между 100 и 200 или над 200. Да се отпечатат
	//  съответно съобщения като в примерите по-долу:

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

	//Task 3: (Speed trap): Да се напише програма, която въвежда скорост (десетично число)
	//  и отпечатва информация за скоростта. При скорост до 10 (включително) отпечатайте 
	// “slow”. При скорост над 10 и до 50 отпечатайте “average”. При скорост над 50 и до 150
	//  отпечатайте “fast”. При скорост над 150 и до 1000 отпечатайте “ultra fast”. При по-висока
	//  скорост отпечатайте “extremely fast”

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

	//Task 4: (Лице на фигура): Да се напише програма, която въвежда размерите на геометрична
	//  фигура и пресмята лицето й. Фигурите са четири вида: квадрат (s), правоъгълник (r), 
	// кръг (c) и триъгълник (triangle). На първия ред на входа се чете вида на фигурата 
	// (square, rectangle, circle или triangle). Ако фигурата е квадрат, на следващия ред
	//  се чете едно число – дължина на страната му. Ако фигурата е правоъгълник, на следващите 
	// два реда четат две числа – дължините на страните му. Ако фигурата е кръг, на следващия ред 
	// чете едно число – радиусът на кръга. Ако фигурата е триъгълник, на следващите два реда четат
	//  две числа – дължината на страната му и дължината на височината към нея. Резултатът да се закръгли 
	// до 3 цифри след десетичната точка

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

	//Task 5: (Време + 15 минути) : Да се напише програма, която въвежда час и минути от 24-часово 
	// денонощие и изчислява колко ще е часът след 15 минути. Резултатът да се отпечата във формат
	//  hh:mm. Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59.
	//  Часовете и минутите се изписват винаги с по две цифри, с водеща нула когато е необходимо

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

	//Task 6  Ще казваме, че поредица от числа е трион, ако всяко число в нея 
	// е едновременно поголямо или равно от двата си съседа или пък едновременно 
	// по-малко или равно от тях. За първия и последния елемент имаме само по един съсед. 
	// Напишете програма, която въвежда от стандартния 5 на брой цели числа. 
	// Да се изведе на стандартния изход "yes", ако въведената поредица е трион, 
	// или "no", в противен случай.

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

	//Task 7: Да се напише програма, която при подадени радиус r и
	//двумерна точка (х, у) проверява дали точката се намира вътре/извън 
	// или по контура на окръжност с център (0,0).

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


