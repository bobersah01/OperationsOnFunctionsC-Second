#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//I created only main function and did every operation in it.
int main()
{
	//We have two parameters for collecting datas from the user.
	string userName;
	string userChoice;

	cout << "Let's play a game called 'Odds and Evens'" << endl;
	cout << "What is your name? ";
	cin >> userName;

	//I am controlling the user choice with do-while operation.
	do
	{
		cout << "Hi " << userName << ", Which do you choose? (O)dds or (E)vens ";
		cin >> userChoice;
	} while (userChoice != "O" && userChoice != "E");

	//We are determining who is odd and who is even.
	if (userChoice == "O")
	{
		cout << userName << " has picked odds! The computer will be evens." << endl;
	}
	else
	{
		cout << userName << " has picked evens! The computer will be odds." << endl;
	}

	cout << "----------------------------------------------" << endl;
	cout << endl;

	//We have other parameters for defining numbers of users. 
	int howManyFinger;
	int computerFinger;
	int sum; //howManyFinger + computerFinger
	bool oddOrEven; //If sum equals odd, even.

	srand(time(0)); //This is used for generating random numbers with real time.
	//When we dont use this function, generated numbers always will be same.
	//srand(static_cast<unsigned int>(time(nullptr)));

	//Entered numbers must be between 0 and 5.
	do
	{
		cout << "How many 'fingers' do you put out? ";
		cin >> howManyFinger;
	} while (howManyFinger < 0 || howManyFinger>5);

	//Firstly, I misunderstood the question so that do it like this situation.
	/*if (howManyFinger % 2 == 0) //which means even
	{
		computerFinger = (rand() % 6); //We are generating random numbers between 0 and 6.
	}
	else
	{
		computerFinger = (rand() % 6); //As same as above random function.
	}*/

	computerFinger = (rand() % 6);

	cout << "The computer plays " << computerFinger << " fingers." << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;

	sum = howManyFinger + computerFinger;

	oddOrEven = (sum % 2 == 0);
	cout << howManyFinger << " + " << computerFinger << " = " << sum << endl;

	//We are determining who wins.
	if (oddOrEven)
	{
		cout << sum << " is ...even!" << endl;
		if (userChoice == "E")
			cout << "That means " << userName << " wins! :)" << endl;
		else
			cout << "That means computer wins! :)" << endl;
	}
	else
	{
		cout << sum << " is ...odd!" << endl;
		if (userChoice == "O")
			cout << "That means " << userName << " wins! :)" << endl;
		else
			cout << "That means computer wins! :)" << endl;
	}
	cout << "----------------------------------------------" << endl;
}