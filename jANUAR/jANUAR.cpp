#include <iostream>
#include <string>

using namespace std;

int func(int n, int syst);

int main() 
{ 
	setlocale(LC_ALL, "RUS");

	int n, p;

	cout << "Введите число: ";
	cin >> n;
	cout << "Введите систему счисления: ";
	cin >> p;

	if (p < 10)
	{
		func(n, p);
	}
	else
	{
		cout << "чего? ";
	}

	if (p == 62)
	{
		cout << "шыйсят два?!";
	}
	

}

int func(int n, int syst)
{

	string ans = "";
	int sgn = 1;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	if (n < 0) {
		sgn = -1;
	}

	n = abs(n);

	if (n > 0)
	{
		ans += ('0' + n % syst);
		n /= syst;

		func(n, syst);
	}

	if (sgn == -1)
	{
		ans += " nigative";
	}

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
	}


}