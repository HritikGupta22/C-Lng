#include<stdio.h>
double force(double,double);
int main(){
    float g =9.8;
    double m=50;
    double f = force( m, g);

    printf("the mass of %lf kg to calucate force on earth id %lf\n",m,f);

return 0;
}
double force(double m,double g){
    double f=(m* g);
    return f;
}