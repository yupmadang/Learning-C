#include <stdio.h>
#include <string.h>

/*
typedef int INT; 
typedef int * PTR_INT;

typedef unsigned int UINT;
typedef unsigned int * PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char * PTR_UCHAR;

int main (void){

    INT num1 = 120;                                 int num1 = 120; 와 같은 선언
    PTR_INT pnum1 = &num1;                          int*pnum1 = &num1; 과 같은 선언
 
    UINT num2 = 200;                                unsigned int num2 = 200; 와 같은 선언
    PTR_UINT pnum2 = &num2;                         unsigned int*pnum2= &num2; 와 같은 선언

    UCHAR ch = 'Z';                                 unsigned char ch = 'z'; 와 같은 선언
    PTR_UCHAR pch = &ch;                            unsigned char*pch = &ch; 와 같은 선언

    printf("%d %u %c \n", *pnum1, *pnum2, *pch);    출력
    return 0;
}
*/
/*
struct point                           
{
    int xpos, ypos;
};

typedef struct point POINT;           사용자 정의 구조체 선언1: point 구조체의 이름을 PONIT로 바꾸어 사용하겠다는 의미


typedef struct person                 사용자 정의 구조체 선언2: person 구조체의 이름을 PERSON로 바꾸어 사용하겠다는 의미
{
    char name[20];
    char num[20];
    int age;
} PERSON;

int main (void){

    POINT pos = {10 , 20};
    PERSON person = {"옆마당", "010-0000-0000", 23};

    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", person.name, person.num, person.age);

    return 0;
}
*/
/* 함수로의 구조체 변수의 전달과 변환
typedef struct 
{
    int xpos;
    int ypos;
} POINT;

void showPoint (POINT pos)
{
    printf("좌표 값: {%d , %d} \n", pos.xpos, pos.ypos);
}

POINT center (void)
{
    POINT cen;
    printf("최근 좌표를 입력하시오: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

int main (void){
    POINT Pos = center();
    showPoint(Pos);
    return 0;
}
*/
/*
typedef struct person
{
    char name[20];
    char num[20];
    int age;
} PERSON;

void showPerson (PERSON man)
{
    puts(man.name);
    puts(man.num);
    puts(man.age);
}

PERSON insertInfo (void)
{
    PERSON man;
    puts("이름 : ");
    gets(man.name);
    puts("전화번호 : ");
    gets(man.num);
    puts("나이 : ");
    gets(man.age);
    return man;
}

int main (void)
{
    PERSON man = insertInfo();
    showPerson(man);

    return 0;
}
*/
/*
typedef struct point
{
    int xpos;
    int ypos;
} Point;

void OrgSymTrans (Point * ptr)
{
    ptr -> xpos = (ptr -> xpos) * -1;
    ptr -> ypos = (ptr -> ypos) * -1;
}

void showPosition (Point pos)
{
    printf("[%d , %d] \n", pos.xpos, pos.ypos);
}


int main (void)
{
    Point pos = {7 , -5};
    OrgSymTrans(&pos);
    showPosition(pos);
    OrgSymTrans(&pos);
    showPosition(pos);
    return 0;
}
*/
/* 구조체 변수의 연산 활용
typedef struct
{
    int xpos, ypos;
}Point;

Point AddPos (Point pos1, Point pos2)
{
    Point pos = {pos1.xpos + pos2.xpos , pos1.ypos + pos2.ypos};
    return pos;
}

Point MinPos (Point pos1 , Point pos2)
{
    Point pos = {pos1.xpos - pos2.xpos , pos1.ypos - pos2.ypos};
    return pos;
}

int main (void){
    Point pos1 = {5, 6};
    Point pos2 = {2, 9};
    Point result;

    result = AddPos(pos1 , pos2);
    printf("[%d , %d] \n", result.xpos, result.ypos);
    result = MinPos(pos1 , pos2);
    printf("[%d , %d] \n", result.xpos, result.ypos);

    return 0;
}
*/
/*
typedef struct  2021. 11. 15 구조체 연습문제 1번: 두 좌표 자리 바꾸기 (포인터 활용)
{
    int xpos;
    int ypos;
} Point;

void swapPoint (Point *pos1, Point *pos2)
{
    Point ptr;
    ptr = *pos1;
    *pos1 = *pos2;
    *pos2 = ptr;

}

void showPoint (Point pos)
{
    printf("[%d , %d] \n", pos.xpos, pos.ypos);
}

int main (void)
{
    Point pos1 = {2 , 4};
    Point pos2 = {5 , 7};
    showPoint(pos1);
    showPoint(pos2);
    swapPoint(&pos1, &pos2);
    showPoint(pos1);
    showPoint(pos2);
    
    return 0;
}
*/
/* 구조체 중첩 예제
typedef struct point
{
    int xpos;
    int ypos;
}Point;

typedef struct circle
{
    Point cen;
    double rad;
}Circle;


void Info (Circle *cptr)
{
    printf("[%d , %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
    printf("radius: %g \n", cptr -> rad);
}

int main (void)
{
    Circle c1 = {{1, 2}, 3.5};
    Circle c2 = {2, 4, 3.9};
    Info(&c1);
    Info(&c2);
    return 0;
}
*/
/*
typedef struct point     2021. 11. 15 구조체 사용자 정의 연습문제 2번 : 좌표를 이용한 사각형 넓이 출력
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point ul;
    Point rl;
} Rectangle;

void CalcArea (Rectangle area)
{
    printf("넓이 : %d \n", (area.rl.xpos-area.ul.xpos) * (area.rl.ypos-area.ul.ypos));
}

void ShowPoint (Rectangle area)
{
    printf("[%d, %d] \n", area.ul.xpos, area.ul.ypos);
    printf("[%d, %d] \n", area.ul.xpos, area.rl.ypos);
    printf("[%d, %d] \n", area.rl.xpos, area.ul.ypos);
    printf("[%d, %d] \n", area.rl.xpos, area.rl.ypos);
}

int main (void)
{
    Rectangle ul = {{0, 0}, {7, 5}};
    Rectangle rl = {100, 100};  --------------------------> 정의 되지 않은 구조체 변수는 0으로 초기화 됨으로 하나의 좌표를 입력해도 값이 출력된다.
    CalcArea(ul);
    ShowPoint(ul);
    printf("\n");
    CalcArea(rl);
    ShowPoint(rl);
    

    return 0;
}
*/
/*
typedef struct sbox       구조체 sbox
{
    int mem1;
    int mem2;
    double mem3;
}Sbox;

typedef union ubox        공용체 ubox
{
    int mem1;
    int mem2;
    double mem3;
}Ubox;

int main (void)          결과로 구조체는 각 멤버를 할당하고 공용체는 가장 크기가 큰 변수를 할당하고 이를 다른 멤버가 공유한다.
{                        이는 각 메모리 공간을 분리하여 접근 할 수 있다느걸 의미.
    Sbox sb;
    Ubox ub;
    printf("%p %p %p \n",&sb.mem1, &sb.mem2, &sb.mem3);
    printf("%p %p %p \n",&ub.mem1, &ub.mem2, &ub.mem3);
    printf("%d %d \n", sizeof(sb), sizeof(ub));

    return 0;
}
*/
