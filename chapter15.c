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

  }

  void CalcWord (char param[], int len){  ȸ���� �Ǻ��ϴ� �Լ�

      int start = 0;
      int end = len-1;
      for(int i=0; i < len/2; i++){ �迭�� ������ ������ �����Ǵ� ��ġ�� ���� ��
          if(start == end){
              break;
          }
          if(param[start] != param[end]){
              printf("ȸ���� �ƴմϴ�.\n");
              return;
          }

          start += 1;
          end -= 1;
      }
      printf("ȸ�� �Դϴ�.\n");
      return;

  }

  int main(void){

      char str[30]; 
      int len;

      printf("�ܾ� �Է�: ");
      scanf("%s", str);

      printf("�Է��� �ܾ�: ");

      for(len=0; len<30; len++){ �迭�� ���̸� ����ϴ� �Լ�
          if(str[len] == '\0'){
              break;
          }
          printf("%c", str[len]);
      }

      printf("\n");
      printf("�Է¹��� �ܾ��� ����: %d \n", len);
        
      CalcWord(str, len);

      return 0;

  }

  int DesSort(int param[], int len){ ���޹��� �迭�� ���� ������������ �����ϴ� �Լ��Դϴ�.
      for(int i=0; i<len; i++){
          for(int j=0; j<len-i-1; j++){
              int temp;
              if(param[j] < param[j+1]){
                  temp = param[j+1];
                  param[j+1] = param[j];
                  param[j] = temp;
              }
          }
      }
        
      return param;
  }

  void ShowArr(int param[], int len)
  {
      for(int i=0; i<len; i++){
          printf("%d ", param[i]);
      }

      printf("\n");
  }

  int main(void)
  {   
      int arr[7];

      for(int i=0; i<7; i++){
          printf("������ �Է��Ͻÿ�: ");
          scanf("%d", &arr[i]);
      }

      printf("��������: ");
      ShowArr(DesSort(arr, 7), 7);


      return 0;
  }*/