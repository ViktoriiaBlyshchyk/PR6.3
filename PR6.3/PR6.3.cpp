#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Input(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

template<typename T>
void Input(T* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template<typename T>
void Print(T* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int* a, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		S += a[i] * a[i];
	return S;
}

template<typename T>
T Sum(T* a, const int n)
{
	T S = 0;
	for (int i = 0; i < n; i++)
		S += a[i] * a[i];
	return S;
}

int main()
{
	int n;
	cout << " " << "n = ";
	cin >> n;
	int* a = new int [n];

	Input<int>(a, n);
	Print<int>(a, n);

	cout << "S = " << Sum<int>(a, n) << endl;

	return 0;
}