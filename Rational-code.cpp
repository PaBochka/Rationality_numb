#include"Rationality.h"
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	Rationality A(4, 1);
	Rationality B(2, 4);
	cout << A << endl;
	cout << B << endl;
	cout << A + B;
	_getch();
	return 0;
}