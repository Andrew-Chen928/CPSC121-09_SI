/*
This is from the random number guessing game. In this project, we limit the times that user 
can guess the random number. In order to do this, we need a counter to count the limitation, 
There are towns of way to do this project. Remember professor doesn't like you to use "break" 
instruction. So I just make a sample here without "break". If you have other idea, we can 
discuss and complete it in any SI session.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int random = rand() % 20 + 1;
	int guess, counter = 5;
	do{
		cout << "Enter a guess (between 1 ~ 20), you have " << counter << " times to hit the answer: ";
		cin >> guess;
		counter--;
		if (guess == random)
		{
			cout << "Correct! What a good guessor!" << endl;
		}
		else if (guess < random)
		{
			cout << "Sorry, the guess is too low !" << endl;
		}
		else
		{
			cout << "Sporry, the guess is too high !" << endl;
		}
	} while (guess != random && counter != 0);

	if (guess != random && counter == 0)
	{
		cout << "Almost there, but the correct answer is \"" << random << "\"" << endl;
	}

	system("pause");
	return 0;
}