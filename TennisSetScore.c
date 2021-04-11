#include <stdio.h>
#include <stdlib.h>


int main () {
    printf("Championship!\n");
    int RogerFederer,RafaelNadal,match=1,matchscore1,matchscore2,set=1,count1=0,count2=0,champ1=0,champ2=0;

    for(int set=1 ;set<=5; set++) {
        printf("Set %d starts!\n",set);

          for(int match=1;match<=6;match++){

             printf("Enter match %d score of RogerFederer:" ,match);
             scanf("%d",&matchscore1,&RogerFederer);
             printf("Enter match %d score of RafaelNadal:" ,match);
             scanf("%d",&matchscore2,&RafaelNadal);



        if(matchscore1>matchscore2){
            printf("RogerFederer wins match %d \n",match);
            count1++;}
        else {
            printf("RafaelNadal wins match %d \n",match);
            count2++;}



            }
if(count1>=2){
    champ1++;
}
if(count2>=2) {
    champ2++;}

}
if(champ1>champ2) {
    printf("At the end of 5 set , RogerFederer  is the champion!  ",champ1,champ2);
}
else {
    printf("At the end of 5 set,  RafaelNadal is the champion! ",champ1,champ2);
}

    return 0;
}

