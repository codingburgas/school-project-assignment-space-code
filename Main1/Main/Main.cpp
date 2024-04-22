#include <iostream>
using namespace std;
void displayMainMenu()
{
    cout << endl << "------ Digital School Main Menu ------" << endl;
    cout << "1. viewCourses" << endl;
    cout << "2. completedCourses" << endl;
    cout << "3. Grades" << endl;
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
    system("cls");
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
    system("cls");
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
    system("cls");
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
    system("cls");
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
    system("cls");
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
    system("cls");
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
    system("cls");
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
    system("cls");
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
    system("cls");
    cout << "Your grade is ";
    int gradeprg;
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
    cout << endl << "Press 1 to go back to main menu" << endl;
    int backOption;
    cin >> backOption;
    if (backOption == 1)
    {
        system("cls");
    }
}

void biology(int points, char answer[]) // Use reference for `points`
{
    system("cls");
    cout << "What are the basic units of heredity?" << endl
        << "a) Atoms" << endl
        << "b) Molecules" << endl
        << "c) Genes" << endl
        << "d) Organisms" << endl;
    cin >> answer[0];
    if (answer[0] == 'd')
    {
        points += 10;
    }
    system("cls");
    cout << "Where is the genetic information contained in the cell?" << endl
        << "a) In the mitochondria" << endl
        << "b) In the chloroplasts" << endl
        << "c) In the cytoplasm" << endl
        << "d) In the nucleus" << endl;

    cin >> answer[1];
    if (answer[1] == 'd')
    {
        points += 10;
    }
    system("cls");
    cout << "Which of the following structures is not found in a plant cell?" << endl
        << "a) Mitochondria" << endl
        << "b) Chloroplasts" << endl
        << "c) Central vacuole" << endl
        << "d) Ribosomes" << endl;

    cin >> answer[2];
    if (answer[2] == 'a')
    {
        points += 10;
    }
    system("cls");
    cout << "What do cell organelles called chloroplasts produce?" << endl
        << "a) Water" << endl
        << "b) Oxygen" << endl
        << "c) Glucose" << endl
        << "d) Amino" << endl;

    cin >> answer[3];
    if (answer[3] == 'c')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the main function of nucleic acids in the cell?" << endl
        << "a) Transmission of genetic information" << endl
        << "b) Production of energy" << endl
        << "c) Protection of the cell" << endl
        << "d) Construction of the cell membrane" << endl;

    cin >> answer[4];
    if (answer[4] == 'a')
    {
        points += 10;
    }
    system("cls");
    cout << "Which of the following events occurs during mitosis?" << endl
        << "a) Division of the nucleus" << endl
        << "b) Synthesis of new proteins" << endl
        << "c) Separation of gametes" << endl
        << "d) Formation of gametes" << endl;

    cin >> answer[5];
    if (answer[5] == 'a')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the main function of cellular respiration?" << endl
        << "a) Production of glucose" << endl
        << "b) Production of oxygen" << endl
        << "c) Conversion of glucose into energy" << endl
        << "d) Synthesis of new cellular components" << endl;

    cin >> answer[6];
    if (answer[6] == 'c')
    {
        points += 10;
    }
    system("cls");
    cout << "Which of the following is not true about DNA?" << endl
        << "a) Contains genetic information" << endl
        << "b) Located in the cytoplasm" << endl
        << "c) Its structure is a double helix" << endl
        << "d) It consists of nucleotides" << endl;

    cin >> answer[7];
    if (answer[7] == 'b')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the function of amino acids in the cell?" << endl
        << "a) Energy storage" << endl
        << "b) Cell membrane construction" << endl
        << "c) Protein synthesis" << endl
        << "d) Transfer of genetic information" << endl;

    cin >> answer[8];
    if (answer[8] == 'c')
    {
        points += 10;
    }
    system("cls");
    cout << "What is an ecosystem?" << endl
        << "a) All living organisms on Earth" << endl
        << "b) Community of organisms and their inorganic environment" << endl
        << "c) Planet Earth" << endl
        << "d) Only plant organisms" << endl;

    cin >> answer[9];
    if (answer[9] == 'b')
    {
        points += 10;
    }
    system("cls");
    cout << "Your grade is ";
    int gradebio;
    if (points <= 40)
    {
        gradebio = 2;
        cout << gradebio << "! You need to work on your knowledge!";
    }
    else if (points > 40 && points < 60)
    {
        gradebio = 3;
        cout << gradebio << "! You can do a lot better than that!";
    }
    else if (points >= 60 && points <= 70)
    {
        gradebio = 4;
        cout << gradebio << "! You can still do better!";
    }
    else if (points >= 80 && points < 90)
    {
        gradebio = 5;
        cout << gradebio << "! Very Good, but there is still room for improvement!";
    }
    else
    {
        gradebio = 6;
        cout << gradebio << "! Excellent! Now you can conquer a different subject!";
    }
    cout << endl << "Press 1 to go back to main menu" << endl;
    int backOption;
    cin >> backOption;
    if (backOption == 1)
    {
        system("cls");
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
    if (answer[0] == 'b')
    {
        points += 10;
    }
    system("cls");
    cout << "Solve the equation: 3x - 7 = 2x + 8" << endl
    << "a) x = -15" << endl
    << "b) x = 15" << endl
    << "c) x = -1" << endl
        << "d) x = 1" << endl;
    cin >> answer[1];
    if (answer[1] == 'c')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the product of the roots of the equation x^2 - 5x + 6 = 0?" << endl
        << "a) 6" << endl
        << "b) 5" << endl
        << "c) 1" << endl
        << "d) 0" << endl;
    cin >> answer[2];
    if (answer[2] == 'a')
    {
        points += 10;
    }
    system("cls");
    cout << "Which of the following numbers are divisors of 24?" << endl
        << "a) 3 and 8" << endl
        << "b) 2, 5 and 6" << endl
        << "c) 4, 7 and 9" << endl
        << "d) 1, 2, 3, 4, 6, 8, 12 and 24" << endl;
    cin >> answer[3];
    if (answer[3] == 'd')
    {
        points += 10;
    }
    system("cls");
    cout << "Which of the following numbers are prime?" << endl
        << "a) 21 and 27" << endl
        << "b) 17 and 25" << endl
        << "c) 20 and 22" << endl
        << "d) 13 and 29" << endl;
    cin >> answer[4];
    if (answer[4] == 'd')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the sum of the first 10 members of the sequence 2, 5, 8, 11, ... ?" << endl
        << "a) 150" << endl
        << "b) 175" << endl
        << "c) 180" << endl
        << "d) 185" << endl;
    cin >> answer[5];
    if (answer[5] == 'c')
    {
        points += 10;
    }
    system("cls");
    cout << "If the sum of the angles of a triangle is 180 degrees, what is the angle of elevation of a side?" << endl
        << "a) 90 degrees" << endl
        << "b) 60 degrees" << endl
        << "c) 45 degrees" << endl
        << "d) 30 degrees" << endl;
    cin >> answer[6];
    if (answer[6] == 'd')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the meaning of the sine of an angle of 60 degrees?" << endl
        << "a) 1/2" << endl
        << "b) √2/2" << endl
        << "c) 1" << endl
        << "d) √3/2" << endl;
    cin >> answer[7];
    if (answer[7] == 'd')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the face of a rectangle 6 cm long and 8 cm wide?" << endl
        << "a) 14 cm^2" << endl
        << "b) 24 cm^2" << endl
        << "c) 40 cm^2" << endl
        << "d) 48 cm^2" << endl;
    cin >> answer[8];
    if (answer[8] == 'b')
    {
        points += 10;
    }
    system("cls");
    cout << "What is the solution of the equation |3x - 4| = 7?" << endl
        << "a) x = -1 and x = 11/3" << endl
        << "b) x = -3 and x = 11/3" << endl
        << "c) x = 1 and x = 11/3" << endl
        << "d) x = 3 and x = 11/3" << endl;
    cin >> answer[9];
    if (answer[9] == 'a')
    {
        points += 10;
    }
    system("cls");
    cout << "Your grade is ";
    int gradeprg;
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
    cout << endl << "Press 1 to go back to main menu" << endl;
    int backOption;
    cin >> backOption;
    if (backOption == 1)
    {
        system("cls");
    }
}


void viewCourses(int points, char& option, char answer[]) // Use references
{
    system("cls");
    cout << "Pick Subject" << endl;
    cout << "1. Programming" << endl;
    cout << "2. Maths" << endl;
    cout << "3. Biology" << endl;
    cin >> option;
    system("cls");
    switch (option)
    {
    case '1': programming(points, answer); break;
    case '2': maths(points, answer); break;
    case '3': biology(points, answer); break;
    default: cout << "Invalid choice. Please enter a valid option.";
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
            viewCourses(points,option, answer); // Pass by reference
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

    } while (choice != '4'); // Modified condition to include exit

    return 0;
}