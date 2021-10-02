#include <stdio.h>

/*2021.10.02 C언어 문제풀이*/
/*chapter 10 1번 문제 : 10진수 16진수로의 변환, 서식문자 사용*/

/*int AddNum (void){

    int num;
    printf("10진수를 입력하시오 : ");
    scanf("%d" , &num);
    return num;
}

int main(void){

    int num;
    num = AddNum();
    printf("16진수 값은 %x" , num);


    return 0;
}*/

/*chapter 10 2번 문제 : 지정된 범위 구구단 출력 , 입력 순서 관계없이 출력이 가능해야 함*/

/* int AddDan(void) { 

    int num;
    printf("단을 입력하시오 : ");
    scanf("%d", &num);
    return num;
}

int Calc(int num1, int num2){

        while(num1 >= num2) {

            for (int i = 1; i <= 10; i++) {
                printf("%d * %d = %d", num2, i, num2 * i);
                printf("\n");;
            }
            num2++;

            if (num1 == num2) {
                break;
            }
         
        }

        while (num1 <= num2) {

            for (int i = 1; i <= 10; i++) {
                printf("%d * %d = %d", num1, i, num1 * i);
                printf("\n");;
            }
            num1++;

            if (num1 == num2) {
                break;
            }

        }

}


int main(void){

    int dan, dan2, result;
    dan = AddDan();
    dan2 = AddDan();

    result = Calc(dan, dan2);
    


    return 0;

} */

/*chapter 10 3번 문제 : 최대공약수 산출, 유클리드 호제법*/

/*int AddNum(void) {

    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);
    return num;
}



int CommonFactor(int num1, int num2) {

    if (num2 == 0) {

        return num1;

    }

    else {
        return CommonFactor(num2, num1 % num2);
    }

    while(1){

        int num3 = num2;
        num2 = num1%num2;
        num1 = num3;

        if(num2 == 0){
            return num1;
        }

        return num1;
    }

}

int main(void) {

    int num1, num2, result;

    num1 = AddNum();
    num2 = AddNum();
    result = CommonFactor(num1, num2);
    printf("%d", result);

    return 0;

}*/

/*chapter 10 4번 문제 :  */



int main (void){



    return 0;
}