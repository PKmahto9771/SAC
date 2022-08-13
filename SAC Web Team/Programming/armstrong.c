#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder,result, noDigit;
   
   //taking input 
   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;
  
  printf("Armstrong numbers between 1 and %d(both inclusive) are: \n",originalNum);

  // n for counting iteration
   for(int n=1; n<=originalNum; ++n){
    num=n; result=0; noDigit=0;

    // finding number of digits in 'num'
    while(num>0){
      noDigit += 1;
      num /= 10;
    }

    num=n;
    while(num>0){
        remainder = num%10;
        result += pow(remainder,noDigit);
        num /= 10;
     }
     if(result==n) // checking for armstrong number
     printf("\n%d", n);
   }
   return 0;
}