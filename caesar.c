#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(int argc,string argv[]){
    
    
    if (argc==2){
        int n=strlen(argv[1]);
        int h=0;
     for (int i=0;i<n;i++){
   
         if(isdigit(argv[1][i])==0){
                 h++;   
         
        }
         
     }
    
       if(h==0)  {
        
         int key=atoi(argv[1]);
         string s=get_string("plaintext:");
         int m= strlen(s);
     
         for(int i=0;i<=m;i++){
         
            int a=(s[i]+ key);
             if((s[i] >= 'a' && s[i] <= 'z')  ){
              
         
               if(a >122){
             
                  do{
                      a =(a % 123) + 97;
                   } while(a >122);
           
                           s[i]=a;
                       }
                else{
                s[i]=(s[i]+key) ;   
                  }
         }
         else if((s[i] >= 'A' && s[i] <= 'Z') ){
             
          
             if(a >90){
                 do{
                     a = (a % 91) + 65;
                 }while (a >90);
                 
                   s[i]=a; 
             
             }
             else{
               s[i]=(s[i]+key) ; 
              
             }
         }
         
              }
      
    
     printf("ciphertext: %s\n",s);
        
       }
     
    else{
        printf("Usage: ./caesar key");
        return 1;
    }
    
   
        
    }
    else  {
        printf("Usage: ./caesar key");
        return 1;
        
    }
    
  
          
   
    
    return 0;
}