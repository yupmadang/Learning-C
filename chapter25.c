#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main (void)
{
    int * ptr1 = (int *)malloc(sizeof(int));     malloc �Լ��� �̿��Ͽ� ���޸𸮿� int ũ�⸸ŭ�� �޸𸮸� �Ҵ��Ѵ�. - malloc �Լ��� void �����ͷ� ���� ������ ���� �����Ͽ��� �Ѵ�.
    int * ptr2 = (int *)malloc(sizeof(int)*7);   malloc �Լ��� void �����ͷ� ���� ������ ���� �����Ͽ��� �Ѵ�.

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

    free(ptr1);     free�Լ��� �̿��Ͽ� ���޸𸮿� �Ҵ�� �޸𸮸� �Ҹ��ϰ� �ִ�.
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
malloc �Լ��� ����� ������ ������ ���޿� ���̸� ���̴� calloc �Լ�
malloc - �ϳ��� ���ڸ� �޾� ũ�⸦ ���� ex) (int*) malloc(sizeof(int)*7)
calloc - �� ���� ���ڸ� ���� �޾� ũ�⸦ ���� ex) (int*) calloc (�޸� �ּ�, sizeof(int)*7);
�� malloc �Լ��� �ʱ�ȭ ���� ���� ��� ������ �ʱ�ȭ������ calloc �Լ��� 0���� �ʱ�ȭ�� ����ȴ�.

realloc �Ҵ�� �޸� ������ Ȯ���Ű�� �Լ� (�� ���������� Ȯ���� �����ϴ�.)
�� Ȯ���Ϸ��� �޸��� ������ ���� �� ��� ���ο� �޸� �ﰣ�� �Ҵ��ϰ� ������ ���� �����Ͽ� ��ȯ�Ͽ� �޸��� �ּҰ� �ٸ� ����
�޸𸮰����� ����Ͽ� ��ȯ�ϴ� �޸��� �ּҰ��� ������ ��찡 �ִ�.
*/


/*
int main (void)                  2021. 11. 17 �޸� �����Ҵ� ���� 1��: ���ڿ� �ݴ�� ���
{
    int maxlen;
    printf("���ڿ� ���� �Է�: ");
    scanf("%d", &maxlen);
    getchar();

    
    char * str = (char*)malloc(sizeof(char)*(maxlen+1));
    printf("���ڿ� �Է�: ");
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