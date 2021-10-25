#include <stdio.h>

int main (void){

    int villa [4][2];
    int popu;

    /*가구별 거주인원 입력*/
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 2; j++){
            printf("%d 층 %d 호 인구수: ",i+1,j+1);
            scanf("%d", &villa[i][j]);
        }
    }
    /*가구원 거주인원 출력*/
    for(int i =0; i < 4; i++){
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf("%d 층의 인구수: %d \n",i+1,popu);
    }

    return 0;
}