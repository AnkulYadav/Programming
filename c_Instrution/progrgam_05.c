//
#include <stdio.h>
#include <math.h>

int main()
{
    float l1, l2, g1, g2, d;
    printf("enter the longitude and latitude");
    scanf("%f%f%f%f", &l1, &l2, &g1, &g2);
    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2)*cos(g2-g1));
     //D = 3963 acos( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )
    printf("the distance from center is %f",d);
        return 0;
}