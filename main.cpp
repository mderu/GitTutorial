#include <iostream> 

using namespace std; 

int main(int argc, char* argv[])
{
int total = 0;
//Calculates the sum i = [argv[0], argv[1]], i^2 
for (int i = argv[0]; i < argv[1]; i++)
{
	total += i*i;
}
	cout << "The total is " << i << ".\n"; 
	return 0; 
}
