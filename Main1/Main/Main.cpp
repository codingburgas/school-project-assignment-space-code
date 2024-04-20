#include <iostream>
using namespace std;

void displayMainMenu()
{
    cout << endl << "------ Digital School Main Menu ------" << endl;
    cout << "1. viewCourses" << endl;
    cout << "2. completedCourses" << endl;
    cout << "3. Grades" << endl;
}
void viewCourses()
{

}

void completedCourses()
{

}

void Grades()
{

}
int main()
{
    char choice;
    do
    {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            viewCourses();
            break;
        case '2':
            completedCourses();
            break;
        case '3':
            Grades();
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != '3');

    return 0;
}