#include <stdio.h>

/*void CalcArr(int arr[]){ ���� 1�� : �迭�� �̿��� Ȧ��, ¦�� ��¹���

    printf("Ȧ�� ��� : ");
    for(int i = 0; i < 10 ; i++ ){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}

void CalcArr2(int arr[]){

    printf("¦�� ��� : ");
    for (int i =0 ; i < 10 ; i++){
        if(arr[i] % 2 == 0 ){
            printf("%d ", arr[i]);
        }
    }
}





int main (void){

    int arr[10];
    for (int i = 0; i < 10; i++){
        printf("�迭�� �Է��Ͻÿ� : ");
        scanf("%d", &arr[i]);

    }

    CalcArr(arr);
    CalcArr2(arr);


    return 0;
}*/

/*void CalcNum (int num){ 10������ 2������ ��ȯ�ϴ� ���α׷�
    int rem = num % 2;  
    num /= 2;  

    if(num > 0){
        CalcNum(num);
    }
    printf("%d", rem);
    return;
}

int main (void){
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d ", &num);

    CalcNum(num);
    printf("\n");

    return 0;
}

 int main(void){ ���� 3�� Ȧ������ ũ��� ��� �� ¦�� ���
      int num;
      int arr[10];
      int A = 9;
      int B = 0;

      printf("���� 10�� �Է�: \n");
        
      for(int i=0; i<10; i++){   
          printf("�Է�: ");
          scanf("%d", &num);
            
          switch(num%2){
              case 0:
                  arr[A] = num;
                  A--;
              break;

              case 1:
                  arr[B] = num;
                  B++;
              break;
          }
      }
        
      for(int i=0; i<10; i++){
          printf("%d ", arr[i]);
      }
        
      return 0;

  }*/