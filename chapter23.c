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

    INT num1 = 120;                                 int num1 = 120; �� ���� ����
    PTR_INT pnum1 = &num1;                          int*pnum1 = &num1; �� ���� ����
 
    UINT num2 = 200;                                unsigned int num2 = 200; �� ���� ����
    PTR_UINT pnum2 = &num2;                         unsigned int*pnum2= &num2; �� ���� ����

    UCHAR ch = 'Z';                                 unsigned char ch = 'z'; �� ���� ����
    PTR_UCHAR pch = &ch;                            unsigned char*pch = &ch; �� ���� ����

    printf("%d %u %c \n", *pnum1, *pnum2, *pch);    ���
    return 0;
}
*/
/*
struct point                           
{
    int xpos, ypos;
};

typedef struct point POINT;           ����� ���� ����ü ����1: point ����ü�� �̸��� PONIT�� �ٲپ� ����ϰڴٴ� �ǹ�


typedef struct person                 ����� ���� ����ü ����2: person ����ü�� �̸��� PERSON�� �ٲپ� ����ϰڴٴ� �ǹ�
{
    char name[20];
    char num[20];
    int age;
} PERSON;

int main (void){

    POINT pos = {10 , 20};
    PERSON person = {"������", "010-0000-0000", 23};

    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", person.name, person.num, person.age);

    return 0;
}
*/
/* �Լ����� ����ü ������ ���ް� ��ȯ
typedef struct 
{
    int xpos;
    int ypos;
} POINT;

void showPoint (POINT pos)
{
    printf("��ǥ ��: {%d , %d} \n", pos.xpos, pos.ypos);
}

POINT center (void)
{
    POINT cen;
    printf("�ֱ� ��ǥ�� �Է��Ͻÿ�: ");
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
    puts("�̸� : ");
    gets(man.name);
    puts("��ȭ��ȣ : ");
    gets(man.num);
    puts("���� : ");
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
/* ����ü ������ ���� Ȱ��
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
typedef struct  2021. 11. 15 ����ü �������� 1��: �� ��ǥ �ڸ� �ٲٱ� (������ Ȱ��)
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