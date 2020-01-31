#include <stdio.h>


/**int multiply(int a, int b){

    int result;
    result = a * b;
    printf("%d multiply %d is %d\n", a,b,result);
    return 0;


}
int divided(int a, int b){
    int result;
    result = a / b;
    printf("%d divided by %d is %d\n", a,b,result);
}

int stuff(){
    int a,b;

    printf("Enter your two number: \n");
    scanf("%d%d", &a,&b);
    printf("The sum of %d and %d is %d",a,b,a+b);
}

int getcharfunction(){
    int c;
    printf("Type a character: \n");
    c = getchar();
    printf("You entered: ");
    putchar(c);
}


int printfunction(int n, int val){
    for (int i = 1000; i > n; i--){
        printf("%d / %d = %d\n", i, val, i/val);
    }
    return 0;
}

int main(void)
{
    int n, val;
    printf("Enter number of time you want to multiply: \n");
    scanf("%d", &n);
    printf("Enter number you want to divide: \n");
    scanf("%d", &val);
    printfunction(n,val);
    return 0;
}




int main(void){

    char name[];
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("You are %s", name);
    return 0;
}
**/













int main(){
    int i,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    i=1;
    while (i*i < number)
        i=i+1;
    printf("%d is the largest square within %d\n",i*i,number);
}
