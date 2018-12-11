#include <stdio.h>
#include <string.h>

int main(void){
    char sen[] = "Believe in yourself";
    printf("%s \n",ptr);
    
    while(ptr = strtok(NULL," ")){
      printf("%s \n", ptr);
    }
}



/* result
Believe
in
yourself

outline to implement the "strtok" function

for문
1. str에서 token이 나오기 전까지 첫번째 문자열을 저장하고 리턴
2. 

null이면서 뒤에 더이상 문자가 없을때 종료

*/
