
#include "programminghub.h"
#define ARRAY_NUM 50


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
�轫n��n>1����������ŵ�һά����R�С����һ���㷨����R�е�����ѭ������P��0<P<n����λ�ã�
����R�е�������{X0, X1,��,X_(n-1)}�任Ϊ{Xp, X_(p+1),��, X_(n-1), X0, X1,��,X_(p-1)}��
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
    int i = 1;
    do{
        printf("hello %d\n",i);
        i++;
    }while(i<=10);
}

void nestedLoop(){
    int i = 0,j=0;
    for(i=0;i<3;++i){
        for(j=0;j<4;++j){
            printf("hello %d+%d=%d\n",i,j,i+j);
        }
        printf("");
    }
}

void loopBreak(){
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
    int i;
    puts("enter a number in below:");
    scanf("%d",&i);
    printf("your number is:%i\n",i);
}

void asciiOfChar(){
    char c ;
    puts("enter a character in below:");
    scanf("%c",&c);
    printf("ascii value of  %c is:%i\n",c,c);
}

void switchCase(){
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
    time_t t;
    time(&t);
    printf("today date and time is:%s",ctime(&t));
}

void menuDriven(){
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
    int f ,c;
    printf("Do you have a Fever? y/n\n");
    f = getAnswer();
    
    printf("Do you have a runny nose or cough? y/n\n");
    c = getAnswer();
    
    printf("Here are the results you input:\n");
    printf("Do you have a fever? %c\n", f);
    printf("Do you have a runny nose or cough? %c\n", f);
    
    printf("==============putchar in below:=============\n");
    char ch;
    for(ch = 'A';ch<='Z';ch++){
        putchar(ch);
    }
}

void caseReverse(){
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
    int n;
    int r=0 ,t =0;
    printf("Enter a number: ");
	scanf("%d", &n);
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
    */
    
    
    
    gcd();
    
    //test ended!
    getch();
}







