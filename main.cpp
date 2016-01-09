#include <iostream> 

using namespace std; 

int main()
{
for (int i = 0; i < 100; i++)
{
	cout << i; 
	if (i % 3 == 0 || i % 5 == 0)
	{
		//This line outputs Fizz whenever the number is divisible by 3.
		if (i % 3 == 0) { cout << "Fizz"; }
		//This line outputs Buzz whenever the number is divisible by 5.
		if (i % 5 == 0) { cout << "Buzz"; }
	}
		cout << endl; 
}
	return 0; 
}
