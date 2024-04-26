
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
 void inputMatrix(int[3][3],int,int);
void outputMatrix(int[3][3],int,int);
void multiMatrix(int[3][3],int[3][3],int[3][3],int,int,int);
void sumMatrix(int[3][3],int[3][3],int[3][3],int,int,int,int);
void transposeMatrix(int[3][3],int ,int);

void main()
{
    int a[3][3],b[3][3],c[3][3];
    int r1,c1,r2,c2,n;
   printf("Enter 3 for transpose");
      
  

while(1)
{ 

                   printf("Enter your choice\n");
                   printf("Enter 1 for sum\n");
                   printf("Enter 2 for multiplication\n");
                   printf("Enter 3 for transpose\n");
                    printf("Enter 4 for exit\n");
                     scanf("%d",&n);
              
                    

    switch(n)
    {

        case 1:     printf("enter the rows");
                     scanf("%d",&r1);
                    printf("enter the cols");
                    scanf("%d",&c1);
                    printf("enter the rows");
                    scanf("%d",&r2);
                    printf("enter the cols");
                    scanf("%d",&c2);
                    inputMatrix(a,r1,c1);
                    outputMatrix(a,r1,c1);

                    inputMatrix(b,r2,c2);
                     outputMatrix(b,r2,c2);
                printf("Here is the sum of two matrices\n");
                sumMatrix(c,a,b,r1,c1,r2,c2);
                 outputMatrix(c,r1,c1);
                 break;

        case 2:     printf("enter the rows");
                        scanf("%d",&r1);
                     printf("enter the cols");
                     scanf("%d",&c1);
                      printf("enter the rows");
                      scanf("%d",&r2);
                     printf("enter the cols");
                     scanf("%d",&c2);
                   inputMatrix(a,r1,c1);
                    outputMatrix(a,r1,c1);

                    inputMatrix(b,r2,c2);
                     outputMatrix(b,r2,c2);
                printf("Here is the multiplication of two matrices\n");
                 multiMatrix(c,a,b,r1,c1,c2);
                 outputMatrix(c,r1,c1);
                 break;
        case 3:   printf("enter the rows");
                   scanf("%d",&r1);
                    printf("enter the cols");
                     scanf("%d",&c1);
                   inputMatrix(a,r1,c1);
                    outputMatrix(a,r1,c1);

               printf("Here is the transpose of a matrix\n");
                transposeMatrix(a,r1,c1);
                outputMatrix(a,r1,c1);
                break;
        case 4:   exit(1);
        break;

    }  
     
}
}
void inputMatrix(int a[3][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void outputMatrix(int a[3][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int c[3][3],int a[3][3],int b[3][3],int r1,int c1,int r2,int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}

void multiMatrix(int c[3][3],int a[3][3],int b[3][3],int r1,int c1,int c2){
       for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for( int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
                
            }
        }
       }
         
}

void transposeMatrix(int a[3][3],int r1,int c1)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp=0;
           temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
          
        }
    }
}