#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	a = c = 10;
	b = 100;
	if (a < b)
	{
		cout<<"a mniejsze od b";
	}
	if (a == c)
	{
		cout<<"a rowne c";
	}
	if (c < b)
	{
		cout <<"c mniejsze od b";
	}
	if (b > c)
	{
		cout <<"b wieksze od c";
	}

	return 0;
}