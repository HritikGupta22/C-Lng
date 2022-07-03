#include<stdio.h>
float c2f(float);
int main(){
float c=37.0;
float f=c2f(c);
printf("the value of %f celcius in farnheight is %f\n",c,f);
return 0;
}
float c2f(float c){
      float f=(c*9/5)+32;
    return f;

}