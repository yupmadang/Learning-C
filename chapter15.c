#include <stdio.h>

/*void CalcArr(int arr[]){ 문제 1번 : 배열을 이용한 홀수, 짝수 출력문제

    printf("홀수 출력 : ");
    for(int i = 0; i < 10 ; i++ ){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}

void CalcArr2(int arr[]){

    printf("짝수 출력 : ");
    for (int i =0 ; i < 10 ; i++){
        if(arr[i] % 2 == 0 ){
            printf("%d ", arr[i]);
        }
    }
}





int main (void){

    int arr[10];
    for (int i = 0; i < 10; i++){
        printf("배열을 입력하시오 : ");
        scanf("%d", &arr[i]);

    }

    CalcArr(arr);
    CalcArr2(arr);


    return 0;
}*/

/*void CalcNum (int num){ 10진수를 2진수로 변환하는 프로그램
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
    printf("정수를 입력하세요: ");
    scanf("%d ", &num);

    CalcNum(num);
    printf("\n");

    return 0;
}

 int main(void){ 문제 3번 홀수부터 크기순 출력 후 짝수 출력
      int num;
      int arr[10];
      int A = 9;
      int B = 0;

      printf("정수 10개 입력: \n");
        
      for(int i=0; i<10; i++){   
          printf("입력: ");
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