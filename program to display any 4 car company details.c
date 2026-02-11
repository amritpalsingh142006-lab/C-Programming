#include<stdio.h>
struct Date
{
    int day;
    int mon;
    int yr;
};
struct car
{
    char company_name[20];
    char model[20];
    float price;
    struct Date manf_date
};
int main()
{
    struct car c1={"BMW","M5",250000.6,{25,3,2025}};
    struct car c2={"BMW","M3",240000.6,{25,3,2023}};
    struct car c3={"BMW","M2",260000.6,{25,3,2017}};
    struct car c4={"BMW","M4",220000.6,{25,3,2014}};

   return 0;
}
