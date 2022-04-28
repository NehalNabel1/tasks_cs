#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main()
{
    float word=1,sent=0,let=0;
    string str =get_string("Text:");
    
   
    int n=strlen(str);
    for (int i=0;i<=n;i++){
        if(isspace(str[i])!=0){
            word++;

        }
        else if(str[i]=='?' || str[i]=='.' || str[i]=='!'){
            sent++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')  ){
            let++;
        }
        
    }
      float L=(let*100)/(word);
      float S=(sent*100)/(word);
      int index =round( 0.0588 * L - 0.296 * S - 15.8 );

      if (index <1){
        printf("Before Grade 1\n");
      }
      else if(index>16){
        printf("Grade 16+\n");
      }
      else{
      printf("Grade %i\n",index);
      }

    return 0;
}