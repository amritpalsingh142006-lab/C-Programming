#include<stdio.h>
struct department
{
    char cse[20];
    char IT[20];
    char AIMI[20];
    char datascience[20];
};
struct college
{
    char name[20];
    char city[20];
    struct department courses[20];
};
int main()
{
    struct collge c1={"Garden City","Bangalore",{"CSE","IT","AIMI","data science"}};
    printf("Name of College: %s",c1.name);
    printf("City of Named College: %s",c1.city);
    printf("Departments:%s,%s,%s,%s",c1.courses.cse,c1.courses.IT,c1.courses.AIM I,c1.courses.datascience);
    return 0;
}
