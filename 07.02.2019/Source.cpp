#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

template<typename T>
void FillArray(T a[],int n)
{

	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 100;
	}
}


template<typename T>
void PrintArray(T a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

template<typename T>
void BubbleArray(T a[], int n)
{
	T x;
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			if (a[j] > a[j - 1])
			{
				x = a[j];
				a[j] = a[j - 1];
				a[j - 1] = x;
			}

		}

	}

}

template<typename T>
void Vstavka(T a[], int n)
{
	T y;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i; j > 0; j--)
		{
			if (a[j] < a[j - 1] )
			{
				y = a[j];
				a[j] = a[j - 1];
				a[j - 1] = y;
			}
			else break;
		}

	}

}

bool checkBrackets(char c[])
{
	int k = 0, a = 0, b = 0;
	for (size_t i = 0; i < strlen(c); i++)
	{
		if (c[i] == '('){k++;}
		else if (c[i] == ')'){k--;}
		if (k<0){return 0;}
		if (c[i] == '{'){a++;}
		else if (c[i] == '}'){a--;}
		if (a < 0){return 0;}
		if (c[i] == '['){b++;}
		else if (c[i] == ']'){b--;}
		if (b < 0){return 0;}

	}
	if (k == 0 && a == 0 && b ==0)
	{
		return 1;
	}
	else return 0;
}

template<typename T>
void SelectionSort(T a[], int n)
{
	T min, min_pos;

	for (size_t i = 0; i < n-1; i++)
	{
		min = INT_MAX;
		for (size_t j = i; j < n; j++)
		{

			if (a[j] < min)
			{
				min = a[j];
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}



int main()
{
	srand(time(NULL));

	int flag = 1;
	const int n = 10;

	do
	{
		int A[n];
		FillArray(A, n);
		PrintArray(A, n);
		SelectionSort(A, n);
		PrintArray(A, n);


		cout << "Continue?";
		cin >> flag;

	} while (flag == 1);
}


///////strelen(c);///////strelen(c);////////////strelen(c);/////////////strelen(c);/////////////strelen(c);///////////////////strelen(c);/////////////////////strelen(c);/////////////////strelen(c);/////////