#include "english.h"
short unsigned int gradeEng = 0;
void backToMainEng()
{
    cout << endl << "Type 1 to go back to main menu" << endl;
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl;
        backToMainEng(); break;
    }
}
void backToMainEngGrade()
{
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl << "Type 1 to see next grade: " << endl;
        backToMainEngGrade(); break;
    }
}
void english(int points, char answer[]) // Use reference for `points`
{
    cout << "Choose the correct option to complete the sentence: She ________ to school every day." << endl
        << "a) go" << endl
        << "b) goes" << endl
        << "c) is going" << endl
        << "d) went" << endl;
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

    cout << "What is the past tense of the verb to run?" << endl
        << "a) ran" << endl
        << "b) running" << endl
        << "c) runs" << endl
        << "d) ran" << endl;

    cin >> answer[1];
    system("cls");
    if (answer[1] == 'd')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Choose the correct option to complete the sentence: I ________ my homework yesterday." << endl
        << "a) do" << endl
        << "b) did" << endl
        << "c) does" << endl
        << "d) doing" << endl;

    cin >> answer[2];
    system("cls");
    if (answer[2] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "Which of the following words is a synonym for happy?" << endl
        << "a) sad" << endl
        << "b) joyful" << endl
        << "c) angry" << endl
        << "d) tired" << endl;

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
    cout << "Choose the correct option to complete the sentence: He ________ football every Saturday." << endl
        << "a) play" << endl
        << "b) plays" << endl
        << "c) played" << endl
        << "d) playing" << endl;

    cin >> answer[4];
    system("cls");
    if (answer[4] == 'b')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "What is the plural of child?" << endl
        << "a) childs" << endl
        << "b) childen" << endl
        << "c) children" << endl
        << "d) childer" << endl;

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
    cout << "Choose the correct option to complete the sentence: She ________ her grandmother's birthday last week." << endl
        << "a) celebrate" << endl
        << "b) celebrates" << endl
        << "c) celebrated" << endl
        << "d) celebrating" << endl;

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
    cout << "What is the comparative form of the adjective big?" << endl
        << "a) bigger" << endl
        << "b) biggest" << endl
        << "c) more big" << endl
        << "d) biggen" << endl;

    cin >> answer[7];
    system("cls");
    if (answer[7] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "Choose the correct option to complete the sentence: We ________ to the beach last summer." << endl
        << "a) go" << endl
        << "b) goes" << endl
        << "c) went" << endl
        << "d) going" << endl;

    cin >> answer[8];
    system("cls");
    if (answer[8] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }
    cout << "Which of the following words is a preposition?" << endl
        << "a) dog" << endl
        << "b) happy" << endl
        << "c) under" << endl
        << "d) jump" << endl;

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
        gradeEng = 2;
        cout << gradeEng << "! You need to work on your knowledge!";
    }
    else if (points > 40 && points < 60)
    {
        gradeEng = 3;
        cout << gradeEng << "! You can do a lot better than that!";
    }
    else if (points >= 60 && points <= 70)
    {
        gradeEng = 4;
        cout << gradeEng << "! You can still do better!";
    }
    else if (points >= 80 && points < 90)
    {
        gradeEng = 5;
        cout << gradeEng << "! Very Good, but there is still room for improvement!";
    }
    else
    {
        gradeEng = 6;
        cout << gradeEng << "! Excellent! Now you can conquer a different subject!";
    }
    points = 0;
    backToMainEng();
}
void GradesEng()
{
    system("cls");
    cout << "Your Latest Grades:" << endl;
    cout << "English: ";
    if (gradeEng == 0)
    {
        cout << "~";
    }
    else
    {
        cout << gradeEng;
    }
    cout << endl << endl;
    cout << "Type 1 to see next grade: ";

    backToMainEngGrade();
}