#include <stdio.h>
#include <string.h>

/*struct point{ point ����ü ����
        
    int xpos;
    int ypos;
};

int main (void){

    struct point pos1,pos2; �� ���� ����ü ������ ����
    double distance;

    fputs("Point pos1: ",stdout); 
    scanf("%d %d", &pos1.xpos, &pos2.ypos);

    fputs("Point pos2: ",stdout);
    scanf("%d %d", &pos1.xpos, &pos2.ypos);
    �� ��ǥ�� �Ÿ��� ���ϴ� ��
    distance = sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

    printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);
    return 0;
}*/

/*struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main (void){ ����ü ���� 2��

    struct person man1, man2;
    strcpy(man1.name,"�ȼ���"); man1.name�� '�ȼ���' �� ����
    strcpy(man1.phoneNum, "010-1122-3344"); man1.phoneNum�� '010-1122-3344'�� ����
    man1.age = 23;

    fputs("�̸� �Է�: ",stdout); scanf("%s", &man2.name);
    fputs("��ȭ��ȣ �Է�: ", stdout); scanf("%s", &man2.phoneNum);
    fputs("���� �Է�: ",stdout); scanf("%d", &man2.age);

    printf("�̸�: %s \n",man1.name);
    printf("��ȭ��ȣ: %s \n",man1.phoneNum);
    printf("����: %d \n",man1.age);

    printf("�̸�: %s \n",man2.name);
    printf("��ȭ��ȣ: %s \n",man2.phoneNum);
    printf("����: %d \n",man2.age);

    return 0;
}*/

/*2021. 11. 08 ����ü �������� 1��: ���ڿ��� �̸��� �ֹι�ȣ�� �Է¹޾� ����ϱ�*/

/*struct employee ����ü ����
{
    char name[7]; 
    char num[14]; 13�ڸ������� �ι��ڰ� �� ��ġ�� Ȯ���صд�.
    int pay;
};

int main (void){

    struct employee person; ����ü ���� ����
    strcpy(person.name, "������"); ���ڿ��� �̸� ����
    strcpy(person.num, "001026-3786110"); �ֹι�ȣ ����
    person.pay = 50000;

    printf("�̸�: %s \n", person.name);
    printf("�ֹι�ȣ: %s \n", person.num);
    printf("����: %d \n", person.pay);

    return 0;
}*/

/*struct point
{
    int xpos;
    int ypos;
};

int main (void){

    struct point arr[3]; ����ü �迭 ����

    for(int i = 0; i < 3; i++){
        printf("��ǥ �Է�: ");
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    for(int i = 0; i < 3; i++){
        printf("[%d, %d] \n",arr[i].xpos, arr[i].ypos);
    }

    return 0;
}*/

/*����ü �迭�� arr[0]���� ����ü�� x��, y���� ���� ����ִ�. �迭�� ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.*/

/*struct employee �������� 2��: ����ü �迭�� �����ϰ� �� ���� �Է��� �� ����ϱ�
{
    char name[7]; 
    char num[14];
    int pay;
};

int main (void){

    struct employee person[3];
    for(int i = 0; i < 3; i++){
        printf("�̸��Է�: ");
        scanf("%s", &person[i].name);
        printf("��ȣ�Է�: ");
        scanf("%s",&person[i].num);
        printf("�޿��Է�: ");
        scanf("%d", &(person[i].pay));
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        printf("�̸�: %s \n", person[i].name);
        printf("�ֹι�ȣ: %s \n", person[i].num);
        printf("�޿�: %d", person[i].pay);
        printf("\n");
    }
    return 0;
}*/



