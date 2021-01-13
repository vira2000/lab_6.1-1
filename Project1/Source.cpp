#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* с, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		с[i] = Low + rand() % (High - Low + 1);
}

void Sum(int* с, const int size, int& S, int& k)
{
	for (int i = 0; i < size; i++)
		if (( с[i] > 0 || с[i] % 2 != 0))
		{
			S += с[i];
			k++;
			с[i] = 0;
		}
}


int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	
	const int n = 27;
	int с[n];
	
	int Low = -35;
	int High = 25;
	
	Create(с, n, Low, High);
	
	cout << setw(4) << "с[] = {";
	
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << с[i] << ",";
	}
	cout << "}" << endl;
	cout << endl;
	
	int S = 0;
	int k = 0;
	
	Sum(с, n, S, k);
	
	cout << "Number = " << k << endl;
	cout << setw(4) << "Sum = " << S << endl;
	cout << endl;
	cout << setw(4) << "с[] = {";
	for (int i = 0; i < n; i++) 
	{
		cout << setw(4) << с[i] << ",";
	}
	cout << "}" << endl;
	
	return 0;
}