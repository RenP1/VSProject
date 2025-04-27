#include <stdio.h>

typedef struct 
{
    int sid;
    char *name;
    char *gender;
    int age;
    char *address;
}Student;

int main()
{
    Student stu1;
    stu1.sid = 1001;
    stu1.name = "尚大壮";
    stu1.gender = "男";
    stu1.age = 10;
    stu1.address = "安阳";
    printf("学生stu1的学号:%d,姓名:%s,性别:%s,年龄:%d,家庭地址:%s\n",stu1.sid,stu1.name,stu1.gender,stu1.age,stu1.address);
    return 0;
}