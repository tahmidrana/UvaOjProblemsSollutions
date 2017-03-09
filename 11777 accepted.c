#include <stdio.h>
int main()
{
    unsigned int Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3,T,i,min,Class_Test,total_marks;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%u %u %u %u %u %u %u",&Term1,&Term2,&Final,&Attendance,&Class_Test1,&Class_Test2,&Class_Test3);
        min=Class_Test1;
        if(min>Class_Test2)
        min=Class_Test2;
        if(min>Class_Test3)
        min=Class_Test3;
        Class_Test=(Class_Test1+Class_Test2+Class_Test3-min)/2;
        total_marks=Term1+Term2+Final+Attendance+Class_Test;
        if(total_marks>=90)
            printf("A\n");
        else if(total_marks>=80 && total_marks<90)
            printf("B\n");
        else if(total_marks>=70 && total_marks<80)
            printf("C\n");
        else if(total_marks>=60 && total_marks<70)
            printf("D\n");
        else if(total_marks<60)
            printf("F\n");
    }
    return 0;
}
