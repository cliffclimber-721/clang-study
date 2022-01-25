// 입력한 숫자만큼 Hello World!를 찍어내는 코드 작성

#include <stdio.h>

int main(void){
    int getNum; // get numbers from scanf
    
    printf("Get the number to print Hello World! : ");
    scanf("%d", &getNum);

    while(0 < getNum){
        printf("Hello World! \n");
        getNum--;
    }

    return 0;
}
