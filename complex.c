/**
  ******************************************************************************
  * @file           : complex.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/17
  ******************************************************************************
  */

#include "complex.h"
//给结构体赋值
struct complex creatComplex(double real,double imag)
{
  struct complex c;
  c.real = real;
  c.imag = imag;
  return c;
}
//复数相加
struct complex add(struct complex a,struct complex b)
{
  struct complex result;
  result.real = a.real + b.real;
  result.imag = a.imag + b.imag;
  return result;
}

//复数相减
struct complex sub(struct complex a,struct  complex b)
{
  struct complex result;
  result.real = a.real - b.real;
  result.imag = a.imag - b.imag;
  return result;
}

//复数相乘
struct complex mul(struct complex a,struct  complex b)
{
  struct complex result;
  result.real = a.real * b.real - a.imag * b.imag;
  result.imag = a.imag * b.real + a.real * b.imag;
  return result;
}

//复数相除
struct complex div(struct complex a,struct complex b)
{
  struct complex result;
  double fenmu = b.real * b.real + b.imag * b.imag;
  result.real = (a.real * b.real + a.imag * b.imag) / fenmu;
  result.imag = (a.imag * b.real - a.real * b.imag) / fenmu;
  return result;

}

//打印结果
void printResult(struct complex c)
{
  if(c.imag >= 0)
  {
    printf("%.2f + %.2fi\n",c.real,c.imag);
  }
  else
  {
    printf("%.2f - %.2fi\n",c.real,-c.imag);
  }
}