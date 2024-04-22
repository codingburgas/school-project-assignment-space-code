#include "maths.h"
short unsigned int grademath = 0;
void backToMainMath()
{
    cout << endl << "Type 1 to go back to main menu" << endl;
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl;
        backToMainMath(); break;
    }
}
void backToMainMathGrade()
{
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl << "Type 1 to see next grade" << endl;
        backToMainMathGrade(); break;
    }
}

void maths(int points, char answer[]) // Use reference for `points`
{
    system("cls");
    cout << "What is the result of multiplying (2x + 3) by (4x - 5)?" << endl
        << "a) 8x^2 - 2x - 15" << endl
        << "b) 8x^2 - 7x - 15" << endl
        << "c) 8x^2 + x - 15" << endl
        << "d) 8x^2 - 2x + 15" << endl;
    cin >> answer[0];
    system("cls");
    if (answer[0] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Solve the equation: 3x - 7 = 2x + 8" << endl
        << "a) x = -15" << endl
        << "b) x = 15" << endl
        << "c) x = -1" << endl
        << "d) x = 1" << endl;
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

    cout << "What is the product of the roots of the equation x^2 - 5x + 6 = 0?" << endl
        << "a) 6" << endl
        << "b) 5" << endl
        << "c) 1" << endl
        << "d) 0" << endl;
    cin >> answer[2];
    system("cls");
    if (answer[2] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Which of the following numbers are divisors of 24?" << endl
        << "a) 3 and 8" << endl
        << "b) 2, 5 and 6" << endl
        << "c) 4, 7 and 9" << endl
        << "d) 1, 2, 3, 4, 6, 8, 12 and 24" << endl;
    cin >> answer[3];
    system("cls");
    if (answer[3] == 'd')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Which of the following numbers are prime?" << endl
        << "a) 21 and 27" << endl
        << "b) 17 and 25" << endl
        << "c) 20 and 22" << endl
        << "d) 13 and 29" << endl;
    cin >> answer[4];
    system("cls");
    if (answer[4] == 'd')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "What is the sum of the first 10 members of the sequence 2, 5, 8, 11, ... ?" << endl
        << "a) 150" << endl
        << "b) 175" << endl
        << "c) 180" << endl
        << "d) 185" << endl;
    cin >> answer[5];
    system("cls");
    if (answer[5] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "If the sum of the angles of a triangle is 180 degrees, what is the angle of elevation of a side?" << endl
        << "a) 90 degrees" << endl
        << "b) 60 degrees" << endl
        << "c) 45 degrees" << endl
        << "d) 30 degrees" << endl;
    cin >> answer[6];
    system("cls");
    if (answer[6] == 'd')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "What is the meaning of the sine of an angle of 60 degrees?" << endl
        << "a) 1/2" << endl
        << "b) root 2/2" << endl
        << "c) 1" << endl
        << "d) root 3/2" << endl;
    cin >> answer[7];
    system("cls");
    if (answer[7] == 'd')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "What is the face of a rectangle 6 cm long and 8 cm wide?" << endl
        << "a) 14 cm^2" << endl
        << "b) 24 cm^2" << endl
        << "c) 40 cm^2" << endl
        << "d) 48 cm^2" << endl;
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

    cout << "What is the solution of the equation |3x - 4| = 7?" << endl
        << "a) x = -1 and x = 11/3" << endl
        << "b) x = -3 and x = 11/3" << endl
        << "c) x = 1 and x = 11/3" << endl
        << "d) x = 3 and x = 11/3" << endl;
    cin >> answer[9];
    system("cls");
    if (answer[9] == 'a')
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
        grademath = 2;
        cout << grademath << "! You need to work on your knowledge!";
    }
    else if (points > 40 && points < 60)
    {
        grademath = 3;
        cout << grademath << "! You can do a lot better than that!";
    }
    else if (points >= 60 && points <= 70)
    {
        grademath = 4;
        cout << grademath << "! You can still do better!";
    }
    else if (points >= 80 && points < 90)
    {
        grademath = 5;
        cout << grademath << "! Very Good, but there is still room for improvement!";
    }
    else
    {
        grademath = 6;
        cout << grademath << "! Excellent! Now you can conquer a different subject!";
    }
    points = 0;
    backToMainMath();
}
void GradesMath()
{
    system("cls");
    cout << "Your Latest Grades:" << endl;
    cout << "Maths: ";
    if (grademath == 0)
    {
        cout << "~";
    }
    else
    {
        cout << grademath;
    }
    cout << endl;
    cout << "Type 1 to see next grade: ";
    backToMainMathGrade();
}