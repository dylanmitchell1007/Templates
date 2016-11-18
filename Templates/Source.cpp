#include<iostream>
#include"Header T.h"
#include<Windows.h>
using namespace std;

int main()
{
	cout<<Max(1, 253);
	cout<<Min(1, 900);
	cout<<clamp(0, 5, 2);
	cout<<Max('a', 'b');
	cout<<Min('a', 'b');
	cout<<atr(3);




	system ("pause");
	return 1;
};