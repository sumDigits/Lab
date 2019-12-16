
#include <iostream>

using namespace std;

struct LEGOset1
{
	char name[25];
	char country[12];
	int article;
	size_t numofparts;
	double price;
	bool availability;
};
struct LEGOset2
{
	char country[12];
	bool availability;
	char name[25];
	double price;
	int article;
	size_t numofparts;
	
};
#pragma pack(push,1)
struct LEGOset3
{
	char name[25];
	char country[12];
	int article;
	size_t numofparts;
	double price;
	bool availability;
};
#pragma pack(pop)
int main()
{
	LEGOset1 set1;
	cout
		<< "set1: " << "\n"
		<< (void*)set1.name << "\n"
		<< (void*)set1.country << "\n"
		<< &set1.article << "\n"
		<< &set1.numofparts << "\n"
		<< &set1.price << "\n"
		<< &set1.availability << "\n"
		<< sizeof(set1.name) + sizeof(set1.country) + sizeof(set1.article) + sizeof(set1.numofparts) + sizeof(set1.price) + sizeof(set1.availability) << "\n"
		<< sizeof(set1) << "\n";
	LEGOset2 set2;
	cout
		<< "set2: " << "\n"
		<< (void*)set2.country << "\n"
		<< &set2.availability << "\n"
		<< (void*)set2.name << "\n"
		<< &set2.price << "\n"
		<< &set2.article << "\n"
		<< &set2.numofparts << "\n"
		<< sizeof(set2.name) + sizeof(set2.country) + sizeof(set2.article) + sizeof(set2.numofparts) + sizeof(set2.price) + sizeof(set2.availability) << "\n"
		<< sizeof(set2) << "\n";
	LEGOset3 set3;
	cout
		<< "set3: " << "\n"
		<< (void*)set3.name << "\n"
		<< (void*)set3.country << "\n"
		<< &set3.article << "\n"
		<< &set3.numofparts << "\n"
		<< &set3.price << "\n"
		<< &set3.availability << "\n"
		<< sizeof(set3.name) + sizeof(set3.country) + sizeof(set3.article) + sizeof(set3.numofparts) + sizeof(set3.price) + sizeof(set3.availability) << "\n"
		<< sizeof(set3) << "\n";

	return 0;
}