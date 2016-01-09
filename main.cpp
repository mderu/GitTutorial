#include <iostream> 

using namespace std; 

int main(int argc, char* argv[])
{
long total = 0;
if(argc != 2) {return -1;}
for (int i = argv[1]; i < argv[0]; i++)
{
	total += i*i;
}
	cout << "The total is " << i << ".\n"; 
	return 0; 
}
