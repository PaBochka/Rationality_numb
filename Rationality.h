#include <iostream>
using namespace std;
class Rationality
{ 
	int num;
	int tmp = num;
	int denum;
	int temp = denum;
public:
	Rationality(int a=0,int b=1);
	~Rationality();
	Rationality operator+(const Rationality &op2);
	Rationality operator-(const Rationality &op2);
	Rationality operator*(const Rationality &op2);
	Rationality operator/(const Rationality &op2);
	friend ostream &operator << (ostream &os, const Rationality &val);
	friend istream &operator >> (istream &is, Rationality &val);
	int nod(int a, int b)
	{
		while (abs(a) != abs(b))
		{
			if (abs(a) > abs(b))
				a -= abs(b); else b -= abs(a);
		}
		return abs(a);
	}
private:
	void abr(void)
	{
		int a = nod(num, denum);
		if (a != 1){ num /= a; denum /= a; }
	}
};

