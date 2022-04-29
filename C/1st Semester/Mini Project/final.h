#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//=======================================================================================================
int recursive(int x,int y){
    if(y==1){
        return(x);
    }
    else{
        return(x+recursive(x,y-1));
    }
}

//========================================================================================================
void pattern(int row){
    
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=((2*row)-1);j++){
            if(j>=((row+1)-i) && j<=((row-1)+i)){
                printf("*");
            }
            else{
                printf(" ");
            }
        
        }
    printf("\n");
    }
    printf("\n\n");
   
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
   
    if(row%2==0){
        exit(1);
    }
    else{
        for(int i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
                if( i==((row/2)+1) || j==((row/2)+1) ){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
}
//======================================================================================================================
 float fun(float angle){
         float sum,t;
         angle=angle*3.14159/180;
         t=angle;
         sum=angle;
    for(int i=1;i<=5;i++)
    {
        t=(t*(-1)*angle*angle)/(2*i*(2*i+1));
        sum=sum+t;
    }
    return(sum);
    }
//=======================================================================================================================
int A(int m, int n)
{
        if(m==0)
                return n+1;
        else if(n==0)
                return A(m-1,1);
        else
                return A(m-1,A(m,n-1));
}
//==============================================================================================================================
void quad() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else 
{
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
}