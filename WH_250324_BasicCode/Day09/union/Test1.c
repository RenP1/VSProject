#include <stdio.h>

typedef struct
{
    char name[20];
    int num;
    char sex;
    char work;
    union
    {
        double score;
        char course[20];
    }sc;
    
}Person;

int main()
{
    Person p1;
    printf("请您输入姓名: \n");
    scanf("%s",p1.name);
    printf("请您输入编号: \n");
    scanf("%d",&p1.num);
    getchar();
    printf("请您输入性别: \n");
    scanf("%c",&p1.sex);
    getchar();
    printf("请您输入工种: \n");
    scanf("%c",&p1.work);
    if (p1.work == 's')
    {
        printf("请您输入成绩: \n");
        scanf("%lf",&p1.sc.score);
    }else if (p1.work == 't')
    {
        printf("请您输入学科: \n");
        scanf("%s",p1.sc.course);
    }
    printf("%s ,%d ,%c ,%c ,",p1.name,p1.num,p1.sex,p1.work);
    if (p1.work == 's')
    {
        printf("%.2lf \n",p1.sc.score);
    }else if (p1.work == 't')
    {
        printf("%s \n",p1.sc.course);
    }
    return 0;
}