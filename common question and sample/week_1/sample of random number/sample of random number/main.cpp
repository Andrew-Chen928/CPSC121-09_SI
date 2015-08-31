/*
This is the extention question from 8/27/2015 lecture, the porpose of this questoin is that make sure
you know how to use while / do-while loop , set the condition properly. and also practice how to generate
random numbers by calling srand() and rand() functions
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int random = rand() % 20 + 1;
	int guess;
	do{
		 cout << "Enter a guess (between 1 ~ 20) : " ;
		 cin >> guess;
		 if (guess == random)
		 {
		   	cout << "Correct! What a good guessor!" << endl;
		 }
		 else if (guess < random)
		 {
			cout << "Sorry, the guess is too low, please try again." << endl;
		 }
		 else
		 {
			cout << "Sporry, the guess is too high, please try again." << endl;
	 	 }
	} while (guess != random);

	system("pause");
	return 0;
}