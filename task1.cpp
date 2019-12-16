
#include <iostream>
using namespace std;

int global;
int main()
{
	int automatic;
	int* dynamic = new int;
	cout <<"Global's address: "<<&global<<endl;
	cout <<"Automatic's address:  "<<&automatic<<endl;
	cout <<"Dynamic's address "<<dynamic<<endl;
	delete dynamic;
	return 0;
}
