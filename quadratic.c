#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double root1, root2, realPart, imagPart;
    printf("Enter value of a: ");
    scanf("%lf", &a);
    printf("Enter value of b: ");
    scanf("%lf", &b);
    printf("Enter value of c: ");
    scanf("%lf", &c);

    double discriminant;
    discriminant = (b*b) - (4*a*c);

    //condition for real and different roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are %lf and %lf", root1, root2);
    }
    
    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1=root2= -b / (2*a);
        printf("The root is %lf", root1);

    }
    
    //condition if roots are not equal
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("root 1 = %lf + %lf and root 2 = %lf - % lf", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}