// Chuck Norris.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	string MESSAGE;
	getline(cin, MESSAGE);

	string bitMessage;
	for (int i = 0; i < MESSAGE.size(); i++)
	{
		bitMessage += bitset<7>(MESSAGE.c_str()[i]).to_string();
	}

	int i = 0;
	while (i < bitMessage.size())
	{
		if (bitMessage[i] == '0')
		{
			cout << "00 ";
			for (; i < bitMessage.size() && bitMessage[i] == '0'; i++)
				cout << "0";

			if (i < bitMessage.size())
				cout << " ";
		}
		else
		{
			cout << "0 ";
			for (; i < bitMessage.size() && bitMessage[i] == '1'; i++)
				cout << "0";

			if (i < bitMessage.size())
				cout << " ";
		}
	}

	cout << endl;

}

