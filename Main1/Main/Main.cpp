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

    cout << "What is the function of the if statement in C++ programming?" << endl
        << "a) For loop" << endl
        << "b) To create functions" << endl
        << "c) To conditionally execute code" << endl
        << "d) To assign values to variables" << endl;

    cin >> answer[2];
    if (answer[2] == 'c')
    {
        points += 10;
    }

    cout << "What is the purpose of the for loop in C++ programming?" << endl
        << "a) To create functions" << endl
        << "b) To repeat a block of code a certain number of times" << endl
        << "c) To execute code only when a certain condition is met" << endl
        << "d) To sort data" << endl;

    cin >> answer[3];
    if (answer[3] == 'b')
    {
        points += 10;
    }

    cout << "Which of the following is not a data type in C++ programming?" << endl
        << "a) Numeric data type" << endl
        << "b) Text data type" << endl
        << "c) Graphic data type" << endl
        << "d) Boolean data type" << endl;

    cin >> answer[4];
    if (answer[4] == 'c')
    {
        points += 10;
    }

    cout << "What is the ==  operator in C++ programming?" << endl
        << "a) Assigning values to variables" << endl
        << "b) Checking for equality of values" << endl
        << "c) Checking for difference of values" << endl
        << "d) Incrementing the value of a variable" << endl;

    cin >> answer[5];
    if (answer[5] == 'b')
    {
        points += 10;
    }

    cout << "What programming language is used to create web pages?" << endl
        << "a) Java" << endl
        << "b) Python" << endl
        << "c) HTML" << endl
        << "d) C++" << endl;

    cin >> answer[6];
    if (answer[6] == 'c')
    {
        points += 10;
    }

    cout << "What is the function of the cout operator in C++ programming?" << endl
        << "a) To enter data from the user" << endl
        << "b) To display text on the screen" << endl
        << "c) To perform mathematical operations" << endl
        << "d) To create loops" << endl;

    cin >> answer[7];
    if (answer[7] == 'b')
    {
        points += 10;
    }

    cout << "What is the purpose of the return statement in C++ programming?" << endl
        << "a) To terminate the execution of the program" << endl
        << "b) To return the result of a function" << endl
        << "c) To display text on the screen" << endl
        << "d) To perform mathematical operations" << endl;

    cin >> answer[8];
    if (answer[8] == 'b')
    {
        points += 10;
    }

    cout << "What is the data type of true and false in C++?" << endl
        << "a) Text data type" << endl
        << "b) Numeric data type" << endl
        << "c) Boolean data type" << endl
        << "d) Graphic data type" << endl;

    cin >> answer[9];
    if (answer[9] == 'c')
    {
        points += 10;
    }

    cout << "Your current score: " << points << "/100" << endl; // Context for score
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