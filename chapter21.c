#include <stdio.h>
#include <string.h>

/*int main (void){
    int ch1, ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2, stdout);

    return 0;
}*/

/*int main (void){ EOF �ǹ�, window : ctrl-z, lenux = ctrl-d
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
    
    printf("���ڸ� �Է��ϼ���.");
    ch = getchar();
    ch = Swich(ch);

    if(ch == -1){
        puts("�߸��� �Է��Դϴ�.");
        return -1;
    }
   
    putchar(ch);
    return 0;
}*/

/*int main (void){ puts, fputs �Լ��� ������, ������ ����
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

/*int main (void){ fgets�Լ��� �ڽ��� �ȿ� ���Ե� \n�� �ϳ��� ���ڿ��� �ν��Ѵ�. ���α׷��ֽ� gets�Լ����� fgets �Լ��� �ַ� ��� :
                   �迭�� ������ �����ϱ⿡ �����÷ο츦 ������ �� �ִ�.

    char str[50];

    for(int i =0; i < 3; i++){
        fgets(str,sizeof(str),stdin);
        printf("Read %d: %s \n",i+1,str);
    }

    return 0;
}*/

/*void ClearLine (void){ �Է¹��۸� ���� �Լ�
    while(getchar() != '\n');
}*/

/*int main (void){ 
    char perID[7];
    char name[10];

    fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ",stdout); ����Ű���� 7���ڰ� ���ԵǾ� �̸��� �Է��� ��ȸ�� ����......�Է¹��ۿ� \n �� ����.
    fgets(perID,sizeof(perID),stdin);

    fputs("�̸� �Է�: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("�ֹι�ȣ: %s \n", perID);
    printf("�̸�: %s \n", name);

    return 0;
}*/

/*int main (void){ �Է¹��۸� ����� �̸��� �Է��ϴ� �ڵ� ���� -> \n�� ���ŵǾ� �̸��Է��� ����
    char perID[7];
    char name[10];

    fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ",stdout);
    fgets(perID,sizeof(perID),stdin);
    ClearLine();

    fputs("�̸� �Է�: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("�ֹι�ȣ: %s \n", perID);
    printf("�̸�: %s \n", name);

    return 0;
}*/

/*void Remove (char str[]){
    int len = strlen(str);
    str[len-1] = 0;
}

int main (void){

    char str[100];
    printf("���ڿ� �Է�: ");
    fgets(str,sizeof(str),stdin);
    printf("���� : %d, ���� : %s \n", strlen(str), str);

    Remove(str);
    printf("���� : %d, ���� : %s \n", strlen(str), str);\

    return 0;
}*/

/*int main (void){ strcpy �Լ��� strncpy�Լ� ��
    char str1[20]="1234567890";
    char str2[20];
    char str3[5];

    strcpy(str2, str1);
    puts(str2);

    strncpy(str3, str1, sizeof(str3)); ���ڿ��� ������ �� �ι��ڴ� �����ϰ� ������. �Ŀ� �ʰ��� ������ ���
    puts(str3);

    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1] = 0; ���� �� �ι��ڸ� ���� ��ġ�� Ȯ�����ִ� �ڵ�
    puts(str3);
    return 0;
}*/

/*int main (void){ strncat�� strncpy�� �ٸ��� �ι��ڵ� �����Ͽ� �ٿ��ش�.
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

/*int Fun (char ch){ �������� 1 ���ڿ��� ���޹޾� ���ڿ� ���̿� �ִ� ���ڸ��� ���ض� 2021. 11. 05
    int diff = 1 -'1';
    return ch + diff;
}

int main (void){
    char str[20];
    int len, sum = 0;
    printf("���ڿ��� �Է��Ͻÿ� : ");
    fgets(str, sizeof(str),stdin);
    puts(str);
    len = strlen(str);

    for(int i = 0; i < len; i++){

        if('1'<=str[i] && '9'>=str[i]){
            sum += Fun(str[i]);
        }
    }

    printf("������ �� : %d ", sum);
    return 0;
}*/

