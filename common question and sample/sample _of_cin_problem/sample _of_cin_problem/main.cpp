#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, name2;
	int age, age2;
	double average;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore(); // when we hit the "Enter" button, it actually could be determind as a charecter, so after the user
				  // type the first age and hit "Enter", there is a character 'return' right after the input number. 
				  // but cin >> age will just take the number and assign into the integer variable "age", the 'return' is 
				  // still at the end of that line. that's the reason the next question ask for friend's name will just 
				  // get the 'return' and directly take the 'return' assign into name2 (getline can take character type into string,
				  // 'return' is a character), then it looks like ignore the name and pop out the next prompt (asking for age)
				  // the cin.ignore() we use here will ignore the 'return' , so getline will wait for the user input another 
				  // name. 
	cout << "Enter your friend's name: ";
	getline(cin, name2);
	cout << "Enter your friend's age: ";
	cin >> age2;
	average = (age + age2) / 2.;
	cout << "The average age is " << average << endl;

	system("pause");
	return 0;
}