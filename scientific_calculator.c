#include<stdio.h>
#include<math.h>
//declaration/prototype
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int power(int, int);
int square_root(int);
float sine(float);
int cosine(int);
int tangent(int);
float pi(float);

int main(){
int n,s,result;
int choice;
float pi = 3.14;
printf("SCIENTIFIC CALCULATOR\n");
printf("1. addition\n");
printf("2. subtraction\n");
printf("3. multiplication\n");
printf("4. divide\n");
printf("5. power\n");
printf("6. square root\n");
printf("7. sine\n");
printf("8. cosine\n");
printf("9. tangent\n");
printf("Enter your choice : ");
scanf("%d", &choice);

switch(choice){
case 1:
printf("Enter two numbers : ");
scanf("%d%d", &n, &s);
result = add(n,s);
printf("result : %d", result);
break;

case 2:
printf("Enter two numbers : ");
scanf("%d%d", &n, &s);
result = subtract(n,s);
printf("result : %d", result);
break;

case 3:
printf("Enter two numbers : ");
scanf("%d%d", &n, &s);
result = multiply(n,s);
printf("result : %d", result);
break;

case 4:
printf("Enter two numbers : ");
scanf("%d%d", &n, &s);
result = divide(n,s);
printf("result : %d", result);
break;

case 5:
printf("Enter the base numbers : ");
scanf("%d", &n);
printf("Enter the exponent : ");
scanf("%d", &s);
result = power(n,s);
printf("result : %d", result);
break;

case 6:
printf("Enter a numbers : ");
scanf("%d", &n);
result = square_root(n);
printf("result : %d", result);
break;

case 7:
printf("Enter an angle in radians : ");
scanf("%f", &n);
result = sine(n);
printf("result : %f", result);
break;

case 8:
printf("Enter an angle in radians : ");
scanf("%d", &n);
result = cosine(n);
printf("result : %d", result);
break;

case 9:
printf("Enter an angle in radian : ");
scanf("%d", &n);
result = tangent(n);
printf("result : %d", result);
break;
default:
printf("invalid choice");
break;
}
return 0;
}
// function definition
int add(int n, int s){
return n+s;
}
int subtract(int n, int s){
return n-s;
}
int multiply(int n, int s){
return n*s;
}
int divide(int n, int s){
return n/s;
}
int power(int base, int exponent){
return pow(base,exponent);
}
int square_root(int n){
return sqrt(n);
}
float sine(float n){
    float pi = 3.14;
return sin(n*pi/180);
}
int cosine(int n){
return cos(n/180);
}
int tangent(int n){
return tan(n/180);
}


