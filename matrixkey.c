#include<REGX52.H>
#include"delay.h"
unsigned char Matrix()
{
    unsigned char keynumber=0;
//逐列扫描
//第一列S1按键
P1=0xff;
P1_3=0;
if (!P1_7)
{
    Delay(20);
    while (/* condition */!P1_7);
    Delay(20);
    keynumber=1;
    /* code */
}
//第一列S5按键
if (!P1_6)
{
    Delay(20);
    while (/* condition */!P1_6);
    Delay(20);
    keynumber=5;
    /* code */
}
//第一列S9按键

if (!P1_5)
{
    Delay(20);
    while (/* condition */!P1_5);
    Delay(20);
    keynumber=9;
    /* code */
}
//第一列S13按键

if (!P1_4)
{
    Delay(20);
    while (/* condition */!P1_4);
    Delay(20);
    keynumber=13;
    /* code */
}

//第二列S2按键
P1=0xff;
P1_2=0;
if (!P1_7)
{
    Delay(20);
    while (/* condition */!P1_7);
    Delay(20);
    keynumber=2;
    /* code */
}
//第二列S6按键

if (!P1_6)
{
    Delay(20);
    while (/* condition */!P1_6);
    Delay(20);
    keynumber=6;
    /* code */
}
//第二列S10按键

if (!P1_5)
{
    Delay(20);
    while (/* condition */!P1_5);
    Delay(20);
    keynumber=10;
    /* code */
}
//第二列S14按键

if (!P1_4)
{
    Delay(20);
    while (/* condition */!P1_4);
    Delay(20);
    keynumber=14;
    /* code */
}
//第三列S3按键
P1=0xff;
P1_1=0;
if (!P1_7)
{
    Delay(20);
    while (/* condition */!P1_7);
    Delay(20);
    keynumber=3;
    /* code */
}
//第三列S7按键

if (!P1_6)
{
    Delay(20);
    while (/* condition */!P1_6);
    Delay(20);
    keynumber=7;
    /* code */
}
//第三列S11按键

if (!P1_5)
{
    Delay(20);
    while (/* condition */!P1_5);
    Delay(20);
    keynumber=11;
    /* code */
}
//第三列S15按键

if (!P1_4)
{
    Delay(20);
    while (/* condition */!P1_4);
    Delay(20);
    keynumber=15;
    /* code */
}
//第四列S4按键
P1=0xff;
P1_0=0;
if (!P1_7)
{
    Delay(20);
    while (/* condition */!P1_7);
    Delay(20);
    keynumber=4;
    /* code */
}
//第四列S8按键

if (!P1_6)
{
    Delay(20);
    while (/* condition */!P1_6);
    Delay(20);
    keynumber=8;
    /* code */
}
//第四列S12按键

if (!P1_5)
{
    Delay(20);
    while (/* condition */!P1_5);
    Delay(20);
    keynumber=12;
    /* code */
}
//第四列S16按键

if (!P1_4)
{
    Delay(20);
    while (/* condition */!P1_4);
    Delay(20);
    keynumber=16;
    /* code */
}

    return keynumber;
}