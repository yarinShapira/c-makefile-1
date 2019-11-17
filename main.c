#include <stdio.h>
#include "myMath.h"


int main(){
    float num;
    int intnum;
    printf("Please inset a real number: ");
    scanf("%f", &num);
    intnum = num;
    double ans1 = sub(add(Exp(intnum),Pow(num,3)),2);
    double ans2 = add(mul(num,3),mul(Pow(num,2),2));
    double ans3 = sub(div(mul(Pow(num,3),4),5),mul(num,2));
    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %.4f is: %.4f\n",num,ans1);
    printf("The value of f(𝑥) = 3x + 2X^2 at the point %.4f is: %.4f\n",num,ans2);
    printf("The value of f(𝑥) =  (4x^3) / 5 - 2x at the point %.4f is: %.4f\n",num,ans3);
    return 0;
}