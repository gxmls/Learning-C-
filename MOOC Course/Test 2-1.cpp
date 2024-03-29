/2-1 温度转换（20分）
题目内容：
输入华氏温度，用下列公式将其转换为摄氏温度并输出。
C=5/9*(F-32)
输入格式：
   实数
输出格式：
转换后的摄氏温度，实数。

输入样例：
80
输出样例：
26.6667/

#include<iostream>
using namespace std;
int main()
{
	double C, F;
	cin >> F;
	C = 5.0/9*(F - 32);
	cout << C << endl;
	return 0;
}

/2-2 计算数学函数式的值（20分）
题目内容：
编程求函数
y=sin(x*x)/(1-cos(x))
的值。

输入格式：
实数,大于0.

输出格式：
实数
输入样例：
0.1
输出样例：
2.00163

提示：正弦和余弦三角函数的值是通过数学库函数sin(x)（正弦）、cos(x)（余弦）来计算，需要包含头文件<cmath>。/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,y;
	cin >> x;
	y=sin(x*x)/(1-cos(x));
	cout << y << endl;
	return 0;
}

/2-3 数据的简单统计（20分）
题目内容：
编程实现，用户从键盘输入3个整数，计算并打印这三个数的和、平均值及平均值的四舍五入整数值。
注意:输入的三个整数、它们的和、平均值的四舍五入值用整型变量表示，平均值用双精度变量表示。
输入格式：
三个整数，中间用空格隔开。
输出格式：
计算结果，整数、实数和整数，分别表示：和、平均值及平均值的四舍五入整数值，分三行输出。
输入样例：
3 6 8
输出样例：
17
5.66667
6
技巧提示：四舍五入：实数加0.5，再取整（转换为int型数）。/

#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int sum, A;
	double ave;
	cin >> a>>b>>c;
	sum = a + b + c;
	ave = (a + b + c) / 3.0;
	A = int(ave + 0.5);
	cout << sum << endl;
	cout << ave << endl;
	cout << A << endl;
	return 0;
}

/2-4 找零钱（20分）
题目内容：
为顾客找零钱时，希望选用的纸币张数最少。例如73元，希望零钱的面值为五十元1张，二十元1张，一元3张。设零钱面值有五十元、二十元、十元、五元和一元，请编写程序，用户输入100以下的数，计算找给顾客的各面值的纸币张数，数据间以空格隔开。
输入格式：
一个小于100、大于等于0的整数。
输出格式：
5个整数，数据间用一个英文空格分隔。
输入样例：
73
输出样例：
1 1 0 0 3/

#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int sum, A;
	double ave;
	cin >> a>>b>>c;
	sum = a + b + c;
	ave = (a + b + c) / 3.0;
	A = int(ave + 0.5);
	cout << sum << endl;
	cout << ave << endl;
	cout << A << endl;
	return 0;
}

/2-5 小写转大写（20分）
题目内容：
用户输入一个字符，如果是小写字母输出对应的大写字母，其他字符不转换。
提示：使用三目条件运算符 ...？... ：...
输入格式：
一个字符
输出格式：
一个字符
输入样例：
d
输出样例：
D/

#include<iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	((x >= 'a') && (x <= 'z')) ? (x = x - 32) : x;
	cout << x << endl;
	return 0;
}
