//---------------USER DEFINE FUNCTION---------------
int acker(int m,int n){
    if(m==0){
        printf("hi");
        return(n+1);
    }
    else if(m>0 && n==0){
        return(acker(m-1,1));
    }
    else if(m>0 && n>0){
        return(acker(m-1,acker(m,n-1)));
    }
    else{
        printf("end");
    }
}
//---------------------
int recursive(int x,int y){
    if(y==1){
        return(x);
    }
    else{
        return(x+recursive(x,y-1));
    }
}
//-------------------------
void quadratic(int a,int b,int c){
    int d;
    float x1,x2;
    d=(b*b)-(4*a*c);
    if(d==0){
        x1=x2=(-b)/2*a;
        printf("Roots are real and equal\n"); 
        printf("x1= %f and x2= %f",x1,x2);
    }
    if(d>0){
        printf("Roots are real and unequal\n");
        x1=(-b)+(sqrt(d))/(2*a);
        x2=(-b)-(sqrt(d))/(2*a);
        printf("x1= %f and x2= %f",x1,x2);
    }
    else{
        printf("Roots are unreal and unequal\n");
        printf("%0.3f+%0.3fi",-b/(2*a),sqrt(-d)/(2*a));
        printf(", %0.3f+%0.3fi",-b/(2*a),-sqrt(-d)/(2*a));
    }
}
//--------------------------
void pattern(int row){
    //     # PATTERN 1
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
    //    #PATTERN 2
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    // # PATTERN 3
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
    //------------------------
    float fun(float angel){
         float sum,t;
         angel=angel*3.14159/180;
         t=angel;
         sum=angel;
    for(int i=1;i<=5;i++)
    {
        t=(t*(-1)*angel*angel)/(2*i*(2*i+1));
        sum=sum+t;
    }
    return(sum);
    }
    //---END OF THE FUNCTION----    