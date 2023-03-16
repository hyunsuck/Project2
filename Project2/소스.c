#include<stdio.h>
double factorial_rec(int n)
{
    if (n == 1) return 1;
    return n * factorial_rec(n - 1);

}
double factorial_iter(int n)
{
    double result_iter = n;
    while (--n > 1) result_iter *= n;
    return result_iter;
}
int main()
{
    int n;
    do
    {
        printf("정수 입력 :");
        scanf("%d", &n); fflush(stdin);

    } while (n < 1 || n > 30);

    printf("재귀호출 : %.0f\n", factorial_rec(n));

    printf("순환참조 : %.0f\n", factorial_iter(n));

    return 0;

}