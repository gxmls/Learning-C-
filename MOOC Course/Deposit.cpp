#include<iostream>
#include<cmath>  //pow函数需要头文件cmath
using namespace std;
int main()
{
	double money,sum, years, rate;
	cin >> money >> years >> rate;
	while (money>0)
	{
		sum = money * pow((1 + rate), years);
		cout << sum << endl;
		cin >> money >> years >> rate;
	}
	return 0;
}
