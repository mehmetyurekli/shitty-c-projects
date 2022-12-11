#include <stdio.h>

int main()
{
    int grade_number;
    int i;
    int sum = 0;
    float average;

    printf("This program calculates the average of grades.\n");
    printf("Enter how many grades will you enter: ");
    scanf("%d", &grade_number);

    int grades[grade_number];

    for (i=1; i<=grade_number; ++i)
    {
        printf("Enter %d. grade: ", i);
        scanf("%d", &grades[i]);
        printf("");
        sum += grades[i];
    }

    average = (float)sum/(float)grade_number;
    printf("The average is %0.2f", average);
    return 0;
}