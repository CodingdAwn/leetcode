#include "common.h"

int GiveMeAnInteger()
{
	cout << "Please type a Integer!" << endl;
	char szBuffer[128] = {0};
	std::cin.get(szBuffer, sizeof(szBuffer));
	
	int input = atoi(szBuffer);

	// to get the \r\t
	std::cin.get();

	return input;
}

void LoopInputNumberToCall(std::function<void(char* input)> func)
{
	while(1)
	{
		cout << "Please type a Integer array!" << endl;
		char szBuffer[128] = {0};
		std::cin.get(szBuffer, sizeof(szBuffer));
		
		// to get the \r\t
		std::cin.get();
		string input = szBuffer;
	   	if (input.compare("exit") == 0)
			break;
		func(szBuffer);	
	}
}

void LoopInputNumberToCall2(std::function<void(char* input1, char* input2)> func)
{
	while(1)
	{
		cout << "Please type Integer numbers1" << endl;
		char szBuffer1[128] = {0};
		std::cin.get(szBuffer1, sizeof(szBuffer1));

		// to get the \r\t
		std::cin.get();
		string input1 = szBuffer1;
	   	if (input1.compare("exit") == 0)
			break;

		cout << "Please type Integer numbers2" << endl;
		char szBuffer2[128] = {0};
		std::cin.get(szBuffer2, sizeof(szBuffer2));

		// to get the \r\t
		std::cin.get();
		string input2 = szBuffer2;
	   	if (input2.compare("exit") == 0)
			break;

		func(szBuffer1, szBuffer2);
	}
}

bool isCharOrNumber(char c)
{
  return isalpha(c) || isdigit(c);
}
