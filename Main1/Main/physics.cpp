#include "physics.h"
short unsigned int gradephy = 0;
void backToMainPhy()
{
    cout << endl << "Press 1 to go back to main menu" << endl;
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl;
        backToMainPhy(); break;
    }
}
void backToMainPhyGrade()
{
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl << "Type 1 to see next grade" << endl;
        backToMainPhyGrade(); break;
    }
}
void physics(int points, char answer[]) // Use reference for `points`
{
    system("cls");
    cout << "Which of the following equations represents Newton's law of motion?" << endl
        << "a) F = ma" << endl
        << "b) E = mc^2" << endl
        << "c) P = V/I" << endl
        << "d) F = G(m1 * m2) / r^2" << endl;
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

    cout << "What is the speed of light in a vacuum?" << endl
        << "a) 300,000 m/s" << endl
        << "b) 200,000 m/s" << endl
        << "c) 150,000 m/s" << endl
        << "d) 100,000 m/s" << endl;
    cin >> answer[1];
    system("cls");
    if (answer[1] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Which of the following is not a unit of measurement of electric charge?" << endl
        << "a) Ampere" << endl
        << "b) Coulomb" << endl
        << "c) Volt" << endl
        << "d) Farad" << endl;
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

    cout << "Which of the following equations shows Ohm's law for electric current?" << endl
        << "a) P = VI" << endl
        << "b) V = IR" << endl
        << "c) I = V/R" << endl
        << "d) R = V/I" << endl;
    cin >> answer[3];
    system("cls");
    if (answer[3] == 'c')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "What is the weight of a 5 kg object on the moon, where the gravitational acceleration is approximately 1.6 m/s^2?" << endl
        << "a) 32 N" << endl
        << "b) 8 N" << endl
        << "c) 5 N" << endl
        << "d) 3.2 N" << endl;
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

    cout << "Which equation represents Archimedes' law for the effect of a buoyant force on a submerged object?" << endl
        << "a) F = ma" << endl
        << "b) F = mg" << endl
        << "c) F = ρVg" << endl
        << "d) F = ρVg" << endl;
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

    cout << "What is the kinetic energy of an object of mass 10 kg moving at a speed of 5 m/s?" << endl
        << "a) 50 J" << endl
        << "b) 100 J" << endl
        << "c) 125 J" << endl
        << "d) 250 J" << endl;
    cin >> answer[6];
    system("cls");
    if (answer[6] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Which equation describes the law of the Law of Conservation of Energy?" << endl
        << "a) E = mc^2" << endl
        << "b) F = ma" << endl
        << "c) P = VI" << endl
        << "d) E = KE + PE" << endl;
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

    cout << "Which of the following equations defines a moment of force?" << endl
        << "a) F = ma" << endl
        << "b) τ = Fr" << endl
        << "c) P = VI" << endl
        << "d) F = G(m1 * m2) / r^2" << endl;
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

    cout << "What is the acceleration of free fall on Earth?" << endl
        << "a) 9.8 m/s^2" << endl
        << "b) 6.7 m/s^2" << endl
        << "c) 11.3 m/s^2" << endl
        << "d) 14.5 m/s^2" << endl;
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
        gradephy = 2;
        cout << gradephy << "! You need to work on your knowledge!";
    }
    else if (points > 40 && points < 60)
    {
        gradephy = 3;
        cout << gradephy << "! You can do a lot better than that!";
    }
    else if (points >= 60 && points <= 70)
    {
        gradephy = 4;
        cout << gradephy << "! You can still do better!";
    }
    else if (points >= 80 && points < 90)
    {
        gradephy = 5;
        cout << gradephy << "! Very Good, but there is still room for improvement!";
    }
    else
    {
        gradephy = 6;
        cout << gradephy << "! Excellent! Now you can conquer a different subject!";
    }
    points = 0;
    backToMainPhy();
}
void GradesPhy()
{
    system("cls");
    cout << "Your Latest Grades:" << endl;
    cout << "Physics: ";
    if (gradephy == 0)
    {
        cout << "~";
    }
    else
    {
        cout << gradephy;
    }
    cout << endl << endl;
    cout << "Type 1 to see next grade: ";
    backToMainPhyGrade();
}