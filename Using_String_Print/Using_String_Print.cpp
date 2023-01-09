//20230109 19:42
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;
int Longer;

int getLong(string str)
{
	int count = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < 0) i++;
		count++;
		Longer = count;
	}

	return 0;
}

void print(string str)
{
	int longer = -1;
	for (int i = 1; i < Longer; i++)
	{
		longer++;
		char zfc = str.at(longer);
		if (zfc == 'a')
		{
			keybd_event(65, 0, 0, 0);
			keybd_event(65, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'b')
		{
			keybd_event(66, 0, 0, 0);
			keybd_event(66, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'c')
		{
			keybd_event(67, 0, 0, 0);
			keybd_event(67, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'd')
		{
			keybd_event(68, 0, 0, 0);
			keybd_event(68, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'e')
		{
			keybd_event(69, 0, 0, 0);
			keybd_event(69, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'f')
		{
			keybd_event(70, 0, 0, 0);
			keybd_event(70, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'g')
		{
			keybd_event(71, 0, 0, 0);
			keybd_event(71, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'h')
		{
			keybd_event(72, 0, 0, 0);
			keybd_event(72, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'i')
		{
			keybd_event(73, 0, 0, 0);
			keybd_event(73, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'j')
		{
			keybd_event(74, 0, 0, 0);
			keybd_event(74, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'k')
		{
			keybd_event(75, 0, 0, 0);
			keybd_event(75, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'l')
		{
			keybd_event(76, 0, 0, 0);
			keybd_event(76, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'm')
		{
			keybd_event(77, 0, 0, 0);
			keybd_event(77, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'n')
		{
			keybd_event(78, 0, 0, 0);
			keybd_event(78, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'o')
		{
			keybd_event(79, 0, 0, 0);
			keybd_event(79, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'p')
		{
			keybd_event(80, 0, 0, 0);
			keybd_event(80, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'q')
		{
			keybd_event(81, 0, 0, 0);
			keybd_event(81, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'r')
		{
			keybd_event(82, 0, 0, 0);
			keybd_event(82, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 's')
		{
			keybd_event(83, 0, 0, 0);
			keybd_event(83, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 't')
		{
			keybd_event(84, 0, 0, 0);
			keybd_event(84, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'u')
		{
			keybd_event(85, 0, 0, 0);
			keybd_event(85, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'v')
		{
			keybd_event(86, 0, 0, 0);
			keybd_event(86, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'w')
		{
			keybd_event(87, 0, 0, 0);
			keybd_event(87, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'x')
		{
			keybd_event(88, 0, 0, 0);
			keybd_event(88, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'y')
		{
			keybd_event(89, 0, 0, 0);
			keybd_event(89, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'z')
		{
			keybd_event(90, 0, 0, 0);
			keybd_event(90, 0, KEYEVENTF_KEYUP, 0);
		}
		if (zfc == 'A')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(65, 0, 0, 0);
			keybd_event(65, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'B')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(66, 0, 0, 0);
			keybd_event(66, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'C')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(67, 0, 0, 0);
			keybd_event(67, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'D')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(68, 0, 0, 0);
			keybd_event(68, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'E')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(69, 0, 0, 0);
			keybd_event(69, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'F')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(70, 0, 0, 0);
			keybd_event(70, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'G')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(71, 0, 0, 0);
			keybd_event(71, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'H')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(72, 0, 0, 0);
			keybd_event(72, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'I')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(73, 0, 0, 0);
			keybd_event(73, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'J')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(74, 0, 0, 0);
			keybd_event(74, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'K')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(75, 0, 0, 0);
			keybd_event(75, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'L')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(76, 0, 0, 0);
			keybd_event(76, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'M')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(77, 0, 0, 0);
			keybd_event(77, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'N')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(78, 0, 0, 0);
			keybd_event(78, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'O')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(79, 0, 0, 0);
			keybd_event(79, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'P')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(80, 0, 0, 0);
			keybd_event(80, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'Q')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(81, 0, 0, 0);
			keybd_event(81, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'R')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(82, 0, 0, 0);
			keybd_event(82, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'S')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(83, 0, 0, 0);
			keybd_event(83, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'T')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(84, 0, 0, 0);
			keybd_event(84, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'U')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(85, 0, 0, 0);
			keybd_event(85, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'V')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(86, 0, 0, 0);
			keybd_event(86, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'W')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(87, 0, 0, 0);
			keybd_event(87, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'X')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(88, 0, 0, 0);
			keybd_event(88, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'Y')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(89, 0, 0, 0);
			keybd_event(89, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == 'Z')
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(90, 0, 0, 0);
			keybd_event(90, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '&')
		{
			keybd_event(32, 0, 0, 0);
			keybd_event(32, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '1')
		{
			keybd_event(49, 0, 0, 0);
			keybd_event(49, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '2')
		{
			keybd_event(50, 0, 0, 0);
			keybd_event(50, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '3')
		{
			keybd_event(51, 0, 0, 0);
			keybd_event(51, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '4')
		{
			keybd_event(52, 0, 0, 0);
			keybd_event(52, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '5')
		{
			keybd_event(53, 0, 0, 0);
			keybd_event(53, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '6')
		{
			keybd_event(54, 0, 0, 0);
			keybd_event(54, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '7')
		{
			keybd_event(55, 0, 0, 0);
			keybd_event(55, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '8')
		{
			keybd_event(56, 0, 0, 0);
			keybd_event(56, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '9')
		{
			keybd_event(57, 0, 0, 0);
			keybd_event(57, 0, KEYEVENTF_KEYUP, 0);
		}
		else if (zfc == '0')
		{
			keybd_event(47, 0, 0, 0);
			keybd_event(47, 0, KEYEVENTF_KEYUP, 0);
		}
		else //中文，特殊字符处理： 转为 *
		{
			keybd_event(106, 0, 0, 0);
			keybd_event(106, 0, KEYEVENTF_KEYUP, 0);
		}
		Sleep(100);
	}
}

int main()
{
	string s;
	cout << "输入：" << endl;
	cin >> s;

	getLong(s);

	cout << "将在5秒后输出！" << endl;
	Sleep(5000);
	print(s);

	cin.get();
	return 0;
}