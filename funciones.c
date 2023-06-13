#include<stdio.h>

void multiplicarMatrices(float m1[4][2]){
    float mult[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    float trans[2][4]={{3,1.4,7.8,8},{-7,9,-3.2,0}};
    float det ;

    int i=0,j=0,z=0,k=0;
    for (i = 0; i<4;i++){
        for (j=0; j<4;j++){
            mult[i][j]=mult[i][j]+((m1[i][0]*trans[0][j]+ m1[i][1]*trans[1][j] ));
        }
    }

    for (i = 0; i<4;i++){
        for (j=0; j<4;j++){
            printf("%.2f ",mult[i][j]);
        }
        printf("\n");
    }
    det = 0;
      (mult[0][1] * mult[1][2] * mult[2][0]*mult[3][0]) +
          (mult[0][2] * mult[1][3] * mult[2][0]*mult[3][1]) -
          (mult[0][3] * mult[1][2] * mult[2][2]*mult[3][0]) -
          (mult[0][0] * mult[1][3] * mult[2][2]*mult[3][1]) -
          (mult[0][1] * mult[1][0] * mult[2][3]*mult[3][3]);

    printf("%f",det);
}

           