//2014046326 EunMin Pak - Department of English Language and Culture
//Assignment of strtok

#include <stdio.h>
#include <string.h>

char * strtok(char* str1, const char* str2);

int main(void){
    char *sen;
    char *tok;
    
    printf("enter the sentence : ");
    scanf("%s", sen);
    //get the sentence
    
    printf("enter the character to distinguish the sentence : ");
    scanf("%c",tok);
    
    return 0;
}

char * strtok(char* str1, const char* str2){
  int i,j;
  int count=0;
  char *tmp;
  
  for(i=0; i<strlen(str1); i++){
      if(*str1==*str2){   // found token!
            *str1 = '\0';
             count++;     // count null
      }
  }
        count += 1;  // finally get total null
  
   for(i=0; count!=0; i++){
        str1 = str1+i;
        tmp+i = str1+i;
           
        if(*str1=='\0'){
            count--;
            return tmp;
        }
   }
    
}
