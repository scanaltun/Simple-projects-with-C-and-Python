#include <stdio.h>
#include <stdlib.h>


int main()
{
 int midterm,final,makeup=0;
 float result;

 printf("Enter Midterm Grade:");
 scanf("%d",&midterm);
 printf("Enter Final Grade:");
 scanf("%d",&final);

 result=(midterm*0.5) + (final*0.5);

 if (result < 50){

    printf("Enter Make-Up Grade:");
    scanf("%d",&makeup);
 }

 if (makeup==0) {

    result=(midterm*0.5)+ (final*0.5);
 }

    else{
        result= (midterm*0.5)+ (makeup*0.5);

 }

 if (result < 30 )
        printf("Average: %.0f\nLetterGrade: FF\nCoefficient: 0.00", result);

    else if ( result < 40 )
        printf("Average: %.0f\nLetterGrade: FD\nCoefficient: 0.50", result);

    else if ( result < 50 )
        printf("Average: %.0f\nLetterGrade: DD\nCoefficient: 1.00", result);

    else if ( result < 60 )
        printf("Average: %.0f\nLetterGrade: DC\nCoefficient: 1.50", result);

    else if ( result < 70 )
        printf("Average: %.0f\nLetterGrade: CC\nCoefficient: 2.00", result);

    else if ( result < 75 )
        printf("Average: %.0f\nLetterGrade: CB\nCoefficient: 2.50", result);

    else if ( result < 80)
        printf("Average: %.0f\nLetterGrade: BB\nCoefficient: 3.00", result);

    else if ( result < 90 )
        printf("Average: %.0f\nLetterGrade: BA\nCoefficient: 3.50", result);

    else
        printf("Average: %.0f\nLetterGrade: AA\nCoefficient: 4.00", result);






    return 0;
}
