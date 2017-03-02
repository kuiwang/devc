#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

//MACO Definition
#define INT int
#define LONG long

//将一个int型的数的奇偶位互换
#define N(n) ((n<<1)&(0xAAAA))|((n>>1)&(0x5555));
#define ExchangeOddEven(x) (((x & (0x55555555)) << 1) | (((x&0xAAAAAAAA)>>1)&0x7fffffff))

//loop method
void forloop();

//while loop
void whileloop();

//even or odd
void evenOrOdd();

//do while loop
void doWhileLoop();

//nested loop
void nestedLoop();

//loop break
void loopBreak();

//enter example
void enterEx();

//ascii value of char
void asciiOfChar();

//switch case
void switchCase();

//display date
void displayDate();

//menu driven
void menuDriven();

//getchar() example
void getchEx();

/*I have not complete :
http://web.programminghub.io/#/program/C/Convert%20number%20to%20Words
Convert number to words

*/

void caseReverse();

//Perfect number
void perfectNum();

//斐波那契数列 
void fibonacciSeries();

//阶乘
void Factorial();

//阿姆斯特朗数
void armstrongNum();

//倒序输出一个数字
void reverseNum(); 

//最大公约数
void gcd();

//最小公倍数
void lcm();

//整数转换为2进制 
void decimalToBinary();

//不使用额外空间,交换两个数字
void swapWithoutSpace();

//带有参数的将数值转换为二进制形式
void decimalToBinaryWithParam(int n); 

