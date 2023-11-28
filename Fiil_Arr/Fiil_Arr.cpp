//Функция сортирующая первую половину массива по убыванию, а вторую - по возрастанию
#include <iostream>
using namespace std;
const int Size = 20;

void Print_Array(int arr[]);
void Fill_Array(int arr[]);
void Sort_Array(int arr[]);


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int Ar_sort[Size] = {};
	Fill_Array(Ar_sort);
	Sort_Array(Ar_sort);
	Print_Array(Ar_sort);
}

void Sort_Array(int arr[])
{
	for (int i = 0; i < Size/2-1; i++)
	{
		for (int j = 0; j < Size/2-1; j++)
		{
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
	for (int i = Size / 2; i < Size - 1; i++)
	{
		for (int j = Size / 2; j < Size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}


void Fill_Array(int arr[])
{
	for (int i = 0; i < Size; i++)
	{
		arr[i] =1+ rand() % 20;
	}
}

void Print_Array(int arr[])
{
	for (int i = 0; i < Size; i++)
	{
		cout<<"["<<i+1<<"]\t" << arr[i] << "\n ";
	}
	cout << endl;
}