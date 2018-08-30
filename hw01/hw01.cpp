#include <cstdio>

double celsius2fahrenheit(double celsius);

int main (int argc, char** argv){
    printf("%lf\n",celsius2fahrenheit(100));
}

double celsius2fahrenheit(double celsius){
    return (celsius*(9.0/5)+32);
}
