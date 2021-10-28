#include <stdio.h>

/*void showStr (char* str){ 함수의 이름은 메모리에 저장 된 함수의 주소와 동일한 의미를 가진다.
    printf("%s \n", str);
}

void showNum (int n1, int n2){
    printf("%d + %d = %d \n", n1, n2, n1+n2);
}

int main (void){
    char * str = "Function example";
    int num1 = 10, num2 = 20;

    void (*fptr1)(int, int) = showNum;
    void (*fptr2)(char*) = showStr;

    fptr1(num1, num2);
    fptr2(str);

    return 0;
}*/

/*int WhoIsFirst (int num1, int num2, int (*cmp)(int n1, int n2)){ 3번째 인자에는 함수의 주소값이 들어가야 한다. == 함수 포인터 선언 가능하다.
    return cmp(num1, num2);
}

int OlderFirst (int num1, int num2){
    if(num1 < num2){
        return num2;
    }
    else if (num1 > num2){
        return num1;
    }
    else {
        return 0;
    }
}

int YoungFirst (int num1, int num2){
    if(num1 < num2){
        return num1;
    }
    else if(num1 > num2){
        return num2;
    }

    else {
        return 0;
    }
}

int main (void){

    int age1 = 20;
    int age2 = 30;
    int first;

    printf("입장순서 1 \n");
    first = WhoIsFirst(age1, age2, OlderFirst); 3번째 인자에 OlderFirst 함수의 주소값이 전달 됨. 이름 자체가 배열과 같이 주소를 담고 있다.
    printf("%d세와 %d세 중 %d세가 먼저 입장. \n", age1, age2, first);

    printf("입장순서 2 \n");
    first = WhoIsFirst(age1, age2, YoungFirst);
    printf("%d세와 %d세 중 %d세가 먼저 입장. \n", age1, age2, first);

    return 0;
}*/

/*int main (int argc, char*argv[]){ main 함수로의 인자 전달 예제
    int i = 0;
    printf("전달된 문자열 의 수 : %d \n", argc);

    for(i= 0; i < argc; i++){
        printf("%d 번째 문자열 : %s \n", i+1, argv[i]);
    }

    return 0;
}*/

/*void showAllString(int argc, char **argv){ char **argv == char *argv[]
    for(int i =0; i < argc; i++){
        printf("%s \n", argv[i]);
    }
}

int main (void){

    char*str[3]={
        "C Programming",
        "C++ Programming",
        "Java Programming"
    };
    showAllString(3, str);
    return 0;
}*/