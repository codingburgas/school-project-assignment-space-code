#include <iostream>
using namespace std;

void displayMainMenu()
{
    cout << endl << "------ Digital School Main Menu ------" << endl;
    cout << "1. viewCourses" << endl;
    cout << "2. completedCourses" << endl;
    cout << "3. Grades" << endl;
}
void viewCourses(char option)
{
    cout << "Pick Subject" << endl;
    cin >> option;
    switch (option)
    {
    case '1': programming();
    }
}

void completedCourses()
{

}

void Grades()
{

}
void programming(int points=0, char answer[50])
{
    cout << "What is programming?"  << endl <<"a) The process of creating software applications" << endl << "b) The process of managing hardware components" << endl << "c) The process of creating hardware devices" << endl;
    cin >> answer[0];
    if (answer[0] == 'a')
    {
        points += 10;
    }
    cout << "Which of the following is not a programming language?" << endl << "a) C++ " << endl << "b) HTML" << endl << "c) JPEG" << endl << "d) Java" << endl;
    cin >> answer[1];
    if (answer[1] == 'c')
    {
        points += 10;
    }
}
int main()
{
    char choice;
    char option;
    do
    {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            viewCourses(option);
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