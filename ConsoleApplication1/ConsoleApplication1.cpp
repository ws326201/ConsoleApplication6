// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void Welcome()
{
	cout << "Welcome to the program \n";
}

void Welcome(string sName)
{
	cout << "Welcome to the program " << sName << "\n";
}

string GetName()
{
	string sName = "";
	cout << "Please enter your name \n";
	cin >> sName;

	return sName;

}

int GetNumber()
{
	int iNumber = 0;

	cout << "Please enter a number \n";
	cin >> iNumber;

	return iNumber;
}

int Add(int iNumber1, int iNumber2)
{
	return iNumber1 + iNumber2;
}


int main()
{
	Welcome();

	string sName = GetName();
	Welcome(sName);

	int iNumber1 = GetNumber();
	int iNumber2 = GetNumber();

	cout << "The total of the number is " << Add(iNumber1, iNumber2);
	_getch();

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
