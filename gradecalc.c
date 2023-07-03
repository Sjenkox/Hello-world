#include <cs50.h>
#include <stdio.h>
#include <math.h>

double average(double grade1, int percentG1, double grade2, int percentG2, double grade3, int percentG3);

int main(void)
{

    double g1 = get_double("1st grade: ");
    int percentageG1 = get_int("Percentage of 1st grade: ");

    double g2 = get_double("2nd grade: ");
    int percentageG2 = get_int("Percentage of 2nd grade: ");

    double g3 = get_double("3rd grade: ");
    int percentageG3 = get_int("Percentage of 3rd grade: ");

    printf("Your average grade is: %.2f \n", average(g1, percentageG1, g2, percentageG2, g3, percentageG3));


}

double average(double grade1, int percentG1, double grade2, int percentG2, double grade3, int percentG3)
{

    double totalG1 = percentG1 / 10 * grade1;
    double totalG2 = percentG2 / 10 * grade2;
    double totalG3 = percentG3 / 10 * grade3;

    double averageGrade = (totalG1 + totalG2 + totalG3) / 10;

    return averageGrade;

}