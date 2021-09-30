#include <stdio.h>

/*int addNum(void) { 09-01-01

    int num;
    printf("인자를 입력하시오 : ");
    scanf("%d", &num);

    return num;
}

int maxNum(int num1, int num2, int num3) {

    if (num1 < num2) {

        return (num2 < num3) ? num3 : num2;

    }

    else {

        return (num1 > num3) ? num1 : num3;
    }
}

int minNum(int num1, int num2, int num3) {

    if (num1 < num2) {

        return (num1 < num3) ? num1 : num3;

    }

    else {

        return (num2 < num3) ? num2 : num3;

    }
}


int main(void) { 

    int num1, num2, num3, result;

    printf("숫자를 크기별로 나열합니다. \n");

    num1 = addNum();
    num2 = addNum();
    num3 = addNum();

    result = maxNum(num1, num2, num3);
    printf("최댓값은 %d 입니다. \n", result);

    result = minNum(num1, num2, num3);
    printf("최솟값은 %d 입니다. \n", result);


    return 0;


}*/

/*int Select(void) { 09-01-02

    int sel;
    printf("어떤 종류입니까 : ");
    scanf("%d", &sel);

    return sel;
}

float AddNum(void) {

    float tem;
    printf("온도를 입력하세요 : ");
    scanf("%f", &tem);

    return tem;
}

float CelTOFah(float cel) {

    float Fah = 1.8 * cel + 32;

    return Fah;


}

float FahTOCel(float fah) {

    float Cel = (fah - 32) / 1.8;

    return Cel;


}

int main(void) {

    float result, num;
    int select;

    select = Select();
    num = AddNum();

    if (select == 1) {

        printf("온도는 %f 입니다.", CelTOFah(num));

    }

    else if (select == 2) {

        printf("온도는 %f 입니다.", FahTOCel(num));
    }

    return 0;
}*/

/*int total = 0; - 이부분을 전역변수에서 제거하고

int AddToTotal(int num){

    total+=num; - 이부분을 static 변수로 선언을 하면 전역변수와 static 변수로 전환이 가능하다.
    return total;

}

int main (void){

    int num, i;
    for(i = 0; i < 3; i++){

        printf("정수를 입력하세요 : %d ", i+1 );
        scanf("%d",&num);
        printf("누적 : %d \n",AddToTotal(num));
    }

    return 0;
}*/