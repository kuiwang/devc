#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

//MACO Definition
#define INT int
#define LONG long

//��һ��int�͵�������żλ����
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

//쳲��������� 
void fibonacciSeries();

//�׳�
void Factorial();

//��ķ˹������
void armstrongNum();

//�������һ������
void reverseNum(); 

//���Լ��
void gcd();

//��С������
void lcm();

//����ת��Ϊ2���� 
void decimalToBinary();

//��ʹ�ö���ռ�,������������
void swapWithoutSpace();

//���в����Ľ���ֵת��Ϊ��������ʽ
void decimalToBinaryWithParam(int n); 

