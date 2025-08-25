
#include <iostream>
using namespace std;
int main()
{
	int n;
	string sub[3] = {};
	int marks[3] = {};
	cout << "Enter the number of students to calculate their average marks:";
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cout << "Enter the name of three subjects to calculate average: ";
		cin >> sub[0] >> sub[1] >> sub[2];
		cout << "Enter the marks of " << sub[0] << ": ";
		cin >> marks[0];
		cout << "Enter the marks of " << sub[1] << ": ";
		cin >> marks[1];
		cout << "Enter the marks of " << sub[2] << ": ";
		cin >> marks[2];
		int avg = (marks[0] + marks[1] + marks[2]) / 3;
		cout << "The average marks of student " << i << " is: " << avg << endl;
		if(avg >= 90)
			cout << "Grade: A" << endl;
		else if(avg >= 80)
			cout << "Grade: B" << endl;
		else if(avg >= 70)
			cout << "Grade: C" << endl;
		else if(avg >= 60)
			cout << "Grade: D" << endl;
		else
			cout << "Grade: F" << endl;
		cout << "----------------------------------------" << endl;

	}
	return 0;
}