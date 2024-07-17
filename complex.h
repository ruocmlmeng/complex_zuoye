/**
  ******************************************************************************
  * @file           : complex.h
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/17
  ******************************************************************************
  */

#ifndef COMPLEX_H
#define COMPLEX_H
#include<stdio.h>
//复数的存储结构的设计
struct complex
{
  double real;//实数部分
  double imag;//虚数部分
};

//给结构体赋值
struct complex creatComplex(double real,double imag);

//复数相加
struct complex add(struct complex a,struct complex b);

//复数相减
struct complex sub(struct complex a,struct  complex b);

//复数相乘
struct complex mul(struct complex a,struct  complex b);

//复数相除
struct complex div(struct complex a,struct complex b);

//打印结果
void printResult(struct complex c);
#endif //COMPLEX_H
