#include "mainMenu.h"
#include "programming.h"
#include "biology.h"
#include "maths.h"
#include "viewCourses.h"
#include "displayMainMenu.h"
int mainMenu()
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
            viewCourses(points, option, answer); // Pass by reference
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