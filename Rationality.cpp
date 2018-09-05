#include "Rationality.h"
#include <iostream>
using namespace std;
Rationality::Rationality(int a,int b)
{
	num = a; denum = b;
	int tmp = num; int temp = denum;
	int i = nod(num, denum);
	num /= i; denum /= i;
}
Rationality::~Rationality()
{
}
Rationality Rationality::operator + (const Rationality &op2)
{
	Rationality res;
	res.denum = denum*op2.denum;
	res.num = num*op2.denum + op2.num*denum;
	res.abr();
	return res;
}
Rationality Rationality::operator - (const Rationality &op2)
{
	Rationality res;
	res.denum = denum*op2.denum;
	res.num = num*op2.denum - op2.num*denum;
	res.abr();
	//if (res == 0)
	//	cout << "0";
	return res;
}
Rationality Rationality::operator * (const Rationality &op2)
{
	Rationality res;
	res.denum = denum*op2.denum;
	res.num = num*op2.num;
	res.abr();
	return res;
}
Rationality Rationality::operator / (const Rationality &op2)
{
	Rationality res;
	res.num = num*op2.denum;
	res.denum = denum*op2.num;
	res.abr();
	return res;
}
ostream &operator << (ostream &os, const Rationality &val)
{
	if (val.num ==0)
		os << "0";
	else if (val.denum == 1)
		os << val.num;
	else os << val.num << "/" << val.denum;
	return os;
}
istream &operator >> (istream &is, Rationality &val)
{
	if (val.denum < 0)
	{
		val.num = val.num*(-1);
		val.denum = val.denum*(-1);
	}
	is >> val.num;
	is >> val.denum;
	return is;
}
//double Rationality::operator*(double a)
//{
//	double res;
//	res = (num / denum)*a;
//	return res;
//}
