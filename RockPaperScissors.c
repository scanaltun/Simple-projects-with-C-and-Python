#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int R=1,P=2,S=3;
    int i,player=0,computer=0,choice;

    srand(time(NULL));


    printf("1 | Rock\n");
    printf("2 | Paper\n");
    printf("3 | Scissors\n\n");
    for(i=0;i<5;i++){
    printf("Enter your choice:");
    scanf("%d",&choice);

    int computer=rand()%3+1;

if(choice==1){

    if(computer==1){
    printf("Round Draw\n ");
    }
    if(computer==2){
    printf("The Computer Won\n");
    computer= computer + 1;
}
    if(computer==3){
    printf("The Player Won\n");
    player = player + 1;
}

}

else  if(choice==2){

    if(computer==2){
    printf("Raund Draw\n");
}

    if(computer==3){
    printf("The Player Won\n");
    player = player + 1;
}
    if(computer==1){
    printf("The Computer Won\n");
    computer= computer + 1;
}

}
else if(choice==3){
    if(computer==3){
    printf("Raund Draw\n");
}
    if(computer==2){
    printf("The Computer Won\n");
    computer= computer+ 1;
}
    if(computer==1){
    printf("The Player Won\n");
    player = player + 1;
}
}
else{
printf("Only Enter Valid Values(1-2-3)\n");
}
}

 if(computer =  player ){
    printf("The Game is a Draw \n");

}
else if(computer < player){
    printf("Winner of the game: PLAYER! %d to %d\n",player,computer);
}
else if(computer > player ){
    printf("Winner of the game: COMPUTER! %d to %d\n",computer,player);
}


 return 0;
}
