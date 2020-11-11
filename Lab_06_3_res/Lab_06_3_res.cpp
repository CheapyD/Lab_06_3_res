#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Print(int* a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		return Print(a, n, i + 1);
	else
		cout << endl;
}

template <typename T>
void Inverse(T* a, const T n, T i)
{
	int tmp = a[i];
	a[i] = a[i + 1];
	a[i + 1] = tmp;
	i++;
	if (i < n / 2 - 1)
		Inverse(a, n, i + 1);
}

int main()
{
	const int n = 10;
	int a[n] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Original masive" << endl;
	Print(a, n, 0);
	cout << endl;

	cout << "Inversed masive" << endl;
	Inverse(a, n, 0);
	Print(a, n, 0);
	cout << endl;

	system("pause");
	return 0;
}