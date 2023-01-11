#include <iostream>
#include <sstream>
#include <Windows.h>
#include <ctype.h>

using namespace std;

int longer;
char key;
int printNum;
bool bigLitter;

void print()
{
	if (bigLitter == true)
	{
		if (GetKeyState(VK_CAPITAL) == true)
		{
			keybd_event(printNum, 0, 0, 0);
			keybd_event(printNum, 0, KEYEVENTF_KEYUP, 0);
			bigLitter = false;
		}
		else
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(printNum, 0, 0, 0);
			keybd_event(printNum, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			bigLitter = false;
		}
	}
	else
	{
		if (GetKeyState(VK_CAPITAL) == true)
		{
			keybd_event(20, 0, 0, 0);
			keybd_event(20, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(printNum, 0, 0, 0);
			keybd_event(printNum, 0, KEYEVENTF_KEYUP, 0);
		}
		else
		{
			keybd_event(printNum, 0, 0, 0);
			keybd_event(printNum, 0, KEYEVENTF_KEYUP, 0);
		}
	}
}

void litter(char keyL)
{
	if (keyL == 'a') printNum = 65;
	else if (keyL == 'b') printNum = 66;
	else if (keyL == 'c') printNum = 67;
	else if (keyL == 'd') printNum = 68;
	else if (keyL == 'e') printNum = 69;
	else if (keyL == 'f') printNum = 70;
	else if (keyL == 'g') printNum = 71;
	else if (keyL == 'h') printNum = 72;
	else if (keyL == 'i') printNum = 73;
	else if (keyL == 'j') printNum = 74;
	else if (keyL == 'k') printNum = 75;
	else if (keyL == 'l') printNum = 76;
	else if (keyL == 'm') printNum = 77;
	else if (keyL == 'n') printNum = 78;
	else if (keyL == 'o') printNum = 79;
	else if (keyL == 'p') printNum = 80;
	else if (keyL == 'q') printNum = 81;
	else if (keyL == 'r') printNum = 82;
	else if (keyL == 's') printNum = 83;
	else if (keyL == 't') printNum = 84;
	else if (keyL == 'u') printNum = 85;
	else if (keyL == 'v') printNum = 86;
	else if (keyL == 'w') printNum = 87;
	else if (keyL == 'x') printNum = 88;
	else if (keyL == 'y') printNum = 89;
	else if (keyL == 'z') printNum = 90;

	print();
}

void number()
{
	if (key == '0') printNum = 48;
	else if (key == '1') printNum = 49;
	else if (key == '2') printNum = 50;
	else if (key == '3') printNum = 51;
	else if (key == '4') printNum = 52;
	else if (key == '5') printNum = 53;
	else if (key == '6') printNum = 54;
	else if (key == '7') printNum = 55;
	else if (key == '8') printNum = 56;
	else printNum = 57;

	print();
}

void keyChoose(string str)
{
	int cs = 0;
	for (int i = 0; i < longer; i++)
	{
		key = str.at(cs);
		cs++;
		Sleep(20);

		if (isalpha(key) == true)
		{
			if (islower(key) == false)
			{
				key = tolower(key);
				bigLitter = true;
			}
			else
			{
				bigLitter = false;
			}
			litter(key);
			Sleep(20);
		}
		else if (isdigit(key) == true) number();
		else
		{
			keybd_event(106, 0, 0, 0);
			keybd_event(106, 0, KEYEVENTF_KEYUP, 0);
		}
		Sleep(100);
	}
}

void getLong(string zf)
{
	for (int i = 0; zf[i]; i++)
	{
		if (zf[i] < 0) i++;
		longer++;
	}
}

int main()
{
	string str;

	cout << "输入：" << endl;
	cin >> str;

	getLong(str);

	cout << "将在5秒后打印！" << endl;
	Sleep(5000);
	keyChoose(str);

	system("pause");
	return 0;
}