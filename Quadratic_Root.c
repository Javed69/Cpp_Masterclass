
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a ,b, c, discriminant, root1, root2;
    printf("Input values of a, b, and c\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b -4*a*c;
    if(discriminant<0)
        printf("\n\n ROOTS ARE IMAGINARY\n");
    else
    {
        root1 = (-b + sqrt(discriminant))/(2.0*a);
        root2 = (-b - sqrt(discriminant))/(2.0*a);
        printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2\n",root1,root2);

    }
    getch();
    return 0;


}
