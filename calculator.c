#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
 /*To perform mathematical operations on two operands*/
 int a,b,choice;
 printf("enter the two numbers:");
 scanf("%d,%d",&a,&b);
 printf("1.Addition\n");
 printf("2.Subtraction\n");
 printf("3.Multiplication\n");
 printf("4.Division\n");
 printf("5.Modulo operation\n");
 printf("enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
    case 1:
      printf("Addition=%d",a+b);
      break;
    case 2:
      printf("subtraction:%d",a-b);
      break;
    case 3:
      printf("Multiplication:%d",a*b);
      break;
    case 4:
      printf("division:%d",a/b);
      break;
    case 5:
      printf("Remainder:%d",a%b);
      break;
    default:
      printf("you've entered invalid choice..!!");
 }
 return 0;
}