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

1. str에서 token을 찾아서 null로 만들기 - for문
2. null을 카운트한다
3. 카운트한 널갯수로 어떤게 진짜 최종 널인지 판단하기 - for문
4. 널이 나올때마다 count를 --하고 return 해준다 -> ????? hmmmmm
5. count가 1이될때 그게 바로 마지막 널이라고 판단하고 종료!

*/
