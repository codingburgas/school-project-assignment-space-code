#include "programming.h"
#include "biology.h"
#include "maths.h"
#include "viewCourses.h"

void displayMainMenu()
{
    cout << endl << "------ Digital School Main Menu ------" << endl;
    cout << "1. viewCourses" << endl;
    cout << "2. Grades" << endl;
}


int main()
{
    char choice;
    char option;
    int points = 0;
    char answer[50];
    do
    {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            viewCourses(points,option, answer); // Pass by reference
            break;
        case '2':
            GradesPrg();
            GradesMath();
            GradesBio();
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != '3'); // Modified condition to include exit

    return 0;
}