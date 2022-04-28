#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>
int main()
{
    int n=0;
    float  dollars;
do{
        dollars=get_float ("Change owed:");
        
}
     while (dollars<0);


   int cents = round(dollars * 100);
   for (;;){
    if(cents>=25){
       cents=cents-25;
       n++;
    }
    else if(cents>=10){
            cents=cents-10;
            n++;
    }
        else if(cents>=5){
            cents=cents-5;
            n++;
    }
         else if(cents>=1){
            cents=cents-1;
            n++;}
            else{
                printf("%i\n",n);
                break;
            }
    }







    return 0;
}

