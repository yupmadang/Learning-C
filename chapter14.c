#include <stdio.h>

/*void ShowArrayElem(int *param, int len){ 배열의 주소 값을 전달받는 함수 + 배열의 길이도 추가(???? 왜 ???)
    for (int i = 0; i < len ; i++){
        printf("%d ", param[i]);
    }
    printf("\n");
}

int main (void){

    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    ShowArrayElem(arr1, sizeof(arr1) / sizeof(int)); arr1의 주소 값을 복사하여 함수에 전달
    ShowArrayElem(arr2, sizeof(arr2) / sizeof(int)); arr2의 주소 값을 복사하여 함수에 전달


    return 0;
}

void ShowArrayElem(int *param, int len){ int *param을 사용하고 있지만 int param[]으로 선언 할 수도 있고 더 자주 쓰인다. 
    for (int i = 0; i < len ; i++){     (추가) 이 같은 선언은 매개변수에서만 허용한다.
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddArrayElem(int *param, int len, int add){ 배열의 값을 증가시키기 위한 함수
    for(int i = 0; i < len; i++){
        param[i] += add;
    }
}

int main (void){

    int arr[3] = {1, 2, 3};
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
    ShowArrayElem(arr,sizeof(arr) / sizeof(int));
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
    ShowArrayElem(arr,sizeof(arr) / sizeof(int));
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
    ShowArrayElem(arr,sizeof(arr) / sizeof(int));



    return 0;
}

함수의 내에서는 인자로 전달된 배열의 길이를 계산 할 수 없다.
만약 함수 내에서 계산을 하려 매개변수의 길이를 반환할 경우 포인터 변수의 크기가 출력이 되기에
함수의 매개변수로 길이를 선언한다. 위에 의문 해소 와~~~~~박수~~~~

void Swap (int n1, int n2){ Call by Value 
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("%d %d ", n1, n2);
}

int main (void){

    int num1 = 10;
    int num2 = 20;
    printf("num1 num2 : %d %d \n", num1, num2);

    Swap(num1, num2);
    printf("num1 num2 : %d %d ", num1, num2);


    return 0;
}

void Swap (int *ptr1, int *ptr2){ Call by reference
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main (void){

    int num1 = 10;
    int num2 = 20;
    printf("num1 num2 : %d %d \n", num1, num2);

    Swap(&num1, &num2);
    printf("num1 num2 : %d %d ", num1, num2);


    return 0;
}

위의 2가지 코드는 같은 결과를 위한 코드 값을 서로 뒤바꾸려 했는데 첫 코드는 안바뀐다.
이는 함수의 매개변수가 전달받는 인자를 가져오는 것이 아닌 복사해서 가져오기에 복사한 인자는 바뀌지만
원래 인자가 바뀌지 않기 때문이기에 이런 경우 주소 값을 전달하는 Call by reference 방식을 사용한다.

대표적인 함수가 scanf 함수이다.

*/

/*int AddNum (void){ Call By Value 방식 14-01-01문제
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d ", &num);

    return num;
    
}

int SqaureByValue(int n){
    int total = n;
    return total *= n;

}

int main (void){

    int num = AddNum();
    int result = SqaureByValue(num);
    printf("%d ", result);

    return 0;
}

int AddNum (void){  Call By reference 방식 14-01-01문제
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d ", &num);

    return num;
    
}

int SqaureByValue(int *ptr){
    int total = *ptr;
    return total *= *ptr;

}

int main (void){

    int num = AddNum();
    int result = SqaureByValue(&num);
    printf("%d ", result);

    return 0;
}*/





