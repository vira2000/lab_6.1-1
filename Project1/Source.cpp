#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* �, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		�[i] = Low + rand() % (High - Low + 1);
}

void Sum(int* �, const int size, int& S, int& k)
{
	for (int i = 0; i < size; i++)
		if (( �[i] > 0 || �[i] % 2 != 0))
		{
			S += �[i];
			k++;
			�[i] = 0;
		}
}


int main()
{
	srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����
	
	const int n = 27;
	int �[n];
	
	int Low = -35;
	int High = 25;
	
	Create(�, n, Low, High);
	
	cout << setw(4) << "�[] = {";
	
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << �[i] << ",";
	}
	cout << "}" << endl;
	cout << endl;
	
	int S = 0;
	int k = 0;
	
	Sum(�, n, S, k);
	
	cout << "Number = " << k << endl;
	cout << setw(4) << "Sum = " << S << endl;
	cout << endl;
	cout << setw(4) << "�[] = {";
	for (int i = 0; i < n; i++) 
	{
		cout << setw(4) << �[i] << ",";
	}
	cout << "}" << endl;
	
	return 0;
}