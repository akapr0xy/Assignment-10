#include <iostream>

using namespace std;

//Initialize the normal variables, passing x and y
void normalTransaction(int x, int y);
//Same but with pointers instead
void hackedTransaction(int& x, int& y);

void secondaryNormalTransaction(short x, short y);

int main()
{
	int oldBalance = 150;
	int newBalance = 1000;
	short secondaryOldBalance = 300;
	short secondaryNewBalance = 2000;

	cout << "Original values" << endl;
	cout << "oldBalance: " << oldBalance << endl;
	cout << "newBalance: " << endl;

	cout << "Calling normalTransaction()\n";
	//Calling the old balance, and the balance you're going to switch it with
	normalTransaction(oldBalance, secondaryNewBalance);
	cout << "oldBalance: " << oldBalance << endl;
	cout << "newBalance: " << secondaryNewBalance << endl;

	cout << "Calling hackedTransaction()\n";
	//Switching the old balance with the new balance
	secondaryNormalTransaction(oldBalance, secondaryNewBalance);
	//The hacked balance becomes the "old balance"
	cout << "oldBalance: " << secondaryNewBalance << endl;
	cout << "newBalance: " << endl;
	system("pause");
	return 0;
}
//hi
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void secondaryNormalTransaction(short x, short y)
{
	short temp = x;
	x = y;
	y = temp;
}

void secondaryHackedTransaction(short& x, short& y)
{
	short temp = x;
	x = y;
	y = temp;
}