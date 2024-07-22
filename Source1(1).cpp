#include<iostream>
using namespace std;
template <class myType1, class myType2,class myType3>
void performOperation(myType1 a, myType2 b, myType3 op)
{
	int ans = 0;
	if (op == '+')
	{
		ans = a + b;
		cout << "Ans\t" << ans << endl;
	}
	else if (op == '-')
	{
		if (a < b)
		{
			cout << "A is less then B(-ve ans) " << endl;
		}
		else 
		{
			ans = a - b;
			cout << "Ans\t" << ans << endl;
		}
	}
	else if (op == '*')
	{
		ans = a * b;
		cout << "Ans\t" << ans << endl;
	}
	else if (op == '/')
	{
		if (b == 0)
		{
			cout << "Cannot divide with 0" << endl;
		}
		else
		{
			ans = a / b;
			cout << "Ans\t" << ans << endl;
		}
	}
	else
	{
		cout << "Wrong input\n";
	}

}
int main()
{
	int a, b; // this can be float, int or double too

	char op;
	cout << "Enter first operand ";
	cin >> a;
	cout << "Enter second operand ";
	cin >> b;
	cout << "Enter operation ";
	cin >> op; // op can be +, -, * or /
	if (op == '*' || op == '+' || op == '-' || op == '/')
	{
		
		performOperation<int,int,char>(a, b, op);
	}
	else
	{
		cout << "Wrong operation";
	}
}