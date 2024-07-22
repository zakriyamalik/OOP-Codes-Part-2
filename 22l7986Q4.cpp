#include<iostream>
using namespace std;
const int Size = 4;
void getData(int* p, int* q);
void printData(int* p, int* q);
void reverseData(int* p, int* q);
void sortData(int* p, int* q);
int main()
{
	int arr[Size];
	int i = 0;
	/*for (int i = 0; i < Size; i++)
	{
		cout << "Enter the value " << i + 1 << " of array" << endl;
		cin >> arr[i];
	}*/
	int* p;
	int* q;
	p = &arr[0];
	q = &arr[Size-1];
	//cout << " The value of 1 is " << *p << " And the value of 2 is " << *q << endl;
	getData(p, q);
	printData(p, q);
	reverseData(p, q);
	sortData(p, q);
}
void getData(int* p, int* q)
{
	cout << "Getting data in array is\n";
	for (int* i = p; i <= q; i++)
	{
		cin >> * i;
	}
}
void printData(int* p, int* q)
{
	cout << "The data in the array is\n";
	for (int* i = p; i <= q; i++)
	{
		cout<< * i<<" ";
	}

	cout << endl;
}
void reverseData(int* p, int* q)
{
	cout << "In reverse order the array is" << endl;
	for (int* i = q; i >= p; i--)
	{
		cout << *i << " ";
	}
	cout << endl;
}
void sortData(int* p, int* q)
{
	int *x = p;
	int *y = q;
	y-=1;
	cout << "In ascending sorting the array is " << endl;
	for (int* i = p; i <= q; i++)
	{
		for (int* j = x; j <= y; j++)
		{
			if (*i > *(i + 1))
			{
				int temp = 0;
				temp = *i;
				*i = *(i + 1);
				*(i + 1) = temp;
			}
		}
		y--;
	}
	for (int* i = p; i <= q; i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}