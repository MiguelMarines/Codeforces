#include<iostream>
using namespace std;

int main()
{
	int n, p[100], a = 0, b = 0, s;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	int max = p[0], min = p[0];
	for (int i = 1; i < n; i++)
	{
		if (p[i] > max)
		{
			max = p[i];
			a = i;
		}
		if (p[i] <= min)
		{
			min = p[i];
			b = i;
		}
	}
	if (a < b) s = a + n - 1 - b;
	else s = a + n - 1 - b - 1;
	cout << s << endl;
}