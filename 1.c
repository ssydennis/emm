#include<stdio.h>
int main()
{
    /*int number;
    int sum = 1;
    int num = 0;
    printf("Please enter a number \n");
    scanf("%d", &number);
    for( int n = 1 ; n <= number ; n++)
    {
        sum*= n;
    }
    printf("The sum of the number is %d.\n", sum);
    sum = 1;
    printf("Please enter a number:\n");
    scanf("%d", &number);
    for( int n = 1 ; n <= number ; n++)
    {
        for( int m = 1 ; m <= n ; m++ )
        {
            sum*= m;
        }
        num += sum;
        sum = 1;
    }
    printf("%d", num);*/
    float num1 = 1;
    float num2 = 1;
    float num3 = 1;
    int num4 = 1;
    //int n = 1; 
    while( num1 > 10e-20 )
    {
        for(int n = 1 ; n <= num4 ; n++)
        {
            num2*= n;
        }
        num1 = 1.0 / num2;
        num3 += num1;
        num4++;
        num2 = 1;
    }
    printf("%lf", num3);
    /*long double x;
    long double mum1 = 1;
    long double mum2 = 1;
    long double mum3 = 1;
    int mum4 = 1;
    long double mum5 = 1;
    long double mum6 = 1;
    printf("Please enter a number:\n");
    scanf("%lf", &x);
    while( mum6 > 10e-20 )
    {
        for( int n = 1 ; n <= mum4 ; n++ )
        {
            mum2 *= n;
        }
        for( int m = 1 ; m <= mum4 ; m++ )
        {
            mum5 *= x;
        }
        mum6 = 1 / mum2;
        mum1 = mum5 / mum2;
        mum3 += mum1;
        mum2 = mum5 = 1;
        mum4++;
    }
    printf("The sum of the number is %lf\n", mum1);*/
    return 0;
}
