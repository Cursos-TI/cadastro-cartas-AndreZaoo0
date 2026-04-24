#include <stdio.h>
 
int main() {
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);
 
    return 0;
}