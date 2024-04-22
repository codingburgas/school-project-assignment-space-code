#include "programming.h"
short unsigned int gradeprg = 0;
void backToMainPrg()
{
    cout << endl << "Type 1 to go back to main menu" << endl;
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl;
        backToMainPrg(); break;
    }
}
void backToMainPrgGrade()
{
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl << "Type 1 to see next grade: " << endl;
        backToMainPrgGrade(); break;
    }
}
void programming(int points, char answer[]) // Use reference for `points`
{
    cout << "What is programming?" << endl
        << "a) The process of creating software applications" << endl
        << "b) The process of managing hardware components" << endl
        << "c) The process of creating hardware devices" << endl;
    cin >> answer[0];
    system("cls");
    if (answer[0] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Which of the following is not a programming language?" << endl
        << "a) C++" << endl
        << "b) HTML" << endl
        << "c) JPEG" << endl
        << "d) Java" << endl;

    cin >> answer[1];
    system("cls");
    if (answer[1] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "What is the function of the if statement in C++ programming?" << endl
        << "a) For loop" << endl
        << "b) To create functions" << endl
        << "c) To conditionally execute code" << endl
        << "d) To assign values to variables" << endl;

    cin >> answer[2];
    system("cls");
    if (answer[2] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What is the purpose of the for loop in C++ programming?" << endl
        << "a) To create functions" << endl
        << "b) To repeat a block of code a certain number of times" << endl
        << "c) To execute code only when a certain condition is met" << endl
        << "d) To sort data" << endl;

    cin >> answer[3];
    system("cls");
    if (answer[3] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "Which of the following is not a data type in C++ programming?" << endl
        << "a) Numeric data type" << endl
        << "b) Text data type" << endl
        << "c) Graphic data type" << endl
        << "d) Boolean data type" << endl;

    cin >> answer[4];
    system("cls");
    if (answer[4] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What is the ==  operator in C++ programming?" << endl
        << "a) Assigning values to variables" << endl
        << "b) Checking for equality of values" << endl
        << "c) Checking for difference of values" << endl
        << "d) Incrementing the value of a variable" << endl;

    cin >> answer[5];
    system("cls");
    if (answer[5] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What programming language is used to create web pages?" << endl
        << "a) Java" << endl
        << "b) Python" << endl
        << "c) HTML" << endl
        << "d) C++" << endl;

    cin >> answer[6];
    system("cls");
    if (answer[6] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What is the function of the cout operator in C++ programming?" << endl
        << "a) To enter data from the user" << endl
        << "b) To display text on the screen" << endl
        << "c) To perform mathematical operations" << endl
        << "d) To create loops" << endl;

    cin >> answer[7];
    system("cls");
    if (answer[7] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What is the purpose of the return statement in C++ programming?" << endl
        << "a) To terminate the execution of the program" << endl
        << "b) To return the result of a function" << endl
        << "c) To display text on the screen" << endl
        << "d) To perform mathematical operations" << endl;

    cin >> answer[8];
    system("cls");
    if (answer[8] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What is the data type of true and false in C++?" << endl
        << "a) Text data type" << endl
        << "b) Numeric data type" << endl
        << "c) Boolean data type" << endl
        << "d) Graphic data type" << endl;

    cin >> answer[9];
    system("cls");
    if (answer[9] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "Your grade is ";
    if (points <= 40)
    {
        gradeprg = 2;
        cout << gradeprg << "! You need to work on your knowledge!";
    }
    else if (points > 40 && points < 60)
    {
        gradeprg = 3;
        cout << gradeprg << "! You can do a lot better than that!";
    }
    else if (points >= 60 && points <= 70)
    {
        gradeprg = 4;
        cout << gradeprg << "! You can still do better!";
    }
    else if (points >= 80 && points < 90)
    {
        gradeprg = 5;
        cout << gradeprg << "! Very Good, but there is still room for improvement!";
    }
    else
    {
        gradeprg = 6;
        cout << gradeprg << "! Excellent! Now you can conquer a different subject!";
    }
    points = 0;
    backToMainPrg();
}
void GradesPrg()
{
    system("cls");
    cout << "Your Latest Grades:" << endl;
    cout << "Programming: ";
    if (gradeprg == 0)
    {
        cout << "~";
    }
    else
    {
        cout << gradeprg;
    }
    cout << endl << endl;
    cout << "Type 1 to see next grade: ";

    backToMainPrgGrade();
}