#include "programming.h"
#include "Biology.h"
#include "Maths.h"
#include "viewCourses.h"
void viewCourses(int points, char& option, char answer[]) // Use references
{
    system("cls");
    cout << "Pick Subject" << endl;
    cout << "1. Programming" << endl;
    cout << "2. Maths" << endl;
    cout << "3. Biology" << endl;
    cout << "4. Physics" << endl;
    cin >> option;
    system("cls");
    switch (option)
    {
    case '1': programming(points, answer); break;
    case '2': maths(points, answer); break;
    case '3': biology(points, answer); break;
    case '4': physics(points, answer); break;
    default: cout << "Invalid choice. Please enter a valid option.";
    }
}