#include <iostream>
using namespace std;

int main()
{
	//Task: Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица.
	int n;
	cin >> n;
	int reversed = (n % 10) * 100 + (n / 10 % 10) * 100 + n / 100;

}

