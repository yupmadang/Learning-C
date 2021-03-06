#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*int main (void){
    int ch1, ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2, stdout);

    return 0;
}*/

/*int main (void){ EOF 의미, window : ctrl-z, lenux = ctrl-d
    int ch;

    while(1){
        ch = getchar();
        if(ch == EOF){
            break;
        }
        putchar(ch);
    }
    return 0;
}*/

/*int Swich (int ch){
    int diff = 'a'-'A';
    if(ch >= 'A' && ch <= 'Z'){
        return ch + diff;
    }
    else if(ch >= 'a' && ch <= 'z'){
        return ch - diff;
    }
    else{
        return -1;
    }
}

int main (void){

    int ch;
    
    printf("문자를 입력하세요.");
    ch = getchar();
    ch = Swich(ch);

    if(ch == -1){
        puts("잘못된 입력입니다.");
        return -1;
    }
   
    putchar(ch);
    return 0;
}*/

/*int main (void){ puts, fputs 함수의 차이점, 개행의 차이
    char * str = "Simple String";

    printf("1. puts test ----- \n");
    puts(str);
    puts("So simple string");

    printf("2. fputs test ----- \n");
    fputs(str, stdout); printf("\n");
    fputs("So simple string", stdout); printf("\n");

    printf("end of main");
    return 0; 

}*/

/*int main (void){
    char str[7];

    for(int i = 0; i<3; i++){
        fgets(str,sizeof(str),stdin);
        printf("Read %d: %s \n", i+1, str);
    }

    return 0;
}*/

/*int main (void){ fgets함수는 자신의 안에 포함된 \n도 하나의 문자열로 인식한다. 프로그래밍시 gets함수보다 fgets 함수를 주로 사용 :
                   배열로 범위를 지정하기에 오버플로우를 방지할 수 있다.

    char str[50];

    for(int i =0; i < 3; i++){
        fgets(str,sizeof(str),stdin);
        printf("Read %d: %s \n",i+1,str);
    }

    return 0;
}*/

/*void ClearLine (void){ 입력버퍼를 비우는 함수
    while(getchar() != '\n');
}*/

/*int main (void){ 
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ",stdout); 엔터키까지 7문자가 포함되어 이름을 입력할 기회가 없음......입력버퍼에 \n 이 남음.
    fgets(perID,sizeof(perID),stdin);

    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("주민번호: %s \n", perID);
    printf("이름: %s \n", name);

    return 0;
}*/

/*int main (void){ 입력버퍼를 지우고 이름을 입력하는 코드 실행 -> \n이 제거되어 이름입력이 가능
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ",stdout);
    fgets(perID,sizeof(perID),stdin);
    ClearLine();

    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("주민번호: %s \n", perID);
    printf("이름: %s \n", name);

    return 0;
}*/

/*void Remove (char str[]){
    int len = strlen(str);
    str[len-1] = 0;
}

int main (void){

    char str[100];
    printf("문자열 입력: ");
    fgets(str,sizeof(str),stdin);
    printf("길이 : %d, 내용 : %s \n", strlen(str), str);

    Remove(str);
    printf("길이 : %d, 내용 : %s \n", strlen(str), str);\

    return 0;
}*/

/*int main (void){ strcpy 함수와 strncpy함수 비교
    char str1[20]="1234567890";
    char str2[20];
    char str3[5];

    strcpy(str2, str1);
    puts(str2);

    strncpy(str3, str1, sizeof(str3)); 문자열을 복사할 때 널문자는 제외하고 복사함. 후에 초과된 값까지 출력
    puts(str3);

    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1] = 0; 복사 후 널문자를 넣을 위치를 확보해주는 코드
    puts(str3);
    return 0;
}*/

/*int main (void){ strncat은 strncpy와 다르게 널문자도 포함하여 붙여준다.
    char str1[20] = "First~";
    char str2[20] = "Second";

    char str3[20] = "Simple num:";
    char str4[20] = "1234567890";

    strcat(str1, str2);
    puts(str1);
    printf("%d \n", strlen(str1));

    strncat(str3,str4,7);
    puts(str3);
    printf("%d \n", strlen(str3));

    return 0; 
}*/

/*int Fun (char ch){ 연습문제 1 문자열을 전달받아 문자열 사이에 있는 숫자만을 더해라 2021. 11. 05
    int diff = 1 -'1';
    return ch + diff;
}

int main (void){
    char str[20];
    int len, sum = 0;
    printf("문자열을 입력하시오 : ");
    fgets(str, sizeof(str),stdin);
    puts(str);
    len = strlen(str);

    for(int i = 0; i < len; i++){

        if('1'<=str[i] && '9'>=str[i]){
            sum += Fun(str[i]);
        }
    }

    printf("숫자의 합 : %d ", sum);
    return 0;
}*/

/*void Remove (char str[]){ 널문자를 소멸시켜주는 함수
    int len = strlen(str);
    str[len-1] = 0;
}

int main (void){  연습문제 2번 2021. 11. 05 문자열을 붙이되 널문자는 제거하고 붙여라
    char str1[20];
    char str2[30];
    char str3[40];

    printf("1번째 문자열을 입력하시오: ");
    fgets(str1, sizeof(str1), stdin);
    Remove(str1); 첫번째 문자열에서 널문자 제거
    printf("2번째 문자열을 입력하시오: ");
    fgets(str2, sizeof(str2), stdin);
    Remove(str2); 두번째 문자열에서 널문자 제거

    strcat(str3, str1);
    strcat(str3, str2);
    strlen(str3); 문자열의 길이를 나타낸 코드

    puts(str3);
    printf("%d", strlen(str3)); 문자열의 길이 출력

    return 0;
}*/

/*2021.11.05 연습문제 3번 이름과 나이를 입력하고 이를 비교하는 문제 이름과 나이 사이에는 공백이 존재하여야 한다.*/

/*int Space (char str[]){ 이름과 나이 사이에 공백이 있는지 확인하는 함수
    int len;
    len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            return i;
        }
    }
    return -1;

}
int Name (char str1[], char str2[]){ 이름이 동일한지 확인하는 함수
    int index1 = Space(str1);
    int index2 = Space(str2);

    if(index1 != index2){
        return 0;
    }
    else{
        return !strncmp(str1, str2, index1);
    }

}

int Age (char str1[], char str2[]){ 나이를 비교하는 함수
    int age1, age2;
    int index1 = Space(str1);
    int index2 = Space(str2);

    age1 = atoi(&str1[index1+1]);
    age2 = atoi(&str2[index2+1]);

    if(age1 == age2){
        return 1;
    }
    else{
        return 0;
    }

}

int main (void){
    char str1[20];
    char str2[20];

    puts("이름과 나이를 입력하시오: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1] = 0; 널문자가 들어갈 위치를 확보하는 코드
    puts("이름과 나이를 입력하시오: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1] = 0;
    


    if(Name(str1,str2)){
        puts("이름이 동일합니다. \n");
    }
    else{
        puts("이름이 동일하지 않습니다. \n");
    }

    if(Age(str1,str2)){
        puts("나이가 동일합니다. \n");
    }
    else{
        puts("나이가 동일하지 않습니다. \n");
    }


    return 0;
}*/

