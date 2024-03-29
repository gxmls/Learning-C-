/* 1-1我爱C++（20分）
题目内容：
在屏幕上显示下列两句话
Hello C++.
I like programming. */

#include<iostream>
using namespace std;
int main()

{
	cout << "Hello C++." << endl;
	cout << "I like programming." << endl;
	return 0;
}

/* 
1-2来自系统的问候（20分）
题目内容：
编写程序，输入一个人的名字，系统显示Hello ***.。
人名中间可能会有空格。

#include<iostream>
using namespace std;
int main()

{
	char name[40];
	cin.getline(name, 40);
	cout << "Hello " << name << "."<<endl;
	return 0;
}

1-3乘法计算器（20分）
题目内容：
编写一个乘法计算器程序。用户输入两个数，计算它们的乘积并显示。
程序运行结果如下：
3.4  72
244.8

#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	double a, b, c;
	cin >> a >> b;
	c = a * b;
	cout << c << endl;
	return 0;
}

1-4单位换算（20分）
题目内容：
编写一个程序，将英寸换算为厘米。输入英寸，输出厘米。
换算关系：1inch=2.54cm
程序运行结果如下：
14
14inch=35.56cm

#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	double a, b;
	cin >> a;
	b = a * 2.54;
	cout <<a<<"inch="<<b<<"cm" <<endl;
	return 0;
}

1-5平方根计算器（20分）
题目内容：
编写程序，计算一个正数的平方根。用户输入一个正数（可能为实数），输出它的平方根。
程序运行结果如下：
2
1.41421

#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	double a, b;
	cin >> a;
	b = sqrt(a);
	cout <<b<<endl;
	return 0;
}

显示Hello World!（10分）
编写C++程序，在屏幕上显示“Hello World!”。 

#include<iostream>
using namespace std;
int main()

{
	cout << "Hello World!" << endl;
	return 0;
}

显示唐诗（10分）
编写C++程序，在屏幕上显示下列唐诗：
慈母手中线
游子身上衣
临行密密缝
意恐迟迟归
谁言寸草心
报得三春晖

#include<iostream>
using namespace std;
int main()

{
	cout << "慈母手中线" << endl;
	cout << "游子身上衣" << endl;
	cout << "临行密密缝" << endl;
	cout << "意恐迟迟归" << endl;
	cout << "谁言寸草心" << endl;
	cout << "报得三春晖" << endl;
	return 0;
}

显示一句话（10分）
题目内容：
编写C++程序，输入姓名，在屏幕上显示如下格式的文字：
This program is coded by ***.
其中“***”是输入的名字。如输入“ZhangSan”，则显示：
This program is coded by ZhangSan.
注意，姓名中间没有空格，末尾有英文句号。
输入格式:
一个无空格的字符串，长度不超过50
输出格式：
含输入的姓名的句子,单词间有一个空格。

#include<iostream>
using namespace std;
int main()

{
	char name[50];
	cin >> name;
	cout << "This program is coded by " << name << "." << endl;
	return 0;
}

还是一句话（10分）
题目内容：
编写C++程序，输入姓名，在屏幕上显示如下格式的文字：
This program is coded by ***.
其中“***”是输入的名字。如输入“Zhang San”，则显示：
This program is coded by Zhang San.
注意，姓名中间可能有空格，末尾有英文句号。
输入格式:
一个可能含空格的字符串，长度不超过50.
输出格式：
含输入的姓名的句子,单词间有一个空格，姓名按原样输出。

#include<iostream>
using namespace std;
int main()

{
	char name[50];
	cin.getline(name,50);
	cout << "This program is coded by " << name << "." << endl;
	return 0;
}

计算矩形周长（10分）
题目内容：
输入矩形的两个边的长度，计算矩形的周长。
输入格式:
两个整数，用空格隔开
输出格式：
一个整数。

#include<iostream>
using namespace std;
int main()

{
	int a,b,c;
	cin >> a >> b;
	c = 2 * (a + b);
	cout << c<< endl;
	return 0;
}

已知直角边求斜边（10分）
题目内容：
输入一个三角形的两个直角边的长度，求其斜边的长度：计算公式是
 c=sqrt(a*a+b*b)
其中, a,b是两个直角边的长度，c是斜边，sqrt表示开平方。
输入格式:
两个double型实数，用空格隔开。
输出格式：
一个实数

#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	double a,b,c;
	cin >> a >> b;
	c = sqrt(a*a+b*b);
	cout << c<< endl;
	return 0;
}

*/
