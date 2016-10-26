#include<iostream>
#include"Header T.h"
#include<Windows.h>
using namespace std;

int main()
{
	cout<<Max<int>(1, 253);
	cout<<Min<int>(1, 900);
	cout<<clamp<int>(0, 5, 2);
	cout << Max<char>('a', 'b');
	cout << Min<char>('a', 'b');




	system ("pause");
	return 1;
};