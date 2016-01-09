#include <iostream> 

using namespace std; 

int main()
{
for (int i = 0; i < 100; i++)
{
	cout << i; 
	if (i % 3 == 0 || i % 5 == 0)
	{
		if (i % 3 == 0) { cout << "Fizz"; }
		if (i % 5 == 0) { cout << "Bozz"; }
		if (i % 7 == 0) { cout << "Blorg"; }
	}
		cout << endl; 
}
	return 0; 
}
