#include <stdio.h>


/*int main(void) { 2021.10.04 11-1-1 문제풀이 : 배열입력 받아 합, 최댓값, 최솟값 구하기

    int arr[5];
    int Max, Min, Sum;

    for (int i = 0; i < 5; i++) {
        printf("숫자를 입력하시오 : ");
        scanf("%d", &arr[i]);
    }

    Max = Min = Sum = arr[0];
    for (int i = 1; i < 5; i++) {
        Sum += arr[i];
        if (Max < arr[i])
            Max = arr[i];
        if (Min > arr[i])
            Min = arr[i];

    }

    printf("합: %d \n", Sum);
    printf("최댓값: %d \n", Max);
    printf("최솟값: %d \n", Min);


    return 0;
}*/

/*int main(void) { 2021.10.04 11-1-2 문제풀이 : 문자 입력 및 출력

    char arr[9];
    for (int i = 0; i < 9; i++) {
        scanf("%c", &arr[i]);

    }

    for (int i = 0; i < 9; i++) {
        printf("결과 : %c \n", arr[i]);

    }


    return 0;
}*/

/*int main(void) { 2021.10.04 11-2-1 문제풀이 : 문자 입력 후 배열 길이 출력


    char arr[100];
    int len = 0;
    printf("단어를 입력하시오 : ");
    scanf("%s", &arr);
    while (arr[len] != 0) {
        len++;

    }

    printf("배열의 길이 : %d", len);
}*/

/*int main(void) { 2021.10.04 11-2-2 문제풀이 : 문자 입력 후 문자 정렬 반전 


	int len, temp;
	len = 0;

	char voca[100];
	printf("단어를 입력하시오 : ");
	scanf("%s", voca);
	printf("\n");

	printf("본 단어 : %s ",voca);

	while (voca[len] != '\0')
		len++;

	for (int i = 0; i < len / 2; i++) {
		temp = voca[i];
		voca[i] = voca[(len - i) - 1];
		voca[(len - i) - 1] = temp;
	}

	printf("반전단어 : %s", voca);


	return 0;
}*/

/*int main(void){

	char arr[50];
	printf("영단어를 입력하세요 \n");
	scanf("%s", arr);                    *scanf 함수의 경우 %c로 받을 경우 배열의 첫머리만 입력받음, 단어를 입력할 경우 %s로 입력해야 한다.

	int i = 0;
	char max = arr[0];


	while (arr[i] != '\0'){

		if (max < arr[i])
			max = arr[i];
		i++;
	}


	printf("아스키 코드 값이 가장 큰 문자 : %c", max);


    return 0;
}*/

