#include <stdio.h>
//Q4
int main()
{
    int h,t;
    float c;
    system("cls");
    printf("Enter hardness:");
    scanf("%d",&h);
    printf("Enter carbon content:");
    scanf("%f",&c);
    printf("Enter tensile strength:");
    scanf("%d",&t);

    if (h>50 && c>0.7 && t>5500)
        printf("Grade=10");
    else if (h>50 && c>0.7)
        printf("Grade=9");
    else if (c>0.7 && t>5500)
        printf("Grade=8");
    else if (h>50 && t>5500)
        printf("Grade=7");
    else
        printf("Grade=6");
    
    return 0;
}