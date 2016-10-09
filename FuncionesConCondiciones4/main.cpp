// Andres Aguirre Gonzalez A01039656

#include <iostream>

using namespace std;

char CalculateGrade(int Grade1, int Grade2, int Grade3)
{
    char cGradeInLetter;
    int iFinalGrade;
    iFinalGrade = (Grade1 + Grade2 + Grade3)/3;
    if(iFinalGrade <= 100 && iFinalGrade >= 90)
    {
        cGradeInLetter = 'A';
    }
    if(iFinalGrade < 90 && iFinalGrade > 79 )
    {
        cGradeInLetter = 'B';
    }
    if(iFinalGrade < 80 && iFinalGrade > 69)
    {
        cGradeInLetter = 'C';
    }
    if(iFinalGrade < 70 && iFinalGrade > 59 )
    {
        cGradeInLetter = 'D';
    }
    if(iFinalGrade < 60 && iFinalGrade > 9 )
    {
        cGradeInLetter ='E';
    }
    return cGradeInLetter;
}

int main()
{
    int iGrade1, iGrade2, iGrade3;
    char cGradeInLetter;


    cout << "Please give me grade #1" << endl;
    cin >> iGrade1;
    cout << "Please give me grade #2" << endl;
    cin >> iGrade2;
    cout << "Please give me grade #2" << endl;
    cin >> iGrade3;
    cGradeInLetter = CalculateGrade(iGrade1,iGrade2,iGrade3);
    cout << "You scored " << cGradeInLetter;



    return 0;
}
