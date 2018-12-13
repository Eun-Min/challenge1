//2014046326 EunMin Pak - Department of English Language and Culture
//Assignment of strtok

#include <stdio.h>
#include <string.h>

char * strtok(char* str1, const char* str2);

int main(void){
    char sen[50];
    char tok='.';
    
    printf("enter the sentence : ");
    scanf("%s", sen);
    //get the sentence
   
    printf("%s",strtok(sen,&tok));
    
    return 0;
}

char * strtok(char* str1, const char* str2){
  int i,j;
  int count=0;
  char *tmp;
  
  for(i=0; i<strlen(str1); i++){
      str1 = str1+i;  //move the pointer
          
      if(*(str1+i)==*str2){   // compare the token and replace token to '\0'
            *(str1+i) = '\0';
             count++;         // count null
      }
  }
// line 27 - 35 , the process to replace token to '\0'
  
      for(i=0; count>0; i++){ // if count goes 0, it means no more words -> terminate
        str1 = str1+i;         // as moving the pointer
     
          // caution : in the case of the pointer.. don't need like this  :  tmp + i = str1+i
           
        if(*str1=='\0' && count==2){   // hello world winter   ->  two null except for end null
            count--;
            tmp = str1;    
            for(j=0; j!='\0'; j++){
                printf("%s",*(tmp+j));
            }
        }
        else if(*str1=='\0' && count==1){
                 count--;
                 tmp = str1;      
            for(j=0; j!='\0'; j++){
                printf("%s",*(tmp+j));
            } 
        }
        else{
            break;    // totally end
        }
    }
    
}
