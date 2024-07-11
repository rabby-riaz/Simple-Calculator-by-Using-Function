#include<stdio.h>

int sum(){
    int a , b ,res;
    printf("Enter your Numbers : \n");
    scanf("%d%d",&a,&b);
    res= a +b;

}
int sub(){
    int a , b ,res;
    printf("Enter your Numbers : \n ");
    scanf("%d%d",&a,&b);
    res= a -b;
    if(b>a){
        res = b-a;
    }
    else{
        res = a -b;
    }


}
int mul(){
    int a , b ,res;
    printf("Enter your Numbers : \n");
    scanf("%d%d",&a,&b);
    res= a * b;

}

int dev() {
    int a, b, res;
    printf("Enter your Numbers: \n");
    scanf("%d%d", &a, &b);
    if (b == 0 || a == 0) {
        printf("Division by zero is not allowed.\n");
        return 0;
    }

    if (b > a) {
        res = b / a;
    } else {
        res = a / b;
    }

    return res;
}



int menu(){
    int opt ;
    label :
    printf("\tCHOSE YOUR OPTION\n");
    printf("PRESS - 01 FOR SUMMATION \n" );
    printf("PRESS - 02 FOR SUBTRACTION\n");
    printf("PRESS - 03 FOR MULTIPICATION\n");
    printf("PRESS - 04 FOR DIVISION\n");
    printf("PRESS HERE : ");
    scanf("%d",&opt);

    switch(opt){
    case 1 :

         printf("Summation of two number = %d \n" ,sum());
         goto label;
         break;

    case 2 :
        printf("Sub of two number = %d\n\n" , sub());
        goto label;
        break;

    case 3 :
        printf("Multipication of two number = %d\n\n",mul());
        goto label;
        break;

    case 4:
        printf("Dev of two number = %d\n\n",dev());
        goto label;
        break;

    default:

        break;

    }





}
void main(){

    menu();

    sum();
    sub();
    mul();
    dev();


}

