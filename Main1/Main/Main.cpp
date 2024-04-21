#include <iostream>
using namespace std;
void programming(int& points, char answer[]) // Use reference for `points`
{
    cout << "What is programming?" << endl
        << "a) The process of creating software applications" << endl
        << "b) The process of managing hardware components" << endl
        << "c) The process of creating hardware devices" << endl;
    cin >> answer[0];
    if (answer[0] == 'a')
    {
        points += 10;
    }

    cout << "Which of the following is not a programming language?" << endl
        << "a) C++" << endl
        << "b) HTML" << endl
        << "c) JPEG" << endl
        << "d) Java" << endl;

    cin >> answer[1];
    if (answer[1] == 'c')
    {
        points += 10;
    }

    cout << "Your current score: " << points << "/20" << endl; // Context for score
}
void displayMainMenu()
{
    cout << endl << "------ Digital School Main Menu ------" << endl;
    cout << "1. viewCourses" << endl;
    cout << "2. completedCourses" << endl;
    cout << "3. Grades" << endl;
    cout << "4. Exit" << endl; // Added exit option
}

void viewCourses(int& points, char& option, char answer[]) // Use references
{
    cout << "Pick Subject (1 for Programming)" << endl;
    cin >> option;
    if (option == '1') // Removed switch case with single case
    {
        programming(points, answer);
    }
    else
    {
        cout << "Invalid subject choice." << endl;
    }
}

void completedCourses()
{
    cout << "Placeholder for completed courses." << endl;
}

void Grades()
{
    cout << "Placeholder for Grades." << endl;
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
            viewCourses(points, option, answer); // Pass by reference
            break;
        case '2':
            completedCourses();
            break;
        case '3':
            Grades();
            break;
        case '4': // New exit condition
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != '4'); // Modified condition to include exit

    return 0;
}