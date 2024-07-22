//#include<iostream>
//using namespace std;
//void StringConcat(char* c_arr1, char* c_arr2)
//{
//	int counter1 = 0, counter2 = 0;
//	/*cout << "\nThe string 1 is" << endl;
//	cout << c_arr1;
//	cout << "The string 2 is \n";
//	cout << c_arr2;*/
//	for (int i = 0; c_arr1[i] != '\0'; i++)
//	{
//		counter1++;
//	}
//	cout << "Size of str1 is" << counter1;
//	for (int i = 0; c_arr2[i] != '\0'; i++)
//	{
//		counter2++;
//	}
//	cout << "Size of str2 is" << counter2;
//  int c = 0;
//	char* temp = new char[counter1 + counter2];
//	for (int i = 0; i < counter1; i++)
//	{
//		temp[c] = c_arr1[i];
//		c++;
//	}cout << endl;
////	for (int i = 0; i < counter1; i++)
////	{
////		cout << temp[c];
////
////	}cout << endl;
//	for (int i = 0; i < counter2; i++)
//	{
//		temp[c] = c_arr2[i];
//		c++;
//	}
//	cout << endl;
//	cout << "The cancatinated array is \n";
//	for (int i = 0; i < counter1+counter2; i++)
//	{
//		cout<<temp[i];
//	}
//	delete[]temp;
//	c_arr1 = temp;
//}
//int main()
//{
//	char str1[1000];
//	char str2[1000];
//	cout << "Enter the string 1\n";
//	cin.getline(str1, 70);
//	cout << "Enter string 2\n";
//	cin.getline(str2, 70);
//	StringConcat(str1, str2);
//	return 0;
//}