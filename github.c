#include <stdio.h>
int main()
{
  float km,m,cm;
  char category;
  int userinputK;
  int userinputM;
  int userinputC;
  int kmchoice;
  int mchoice;
  int cmchoice;

  float kmtom,kmtocm;
  float mtokm,mtocm;
  float cmtokm,cmtom;

  printf("Welcome to Unit Converter! \n \n");
  printf("Here is a list of conversation to choose from: \n ");
  printf("Km(K),m(M),cm(C), \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);

  if(category == 'K'){
    printf("Welcome you have chosen km ! \n \n");
    printf("Here is a list of conversations to choose from: \n ");
    printf("Enter 1 for km to m. \n");
    printf("Enter 2 for km to cm. \n");
      scanf("%d",&kmchoice);
  if(kmchoice == 1){
    printf("Please enter the value: \n"); 
    scanf("%d",&userinputK);
    kmtom = userinputK*1000;
    printf("meter: %.2f",kmtom);
   }
   else if(kmchoice==2){
    printf("Please enter the value: \n");
    scanf("%d",&userinputK);
    kmtocm = userinputK*100000;
    printf("centimeter: %.2f",kmtocm);
    }
    else 
    {printf("Invalid \n");
     printf("Enter correct choice");}
  } 
   else if (category == 'M'){
     printf("Welcome you have chosen meter ! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for m to km. \n");
    printf("Enter 2 for m to cm. \n");
      scanf("%d",&mchoice);
    
    if(mchoice == 1){
    printf("Please enter the value: \n"); 
    scanf("%d",&userinputM);
    mtokm=userinputM*0.001;
    printf("kilometer: %.3f",mtokm);
    }
    else if(mchoice == 2){
    printf("Please enter the value \n");
    scanf("%d",&userinputM);
    mtocm = userinputM*100;
    printf("meter: %.2f",mtocm);
    }
    else 
    {printf("Invalid \n");
    printf("Enter correct choice");}
    }
    else if(category == 'C'){
      printf("Welcome you have chosen centimeter \n");
       printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for  cm to m \n");
    printf("Enter 2 for cm to km. \n");
      scanf("%d",&cmchoice);
    if(cmchoice == 1){
    printf("Please enter the value: \n"); 
    scanf("%d",&userinputC);
    cmtom = userinputC*0.01;
    printf("meter: %.2f",cmtom);
      }
     else if(cmchoice == 2){
      printf("Please enter the value: \n"); 
      scanf("%d",&userinputC);
      cmtokm = userinputC*0.00001;
      printf("kilometer: %.5f",cmtokm);
    }
    else 
    {
      printf("Invalid \n");
      printf("Enter correct choice");
    }
    }
    return 0;
}
