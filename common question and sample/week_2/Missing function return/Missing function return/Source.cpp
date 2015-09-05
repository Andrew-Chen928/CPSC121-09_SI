/*
The mistake in this project is inside the function "grade_convert". If your function have a real return type 
(could be int, float, bool, char...) which is not void, you need to check all the situation especially when 
you use condition control statement. For example in the function "grade_convert", there is a return char for 
all different ocndition when x >= 60. But there is no return char for the else condition (x < 60). In this case
if the user input a number less than 60, the caller function (here is main function) will confuse about the 
return value. It will cause unexpect result. Sometimes your IDE will check for this situation and remind you, but
sometimes IDE may not find the mistake. 
*/

#include <iostream>
using namespace std;


char grade_convert(int x)
{
	if (x >= 90) return 'A';
	else if (x < 90 && x >= 80) return 'B';
	else if (x < 80 && x >= 70) return 'C';
	else if (x < 70 && x >= 60) return 'D';
	else cout << "you fail!!!" << endl;
}

int main()
{
	int grade;
	char letter_grade;
	cout << "Enter your grade: ";
	cin >> grade;
	letter_grade = grade_convert(grade);
	cout << "Your grade is " << letter_grade << " !" << endl;
	system("pause");
	return 0;
}