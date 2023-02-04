#include<stdio.h>
#include<string.h>

void main(){
    // received inputs
    char str1[6];
    char str2[6];
    int top,left;
    printf("Enter str1: \n");
    scanf("%s",&str1);
    printf("Enter str2: \n");
    scanf("%s",&str2);
    //printf("%s,%s",str1,str2);
    //received string inputs successfully
    int matrix[7][7];
    for(int i=0;i<=6;i++){
        matrix[i][0]=0;
        matrix[0][i]=0;
    }
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if (str1[i-1]==str2[j-1])
                matrix[i][j]=matrix[i-1][j-1];
            else
                {left=matrix[i][j-1];
                top=matrix[i-1][j];
                if (left>top)
                matrix[i][j]=left;
                else
                matrix[i][j]=top;
            }
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
