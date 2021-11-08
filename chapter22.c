#include <stdio.h>
#include <string.h>

/*struct point{ point 구조체 선언
        
    int xpos;
    int ypos;
};

int main (void){

    struct point pos1,pos2; 두 개의 구조체 변수를 선언
    double distance;

    fputs("Point pos1: ",stdout); 
    scanf("%d %d", &pos1.xpos, &pos2.ypos);

    fputs("Point pos2: ",stdout);
    scanf("%d %d", &pos1.xpos, &pos2.ypos);
    두 좌표의 거리를 구하는 식
    distance = sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

    printf("두 점의 거리는 %g 입니다. \n", distance);
    return 0;
}*/

/*struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main (void){ 구조체 예제 2번

    struct person man1, man2;
    strcpy(man1.name,"안성준"); man1.name에 '안성준' 을 복사
    strcpy(man1.phoneNum, "010-1122-3344"); man1.phoneNum에 '010-1122-3344'를 복사
    man1.age = 23;

    fputs("이름 입력: ",stdout); scanf("%s", &man2.name);
    fputs("전화번호 입력: ", stdout); scanf("%s", &man2.phoneNum);
    fputs("나이 입력: ",stdout); scanf("%d", &man2.age);

    printf("이름: %s \n",man1.name);
    printf("전화번호: %s \n",man1.phoneNum);
    printf("나이: %d \n",man1.age);

    printf("이름: %s \n",man2.name);
    printf("전화번호: %s \n",man2.phoneNum);
    printf("나이: %d \n",man2.age);

    return 0;
}*/

/*2021. 11. 08 구조체 연습문제 1번: 문자열로 이름과 주민번호를 입력받아 출력하기*/

/*struct employee 구조체 선언
{
    char name[7]; 
    char num[14]; 13자리이지만 널문자가 들어갈 위치를 확보해둔다.
    int pay;
};

int main (void){

    struct employee person; 구조체 변수 선언
    strcpy(person.name, "전용진"); 문자열에 이름 복사
    strcpy(person.num, "001026-3786110"); 주민번호 복사
    person.pay = 50000;

    printf("이름: %s \n", person.name);
    printf("주민번호: %s \n", person.num);
    printf("나이: %d \n", person.pay);

    return 0;
}*/



