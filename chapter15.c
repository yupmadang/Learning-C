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

  }

  void CalcWord (char param[], int len){  회문을 판별하는 함수

      int start = 0;
      int end = len-1;
      for(int i=0; i < len/2; i++){ 배열을 반으로 나누어 대응되는 위치의 값과 비교
          if(start == end){
              break;
          }
          if(param[start] != param[end]){
              printf("회문이 아닙니다.\n");
              return;
          }

          start += 1;
          end -= 1;
      }
      printf("회문 입니다.\n");
      return;

  }

  int main(void){

      char str[30]; 
      int len;

      printf("단어 입력: ");
      scanf("%s", str);

      printf("입력한 단어: ");

      for(len=0; len<30; len++){ 배열의 길이를 계산하는 함수
          if(str[len] == '\0'){
              break;
          }
          printf("%c", str[len]);
      }

      printf("\n");
      printf("입력받은 단어의 길이: %d \n", len);
        
      CalcWord(str, len);

      return 0;

  }

  int DesSort(int param[], int len){ 전달받은 배열의 수를 내림차순으로 정리하는 함수입니다.
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
          printf("정수를 입력하시오: ");
          scanf("%d", &arr[i]);
      }

      printf("내림차순: ");
      ShowArr(DesSort(arr, 7), 7);


      return 0;
  }*/