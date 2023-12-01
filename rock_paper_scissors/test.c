#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

int result(int,int);
int bot();
int option_checker(int);
int playerwins();
int botwins();


int main()
{
    int option;
    printf("\n\tROCK FUCKs PAPER\n\nREADY...\n\n");
    printf(">>Choose your options by selecting the number<<\n");
    printf("SELECT YOUR OPTIONS\n1.) Rock\n2.) PAPER\n3.) Lesbian\n");
    printf("Selected option = ");
    scanf("%d",&option);
    option_checker(option);

    int bot_options=bot();
    result(option,bot_options);

    return 0;
}
int result(int p,int c){
    if ((p==1&&c==1)||(p==2&&c==2)||(p==3&&c==3))
    {
        printf("\nGAME TIED!");
    }
    else if ((p==1&&c==3))
    {
        playerwins();
    }
    else if (p==3&&c==1)
    {
        botwins();
    }
    else if (p==1&&c==2)
    {
        botwins();
    }
    else if (p==2&&c==1)
    {
        playerwins();
    }
    else if (p==3&&c==2)
    {
        playerwins();
    }
    else if (p==2&&c==3)
    {
        botwins();
    }   
}
int option_checker(int option){
    if (option==1){}
    else if (option==2){}
    else if (option==3){}
    else{
        printf("Choose correct options\n");
        close(1);
    } 
}
int bot(){
    srand(time(NULL));
    int randomNumber = rand() % 3 + 1;
    printf("\nBot choose %d\n", randomNumber);
    return randomNumber;
}
int botwins(){
    printf("Bot wins!\n");
}
int playerwins(){
    printf("You won!\n");
}
