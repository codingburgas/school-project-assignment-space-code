#include "biology.h"
short unsigned int gradebio = 0;
void backToMainBio()
{
    cout << endl << "Press 1 to go back to main menu" << endl;
    char backOption;
    cin >> backOption;
    switch (backOption)
    {
    case '1': system("cls"); break;
    default:
        cout << "Invalid input." << endl;
        backToMainBio(); break;
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
    system("cls");
    if (answer[0] == 'd')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Where is the genetic information contained in the cell?" << endl
        << "a) In the mitochondria" << endl
        << "b) In the chloroplasts" << endl
        << "c) In the cytoplasm" << endl
        << "d) In the nucleus" << endl;

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

    cout << "Which of the following structures is not found in a plant cell?" << endl
        << "a) Mitochondria" << endl
        << "b) Chloroplasts" << endl
        << "c) Central vacuole" << endl
        << "d) Ribosomes" << endl;

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

    cout << "What do cell organelles called chloroplasts produce?" << endl
        << "a) Water" << endl
        << "b) Oxygen" << endl
        << "c) Glucose" << endl
        << "d) Amino" << endl;

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

    cout << "What is the main function of nucleic acids in the cell?" << endl
        << "a) Transmission of genetic information" << endl
        << "b) Production of energy" << endl
        << "c) Protection of the cell" << endl
        << "d) Construction of the cell membrane" << endl;

    cin >> answer[4];
    system("cls");
    if (answer[4] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "Which of the following events occurs during mitosis?" << endl
        << "a) Division of the nucleus" << endl
        << "b) Synthesis of new proteins" << endl
        << "c) Separation of gametes" << endl
        << "d) Formation of gametes" << endl;

    cin >> answer[5];
    system("cls");
    if (answer[5] == 'a')
    {
        points += 10;
    }
    else
    {
        cout << "You got the last question wrong!" << endl << endl;
    }

    cout << "What is the main function of cellular respiration?" << endl
        << "a) Production of glucose" << endl
        << "b) Production of oxygen" << endl
        << "c) Conversion of glucose into energy" << endl
        << "d) Synthesis of new cellular components" << endl;

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

    cout << "Which of the following is not true about DNA?" << endl
        << "a) Contains genetic information" << endl
        << "b) Located in the cytoplasm" << endl
        << "c) Its structure is a double helix" << endl
        << "d) It consists of nucleotides" << endl;

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

    cout << "What is the function of amino acids in the cell?" << endl
        << "a) Energy storage" << endl
        << "b) Cell membrane construction" << endl
        << "c) Protein synthesis" << endl
        << "d) Transfer of genetic information" << endl;

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

    cout << "What is an ecosystem?" << endl
        << "a) All living organisms on Earth" << endl
        << "b) Community of organisms and their inorganic environment" << endl
        << "c) Planet Earth" << endl
        << "d) Only plant organisms" << endl;

    cin >> answer[9];
    system("cls");
    if (answer[9] == 'b')
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
    points = 0;
    backToMainBio();
}
void GradesBio()
{
    system("cls");
    cout << "Your Latest Grades:" << endl;
    cout << "Biology: ";
    if (gradebio == 0)
    {
        cout << "~";
    }
    else
    {
        cout << gradebio;
    }
    cout << endl;
    backToMainBio();
}