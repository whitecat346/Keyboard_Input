#include <iostream>
#include <cstring>
#include <Windows.h>
#include <ctype.h>
#include <thread>

using namespace std;
string str;
int longer;
int priNum;
bool capsLock = false;
bool slep = false;

void printI()
{
	if (capsLock == false)
	{
		keybd_event(priNum, 0, 0, 0);
		keybd_event(priNum, 0, KEYEVENTF_KEYUP, 0);
		Sleep(50);
	}
	else
	{
		keybd_event(20, 0, 0, 0);
		keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(priNum, 0, 0, 0);
		keybd_event(priNum, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(20, 0, 0, 0);
		keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
		capsLock = false;
		Sleep(50);
	}
}

void strCho(char chS)
{
	if (isalnum(chS))
	{
		if (isalpha(chS))
		{
			if (isupper(chS))
			{
				capsLock = true;
				priNum = (int)chS;
				printI();
			}
			else
			{
				priNum = (int)chS - 32;
				printI();
			}
		}
		else 
		{
			priNum = (int)chS;
			printI();
		}
	}
	else if (ispunct(chS))
	{
		priNum = (int)chS;
		printI();
	}
	else
	{
		cout << "*" << endl;
		keybd_event(106, 0, 0, 0);
		keybd_event(106, 0, KEYEVENTF_KEYUP, 0);
	}
}

void sle(unsigned int time)
{
	cout << "将在5秒后自动关闭！" << endl;
	cout << "如需再次启动请按任意键！" << endl;
	Sleep(time);
	if (slep == true)
	{
		exit(0);
	}
	return;
}

int main()
{
start:
	cout << "输入：" << endl;
	cin >> str;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] < 0) i++;
		longer++;
	}

	cout << "将在5秒后运行！" << endl;
	Sleep(5000);

	int strAt = 0;
	for (int i = 0; i < longer; i++)
	{
		char ch;
		ch = str.at(strAt);
		strAt++;
		cout << "ch " << ch << endl;
		strCho(ch);
		Sleep(50);
	}

        slep = true
	thread slp(sle, 5000);
	slp.detach();

	system("pause");
	slep = false;
	system("cls");
	goto start;
	
	return 0;
}
