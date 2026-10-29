#include <stdio.h>
#include <math.h>

int main(){
    // we use double because we are working with large decimal numbers :)
    double const pi=3.14159265359;  
    double area=0.0;
    double surface_area=0.0;
    double Volume=0.0;
    double radius =0.0;
    printf("ENTER A RADIUS: ");
    scanf("%lf",&radius);
    area=pi*pow(radius,2);
    printf("Area: %.2lf\n",radius);
    surface_area=4*pi*pow(radius,2);
    printf("Surface Area: %.2lf\n",surface_area);
    Volume=(4/3)*pi*pow(radius,3);
    printf("Volume: %.2lf\n",Volume);
    return 0;
}