#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    int date,month,year;
    printf("enter the year:");
    scanf("%d",&year);
    printf("\n enter the month:");
    scanf("%d",&month);
    printf("\n enter the date:");
    scanf("%d",&date);
    weekday(date,month,year);
    return 0;
}
int weekday(int date,int month,int year)
{
    int dayweek,yr,yd;
    yr=year%100;
    yd=year/100;
    printf("\nthe date given is:%d/%d/%d\n\n",date,month,year);
    dayweek=1.25*yr+findm(month,year)+date-2*(yd%4);
    dayweek=dayweek%7;
    switch(dayweek)
    {
        case0:printf("day of week of the date is:sunday");
        break;
        case1:printf("day of week of the date is:monday");
        break;
        case2:printf("day of week of the date is:tuesday");
        break;
        case3:printf("day of week of the date is:wednesday");
        break;
        case4:printf("day of week of the date is:thursday");
        break;
        case5:printf("day of week of the date is:friday");
        break;
        case6:printf("day of week of the date is:saturday");
        break;
        default:printf("the given input data wrong");
    }
    return 0;
}
int findm(int months,int years)
{
    int findmonth,leapyr;
    if((years%100==0)&&(years%400!=0))
        leapyr=0;
    else if(years%4==0)
        leapyr=1;
    else
        leapyr=0;
    findmonth=3+(2-leapyr)*((months+2)/(2*month))+(5*months+months/9)/2;
    findmonth+findmonth%7;
    return findmonth;
}




