
#include "programminghub.h"
#define ARRAY_NUM 50


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
设将n（n>1）个整数存放到一维数组R中。设计一个算法，将R中的序列循环左移P（0<P<n）个位置，
即将R中的数据由{X0, X1,…,X_(n-1)}变换为{Xp, X_(p+1),…, X_(n-1), X0, X1,…,X_(p-1)}。
*/
void reverseArray(int R[] , int l , int r){
    int i , j  , temp;
    for(i = l,j = r ; i<j ; ++i , --j){
        temp = R[i];
        R[i] = R[j];
        R[j] = temp;
    }
}

void RCR(int R[],int n , int p){
    if(p<= 0 || p>= n){
        printf("Error\n");
    }else{
        reverseArray(R,0,p-1);
        reverseArray(R,p,n-1);
        reverseArray(R,0,n-1);
    }
}

void methodRcr() {
    //clrscr();
    int L , i;
    int R[ARRAY_NUM],n;
    printf("Input Left Remove size:");
    scanf("%i",&L);
    printf("Input total array elements num:");
    scanf("%i",&n);
    printf("Now print all array elements");
    for(i = 0;i<n; ++i){
        scanf("%i",&R[i]);
    }
    printf("Reverse now\n");
    RCR(R,n,L);
    printf("After Reverse:");
    for(i=0;i<=n-1;++i){
        printf("%i",R[i]);
        printf(" ");    
    }
    printf("\n");
}

//for loop
void forloop(){
    printf("\n=================forloop method=================\n");
    int i = 0;
    for(i = 0 ; i<10; ++i){
        printf("%d\n",i);
    }
}

//while loop
void whileloop(){
    printf("\n=================whileloop method=================\n");
    int i = 0;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
}

//even or odd
void evenOrOdd(){
    printf("\n=================evenOrOdd method=================\n");
    int i = 0;
    for(i = 0 ;i<=10;++i){
        if(i&1){
            printf("%d is odd\n",i);
        }else{
            printf("%d is even\n",i);
        }
    }
}

void doWhileLoop(){
    printf("\n=================doWhileLoop method=================\n");
    int i = 1;
    do{
        printf("hello %d\n",i);
        i++;
    }while(i<=10);
}

void nestedLoop(){
    printf("\n=================nestedLoop method=================\n");
    int i = 0,j=0;
    for(i=0;i<3;++i){
        for(j=0;j<4;++j){
            printf("hello %d+%d=%d\n",i,j,i+j);
        }
        printf(" ");
    }
}

void loopBreak(){
    printf("\n=================loopBreak method=================\n");
    srand(time(NULL));
    int a,b;
    while(1){
        a = rand() % 20;
        printf("a is %d\n", a);
        if (a == 10)
        {
            break;
        }
        // not exactly uniformly distributed, but doesn't matter
        b = rand() % 20;
        printf("b is %i\n", b);
    }
}

void enterEx(){
    printf("\n=================enterEx method=================\n");
    int i;
    puts("enter a number in below:");
    scanf("%d",&i);
    printf("your number is:%i\n",i);
}

void asciiOfChar(){
    printf("\n=================asciiOfChar method=================\n");
    char c ;
    puts("enter a character in below:");
    scanf("%c",&c);
    printf("ascii value of  %c is:%i\n",c,c);
}

void switchCase(){
    printf("\n=================switchCase method=================\n");
    char grade = 'B';

    switch (grade){
        case 'A' :
            printf("Excellent!\n");
            break;
        case 'B' :
        case 'C' :
            printf("Well done\n");
            break;
        case 'D' :
            printf("You passed\n");
            break;
        case 'F' :
            printf("Better try again\n");
            break;
        default :
            printf("Invalid grade\n");
    }

    printf("Your grade is  %c\n", grade);
}

//show time
void displayDate(){
    printf("\n=================displayDate method=================\n");
    time_t t;
    time(&t);
    printf("today date and time is:%s",ctime(&t));
}

void menuDriven(){
    printf("\n=================menuDriven method=================\n");
    int choice, num, i;
    unsigned long int fact;

    while (1){
        printf("1.Factorial\n");
        printf("2.Prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");
        printf("\nYour choice?");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("\nEnter number:");
                scanf("%d", &num);
                fact = 1;
                for (i = 1; i <= num; i++){
                    fact = fact * i;
                }
                printf("\nFactorial value=%lu\n", fact);
                break; // Takes control out of switch
            case 2:
                printf("\nEnter number:");
                scanf("%d", &num);

                for (i = 2; i < num; i++){
                    if (num % i == 0){
                        printf("\nNot a prime number.\n");
                        break; //Takes control out of for loop
                    }
                }

                if (i == num){
                    printf("\nPrime number.\n");
                }

                break; //Takes control out of switch
            case 3:
                printf("\nEnter number:");
                scanf("%d", &num);

                if (num % 2 == 0){
                    printf("\nEven number.\n");
                }else{
                    printf("\nOdd number.\n");
                }
                break; //Takes control out of switch
            case 4:
                exit(0); //Terminates program execution
        }
    }
}

int getAnswer(){
    printf("\n=================getAnswer method=================\n");
    int c ; 
    int a=0;
    while((c=getchar())!=EOF && c!='\n'){
        if((a == 0) &&((c=='y')||(c=='n'))){
            a = c;
        }
    }
    return a ;
}

void getchEx(){
    printf("\n=================getchEx method=================\n");
    int f ,c;
    printf("Do you have a Fever? y/n\n");
    f = getAnswer();
    
    printf("Do you have a runny nose or cough? y/n\n");
    c = getAnswer();
    
    printf("Here are the results you input:\n");
    printf("Do you have a fever? %c\n", f);
    printf("Do you have a runny nose or cough? %c\n", c);
    
    printf("==============putchar in below:=============\n");
    char ch;
    for(ch = 'A';ch<='Z';ch++){
        putchar(ch);
    }
}

void caseReverse(){
    printf("\n=================caseReverse method=================\n");
    char a;
    printf("Enter an alphabet : ");
    a = getchar();

    printf("Reversed case : ");
    if (islower(a)){
        putchar(toupper(a));
    }else{
        putchar(tolower(a));
    }
    ;
}

/*
The first perfect number is 6, because 1, 2, and 3
are its proper positive divisors, and 1 + 2 + 3 = 6.
*/
void perfectNum(){
    printf("\n=================perfectNum method=================\n");
    int n ;
    int i=1,sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(i<n){
	    if(n%i ==0){
	        sum+=i;
        }
        ++i;
    }
    if(sum == n){
        printf("number %d is perfect number",n);
    }else{
         printf("number %d is NOT perfect number",n);
    }
}

void fibonacciSeries(){
    printf("\n=================fibonacciSeries method=================\n");
    int n ;
    int a=0,b=1,c=0;
	printf("Enter a number to define the length of fibonacci series: ");
	scanf("%d", &n);
	int i =0;
	for(i=0;i<n;++i){
	    c = a+b;
	    a=b;
	    b=c;
	    printf("%d,",c);
    }
}
void Factorial(){
    printf("\n=================Factorial method=================\n");
    int n;
    int i=1 ,fac=1;
    printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;++i){
	    fac*=i;
    }
    
    printf("Factorial of %d is %d", n, fac);
}

/*
3**3 + 7**3 + 1**3 = 371
*/
void armstrongNum(){
    printf("\n=================armstrongNum method=================\n");
    int n;
    int a =0,b=0 ,t =0;
    printf("Enter a number: ");
	scanf("%d", &n);
	t = n;
	while(n>0){
	    a = n%10;
	    b = b+a*a*a;
	    n = n/10;
    }
    
    if(b == t){
        printf("number %d is a armstrong number",t);
    }else{
        printf("number %d is NOT a armstrong number",t);
    }
	
}

/*
INPUT: 345
OUTPUT: 543
*/
void reverseNum(){
    printf("\n=================reverseNum method=================\n");
    int n;
    int r=0 ,t =0;
    printf("Enter a number: ");
	scanf("%d", &n);
	t = n;
	while(n>0){
	    r*=10;
	    r=r+n%10;
	    n=n/10;
    }
    printf("%d after reverse is %d",t,r);
}

void gcd(){
    printf("\n=================gcd method=================\n");
    int a,b;
    int x,y,t;
    int lcm;
    printf("Enter two number: ");
	scanf("%d,%d", &a,&b);
	x=a;
	y=b;
	while(y!=0){
	    t=y;
	    y=x%y;
	    x = t;
    }
    
    lcm=(a*b)/x;
    printf("Greatest common divisor of %d and %d = %d\n", a, b, x);
    printf("Least common multiple of %d and %d = %d\n", a, b, lcm);

}

void lcm(){
    printf("\n=================lcm method=================\n");
    int n;
    printf("Enter a number: ");
	scanf("%d", &n);
}

void decimalToBinary(){
    printf("\n=================decimalToBinary method=================\n");
    int n;
    int i = 1;
    int t = 0;
    printf("Enter a number: ");
	scanf("%i", &n);
	for(i = 31 ; i >=0 ; i--){
	    t = n >> i;
	    if(t & 1 ){
	        printf("1");
        }else{
            printf("0");
        }
    }
}

void swapWithoutSpace(){
    printf("\n=================swapWithoutSpace method=================\n");
    int a,b;
    printf("Enter two number: ");
	scanf("%i,%i", &a,&b); 
	printf("before swap:a=%i,b=%i\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	
	printf("after swap:a=%i,b=%i\n",a,b);
}

void swapOddAndEven(){
    printf("\n=================swapOddAndEven method=================\n");
    int n,i,t,res;
    printf("Enter number: ");
	scanf("%i", &n);
	printf("n is:");
	for(i = 31 ; i >=0 ; i--){
	    t = n >> i;
	    if(t & 1 ){
	        printf("1");
        }else{
            printf("0");
        }
    }
    printf("\n");
	res = N(n);
	printf("after swap odd and even:%i",res);
}

void decimalToBinaryWithParam(int n){
    int i ,t;
    for(i = 31 ; i >=0 ; i--){
	    t = n >> i;
	    if(t & 1 ){
	        printf("1");
        }else{
            printf("0");
        }
    }
    printf("\n");
}

int main(int argc, char **argv){
    system("cls");
    
    //print using puts method
    puts("main method start \n");
    
    //test in below:
    
    /*forloop();
    whileloop();
    evenOrOdd();
    doWhileLoop();
    nestedLoop();
    loopBreak();
    enterEx();
    asciiOfChar();
    switchCase();
    displayDate();
    menuDriven();
    getchEx();
    caseReverse();
    perfectNum();
    fibonacciSeries();
    Factorial();
    armstrongNum();
    reverseNum();
    gcd();
    decimalToBinary();
    swapWithoutSpace();
    swapOddAndEven();
    */
    
    /*
    int i = -6;
    //-6补码:
    //1111 1111 1111 1111 1111 1111 1111 1010 
    // 
    int j = -7;
    printf("\n%i&1 = %i\n",i,(i&1));
    printf("%i&1 = %i\n",j,(j&1));
    */
    printf("-9的补码形式:\n");
    decimalToBinaryWithParam(-9);
    printf("-9>>2补码形式:\n");
    decimalToBinaryWithParam((-9>>2));
    
    printf("9的补码形式:\n");
    decimalToBinaryWithParam(9);
    printf("9>>2补码形式:\n");
    decimalToBinaryWithParam((9>>2));
    printf("-12补码形式:\n");
    decimalToBinaryWithParam(-12);
    //printf("change odd and even:%d",ExchangeOddEven(-6));
    //test ended!
    getch();
}

