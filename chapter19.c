#include <stdio.h>

/*void showStr (char* str){ �Լ��� �̸��� �޸𸮿� ���� �� �Լ��� �ּҿ� ������ �ǹ̸� ������.
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

/*int WhoIsFirst (int num1, int num2, int (*cmp)(int n1, int n2)){ 3��° ���ڿ��� �Լ��� �ּҰ��� ���� �Ѵ�. == �Լ� ������ ���� �����ϴ�.
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

    printf("������� 1 \n");
    first = WhoIsFirst(age1, age2, OlderFirst); 3��° ���ڿ� OlderFirst �Լ��� �ּҰ��� ���� ��. �̸� ��ü�� �迭�� ���� �ּҸ� ��� �ִ�.
    printf("%d���� %d�� �� %d���� ���� ����. \n", age1, age2, first);

    printf("������� 2 \n");
    first = WhoIsFirst(age1, age2, YoungFirst);
    printf("%d���� %d�� �� %d���� ���� ����. \n", age1, age2, first);

    return 0;
}*/

/*int main (int argc, char*argv[]){ main �Լ����� ���� ���� ����
    int i = 0;
    printf("���޵� ���ڿ� �� �� : %d \n", argc);

    for(i= 0; i < argc; i++){
        printf("%d ��° ���ڿ� : %s \n", i+1, argv[i]);
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