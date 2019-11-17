#include <stdio.h>
#define e 2.71828182846


double Exp(int x) {
    int flag = 0;
    if(x < 0){
        flag = 1;
    }
    double ans = 1;
    while (x > 0) {
        ans = ans * e;
        x--;
    }
    while (x < 0) {
        ans = ans * e;
        x++;
    }
    if(flag){
        ans = 1/ans;
    }
return ans;
}


double Pow(double x , int y){
    int flag = 0;
    if(x < 0){
        flag = 1;
    }
    double ans = 1;
    while (y > 0) {
        ans = ans * x;
        y--;
    }
    while (y < 0) {
        ans = ans * x;
        y++;
    }
    if(flag){
        ans = 1/ans;
    }
    return ans;
}


