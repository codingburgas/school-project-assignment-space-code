#include "programming.h"
#include "biology.h"
#include "maths.h"
#include "viewCourses.h"
#include "english.h"
#include "physics.h"
void viewCourses(int points, char& option, char answer[]) // Use references
{
    system("cls");
    cout << "Pick Subject" << endl;
    cout << "1. Programming" << endl;
    cout << "2. Maths" << endl;
    cout << "3. English" << endl;
    cout << "4. Physics" << endl;
    cout << "5. Biology" << endl;
    cin >> option;
    system("cls");
    switch (option)
    {
    case '1': programming(points, answer); break;
    case '2': maths(points, answer); break;
    case '3': english(points, answer); break;
    case '4': physics(points, answer); break;
    case '5': biology(points, answer); break;
    default: cout << "Invalid choice. Please enter a valid option.";
    }
}