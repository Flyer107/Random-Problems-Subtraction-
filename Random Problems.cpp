//RandomProblems.cpp - Displays random problems
//Created by Kwesi Owubah in 2016. Revised on 07/24/2019

#include <iostream>
#include <ctime>
using namespace std;

//function prototype
int getRandomNumber(int lower, int upper);

int main()
{
	//declare variables
	int smallest, largest = 0;
	int num1, num2 = 0;
	int n1, n2;
	int correctAnswer, userAnswer = 0;

	//initialize rand function
	srand(static_cast<int>(time(0)));

	cout << "Smallest integer: ";
	cin >> smallest;
	cout << "Largest integer: ";
	cin >> largest;
	cout << endl;

	for (int x = 1; x < 6; x += 1)
	{	
		//generate two random integers
		//from smallest through largest.
		num1 = getRandomNumber(smallest, largest);
		num2 = getRandomNumber(smallest, largest);
		
		n1 = num1;
		n2 = num2;
		correctAnswer = num1 - num2;

		//kc, uc
		//display subtraction problem and get user's answer
		cout << "What is the difference of " << n1
			<< " - " << n2 << "? ";
		cin >> userAnswer;

		//detemine whether user's answer is correct
		if (userAnswer == correctAnswer)
			cout << "Correct!";

		else
			cout << "Sorry, the correct answer is "
			<< correctAnswer << ".";

		cout << endl << endl;

	}

	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
int getRandomNumber(int lower, int upper)
{
	int randInteger = 0;
	//generate random integer from lower through upper
	randInteger = lower + rand() % (upper - lower + 1);
	return randInteger;
}	//end of getRandomNumber function
