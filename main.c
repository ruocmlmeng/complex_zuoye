// #include "complex.c"
#include "complex.h"
#include <stdio.h>
void menu()
{
    printf("*************************\n");
    printf("********0. break ********\n");
    printf("********1. start  *********\n");
    printf("*************************\n");
}
//���ڼ�����������
void count()
{
    double real1 = 0;
    double image1 = 0;
    double real2 = 0;
    double image2 = 0;
    printf("����������ʵ�����鲿��");
    scanf("%lf %lf",&real1,&image1);
    scanf("%lf %lf",&real2,&image2);

    struct complex a = creatComplex(real1,image1);
    struct complex b = creatComplex(real2,image2);

    struct complex sum =  add(a,b);
    struct complex diff = sub(a,b);
    struct complex ji = mul(a,b);
    struct complex shang = div(a,b);

    printf("a = ");
    printResult(a);
    printf("b = ");
    printResult(b);

    printf("a + b = ");
    printResult(sum);
    printf("a - b = ");
    printResult(diff);
    printf("a * b = ");
    printResult(ji);
    printf("a / b = ");
    printResult(shang);
}
int main(void)
{
    int input = 0;
    do
    {
        menu();
        printf("���������ѡ��>");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                count();
            break;
            case 0:
                break;
            default:
                printf("������������������\n");
            break;
        }
    }while(input);
    return 0;
}


