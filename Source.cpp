//#include<iostream>
//using namespace std;
//int** AllocateMemory(int rows, int cols)
//{
//	cout << "Allocating memory ........\n";
//	int** r = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		r[i] = new int[cols];
//	}
//	return r;
//}
//void InputMatrix(int**& matrix, const int rows, const int cols)
//{
//	cout << "Inputing...........\n";
//	/*for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			matrix[i] = new int[cols];
//		}
//	}*/
//	cout << "Enter the data in array" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//}
//void DisplayMatrix(int** matrix, const int& rows, const int& cols)
//{
//	cout << "The data in the array" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout<< matrix[i][j]<<" ";
//		}
//		cout << endl;
//	}
//}
//int* return_functon(int**& matrix, const int rows, const int cols, int th_value)
//{
//	int arr_size=0;
//	cout << "The matrix is\n";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (matrix[i][j] > th_value)
//			{
//				arr_size++;
//
//			}
//		}
//		
//	}
//	int* new_arr = new int[arr_size]; int r = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (matrix[i][j]>th_value )
//			{
//				new_arr[r] = matrix[i][j];
//				r++;
//			}
//		}
//
//	}
//	cout << "The new array of larger numbres is\n";
//	new_arr[arr_size] = -1;
//	for (int i = 0; i < arr_size; i++)
//	{
//		cout << new_arr[i] << " ";
//	}
//	return new_arr;
//}
//int* max_col(int**& matrix, const int rows, const int cols)
//{
//	cout << "\nMaximum column ...........\n";
//	cout << "The matrix is\n";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int* new_array = new int[cols];
//		for (int j = 0; j < cols; j++)
//		{
//			int max = 0,i=0;
//			max = matrix[i][j];
//			for (; i < rows; i++)
//			{
//				
//				if ( max>=matrix[i][j])
//				{
//				}
//				else
//				{
//					max = matrix[i][j];
//				}
//			}
//			new_array[j] = max;
//		}
//		cout << "\nThe largest numbers in the column are" << endl;
//		for (int i = 0; i < cols; i++)
//		{
//			cout << new_array[i] << " ";
//		}
//		return new_array;
//}
//int** concat_table(int** table1, int** table2, int row1, int col1, int row2, int col2,bool axis)
//{
//	int** z = NULL;
//	if (axis == 0)
//	{
//		 z = new int* [row1];
//		 for (int i = 0; i < row1; i++)
//		 {
//			 z[i] = new int[col1+col2];
//		 }
//
//	}
//	
//
//
//
//}
//void deallocateMemory(int** matrix, const int& row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		delete[]matrix[i];
//	}
//}
//int main()
//{
//	 int row = 3;
//	 int col = 3;
//	 int th_value;
//	 //int** matrix = new int* [row];
//	cout << "Enter the size of rows initially in main" << endl;
//	cin >> row;
//	cout << "Enter the size of columns initially in main" << endl;
//	cin >> col;
//	
//	int **matrix=AllocateMemory(row, col);
//	InputMatrix(matrix, row, col);
//	DisplayMatrix(matrix, row, col);
//	cout << "Enter the threshold value\n";
//	cin >> th_value;
//	int * temp=return_functon(matrix, row, col, th_value);
//	int* temp2 = max_col(matrix, row, col);
//	int row1=0, col1=0;
//	cout << "Enter the size of rows for table 1 for concatination" << endl;
//	cin >> row1;
//	cout << "Enter the size of columns for table 1 concatination" << endl;
//	cin >> col1;
//	//take input from user for rows and cols
//	int** table1 = AllocateMemory(row1, col1);
//	InputMatrix(table1, row1, col1);
//	DisplayMatrix(matrix, row, col);
//	int row2=0, col2=0;
//	cout << "Enter the size of rows for table 2 for concatination" << endl;
//	cin >> row2;
//	cout << "Enter the size of columns for table 2 concatination" << endl;
//	cin >> col2;
//	//take input from user for rows and cols
//	int** table2 = AllocateMemory(row2, col2);
//	InputMatrix(table2, row2, col2);
//	DisplayMatrix(matrix, row, col);
//	bool axis;
//	cout << "Enter the axis for concatination\n";
//	cin >> axis;
//	// before calling concat_table check some conditions of rows and cols
//		//int** result = concat_table(table1, table2, row1, col1, row2, col2, axis);
//	//display result
//		//deallocation
//}