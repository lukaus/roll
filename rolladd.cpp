#include <iostream>
#include <limits.h>
#include "Dice.cpp"
#include <ctime>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(clock() * getpid());

	if(argc == 1)
	{
		cout << "No input\n";
		return -1;
	}

	if(argc == 2)
	{

		cout << Dice::roll(atoi(argv[1])) << endl;
		return 0;
	}

	if(argc == 3)
	{
		if(argv[1] == 0 || argv[2] == 0)
			return 0;

		if(atoi(argv[1]) == 1)
		{
			cout << Dice::roll(atoi(argv[2])) << endl;
			return 0;
		}

		int total = 0;
		int roll = Dice::roll(atoi(argv[2]));
		cout << roll;
		total += roll;
		for(int i = atoi(argv[1]) -1; i >0; i--)
		{
			
			roll = Dice::roll(atoi(argv[2]));
			cout << " + " << roll;
			total += roll;
		}
		cout << " = " << endl << total << endl;
		return 0;
	}

	if(argc == 4)
	{
		string oper = argv[2];
		if(oper == "+")
		{
			int roll = Dice::roll(atoi(argv[1]));
			cout << roll << " + " << atoi(argv[3]) << " = " << endl;
			cout << roll + atoi(argv[3]) << endl;

		}
		else if(oper == "-")
		{

			int roll = Dice::roll(atoi(argv[1]));
			cout << roll << " - " << atoi(argv[3]) << " = " << endl;
			cout << roll - atoi(argv[3]) << endl;

		}
		else
		{
			cout << "Invalid input.\n";
			return -1;
		}


		return 0;
	}

	if(argc == 5)
	{

		if(argv[1] == 0 || argv[2] == 0)
			return 0;

		if(atoi(argv[1]) == 1)
		{
				cout << "Invalid input, if its just one then run:\n";
				cout << argv[0] << " " << argv[2] << " " << argv[3] << " " << argv[4] << endl;
				return -1;
		}

		string oper = argv[3];
		if(oper == "+")
		{
			int total = atoi(argv[4]);
			int roll = Dice::roll(atoi(argv[2]));
			cout << roll;
			total += roll;
			for(int i = atoi(argv[1]) -1; i >0; i--)
			{
				
				roll = Dice::roll(atoi(argv[2]));
				cout << " + " << roll;
				total += roll;
			}
			cout << " + " << argv[4] << " = " << endl << total << endl;
			return 0;

		}
		else if(oper == "-")
		{

			int total = 0 - atoi(argv[4]);
			int roll = Dice::roll(atoi(argv[2]));
			cout << roll;
			total += roll;
			for(int i = atoi(argv[1]) -1; i >0; i--)
			{
				
				roll = Dice::roll(atoi(argv[2]));
				cout << " + " << roll;
				total += roll;
			}
			cout << " - " << argv[4] << " = " << endl << total << endl;
			return 0;

		}
		else
		{
			cout << "Invalid input.\n";
			return -1;
		}
		return 0;
	}
	return 0;

}