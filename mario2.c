#include <stdio.h> 
#include <stdlib.h> 
#include <cs50.h>

int main() 
{ 
    int  h; 
do{ 
        h=get_int("Height :"); 
       
} 
     while (h<1||h>8); 
 
 
 for(int i=1;i<=h;i++){ 
 
        for( int j=0;j<h-i;j++){ 
             printf(" ");} 
            for( int k=0;k<i;k++){ 
 
         printf("#"); 
 
         } 
 printf ("  "); 
 
             for( int k=0;k<i;k++){ 
 
            printf("#");} 
            
 
 
 
   printf("\n") ; 
 
        } 
 
 
    return 0; 
    
}