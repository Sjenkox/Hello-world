#include <cs50.h>
#include <stdio.h>
#include <math.h>

double average(double grade1, int percentG1, double grade2, int percentG2, double grade3, int percentG3);
string passing(double iGrade, double passGrade);

//Variables
double g1;
double g2;
double g3;
double grade;

int main(void)
{

    double passingGrade = get_double("What is the passing grade: ");

    //double g1 = get_double("1st grade: ");
    g1 = get_double("1st grade: ");
    int percentageG1 = get_int("Percentage of 1st grade: ");

    g2 = get_double("2nd grade: ");
    int percentageG2 = get_int("Percentage of 2nd grade: ");

    g3 = get_double("3rd grade: ");
    int percentageG3 = get_int("Percentage of 3rd grade: ");

    grade = average(g1, percentageG1, g2, percentageG2, g3, percentageG3);

    printf("Your average grade is: %.2f", grade);
    printf("%s", passing(grade, passingGrade));
}

double average(double grade1, int percentG1, double grade2, int percentG2, double grade3, int percentG3)
{

    double totalG1 = percentG1 / 10 * grade1;
    double totalG2 = percentG2 / 10 * grade2;
    double totalG3 = percentG3 / 10 * grade3;

    double averageGrade = (totalG1 + totalG2 + totalG3) / 10;

    return averageGrade;

}

string passing(double iGrade, double passGrade)
{


    if (iGrade >= passGrade)
    {
        return " you have passed!\n";
    }
    else
    {
        return " you haven't passed!\n";
    }

}
