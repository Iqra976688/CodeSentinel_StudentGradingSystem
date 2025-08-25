#include <iostream>
#include <iomanip> // for table formatting
using namespace std;

int main()
{
    int n;
    cout << " Welcome to the Student Grade Calculator " << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "How many students do you want to enter? ";
    cin >> n;

    string names[100];   // store student names
    int marks[100][3];   // store 3 marks for each student
    int avg[100];        // store averages
    string grade[100];   // store grades

    // Input section
    for (int i = 0; i < n; i++)
    {
        cout << " Enter details for student " << (i + 1) << endl;
        cout << "Name: ";
        cin >> names[i];

        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << "Marks in Subject " << (j + 1) << ": ";
            cin >> marks[i][j];
            sum += marks[i][j];
        }

        avg[i] = sum / 3;

        // grading system
        if (avg[i] >= 90)
            grade[i] = "A";
        else if (avg[i] >= 75)
            grade[i] = "B";
        else if (avg[i] >= 60)
            grade[i] = "C";
        else
            grade[i] = "Fail";

        cout << " Record saved for " << names[i] << "." << endl;
        cout << "--------------------------------------------------" << endl;
    }

    // Final summary table
    cout << "\n Student Performance Summary" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << left << setw(15) << "Name"
         << setw(10) << "Subj1"
         << setw(10) << "Subj2"
         << setw(10) << "Subj3"
         << setw(10) << "Average"
         << setw(10) << "Grade" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(15) << names[i]
             << setw(10) << marks[i][0]
             << setw(10) << marks[i][1]
             << setw(10) << marks[i][2]
             << setw(10) << avg[i]
             << setw(10) << grade[i] << endl;
    }

    cout << "--------------------------------------------------" << endl;
    cout << " All student records processed successfully." << endl;

    return 0;
}
