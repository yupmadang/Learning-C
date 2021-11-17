#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main (void)
{
    int * ptr1 = (int *)malloc(sizeof(int));     malloc 함수를 이용하여 힙메모리에 int 크기만큼의 메모리를 할당한다. - malloc 함수는 void 포인터로 사용시 포인터 형을 선언하여야 한다.
    int * ptr2 = (int *)malloc(sizeof(int)*7);   malloc 함수는 void 포인터로 사용시 포인터 형을 선언하여야 한다.

    *ptr1 = 20; 
    for( int i = 0; i < 7; i++)
    {
        ptr2[i] = i+1;
    }

    printf("%d \n", *ptr1);
    for(int i = 0; i < 7; i++)
    {
        printf("%d \n", ptr2[i]);
    }

    free(ptr1);     free함수를 이용하여 힙메모리에 할당된 메모리를 소멸하고 있다.
    free(ptr2);
    return 0;
}
*/
/*
char * ReadName (void)
{
    char * name = (char*) malloc(sizeof(char*) *30);
    printf("What's your name? ");
    gets(name);
    return name;

}

int main (void)
{
    char * name1 = ReadName();
    printf("name1 : %s \n", name1);
    char * name2 = ReadName();
    printf("name2 : %s \n", name2);
    free(name1);
    free(name2);
    return 0;
}
*/
/*
malloc 함수와 결과는 같지만 인자의 전달에 차이를 보이닌 calloc 함수
malloc - 하나의 인자를 받아 크기를 정함 ex) (int*) malloc(sizeof(int)*7)
calloc - 두 개의 인자를 전달 받아 크기를 정함 ex) (int*) calloc (메모리 주소, sizeof(int)*7);
※ malloc 함수는 초기화 하지 않을 경우 난수로 초기화되지만 calloc 함수는 0으로 초기화가 진행된다.

realloc 할당된 메모리 공간을 확장시키는 함수 (힙 영역에서만 확장이 가능하다.)
※ 확장하려는 메모리의 공간이 부족 할 경우 새로운 메모리 곤간을 할당하고 기존의 값을 복사하여 반환하여 메모리의 주소가 다른 경우와
메모리공간이 충분하여 반환하는 메모리의 주소값이 동일한 경우가 있다.
*/


/*
int main (void)                  2021. 11. 17 메모리 동적할당 문제 1번: 문자열 반대로 출력
{
    int maxlen;
    printf("문자열 길이 입력: ");
    scanf("%d", &maxlen);
    getchar();

    
    char * str = (char*)malloc(sizeof(char)*(maxlen+1));
    printf("문자열 입력: ");
    fgets(str, maxlen+1, stdin);
    str[strlen(str-1)] = 0;
    int len = strlen(str);

    for (int i = len ; i > 0; i--)
    {
        if(str[i] == ' ')
        {
            printf("%s", &str[i+1]);
            str[i]=0;
        }
    }
    printf("%s ", &str[0]);
    free(str);
    return 0;
}
*/