#include <stdbool.h>
#include <stdio.h>

typedef struct {
  int sid;
  char name[20];
  int age;
} Student;

// 确认操作函数
bool isCheck() {
  char check;
  scanf("%c", &check);
  getchar();
  if (check == 'y') {
    return true;
  } else {
    return false;
  }
}

// 判断y/n函数
bool isExist(Student *stus, int count, int sid) {
  if (count == 0) {
    return false;  // 查找学号不存在
  }
  // 找到对应学号学生
  for (int i = 0; i < count; i++) {
    if (sid == stus[i].sid)  
    {
      return true;
    }
  }
  return false;
}

// 查询学生信息
void findStudentInfo(Student *stus, int count) {
  if (count == 0) {
    printf("当前系统没有学生信息,请添加后重试!\n");
    return;
  }
  printf("学号\t\t姓名\t\t\t年龄\n");
  for (int i = 0; i < count; i++) {
    printf("%d\t\t%s\t\t%d\n", stus[i].sid, stus[i].name, stus[i].age);
  }
}

// 添加学生信息
void addStudentInfo(Student *stus, int *count) {
  printf("请您输入要添加的学生学号: \n");
  Student newStu;
  scanf("%d", &(newStu.sid));
  getchar();
  if (isExist(stus, *count, newStu.sid)) {
    printf("您输入的学生学号:%d已存在\n", newStu.sid);
    return;
  }
  printf("请您输入要添加的学生姓名: \n");
  scanf("%s", newStu.name);
  getchar();
  printf("请您输入要添加的学生年龄: \n");
  scanf("%d", &(newStu.age));
  getchar();
  stus[*count] = newStu;
  (*count)++;
}

// 修改学生信息
void updateStudentInfo(Student *stus, int count) {
  printf("您确定要修改学生信息吗[y/n]\n");
  bool flag = isCheck();
  if (!flag) {
    return;
  }
  printf("请您输入要修改的学生学号: \n");
  int updateSid;
  scanf("%d", &updateSid);
  getchar();
  if (!isExist(stus, count, updateSid)) {
    printf("您输入的要修改的学生学号:%d不存在\n", updateSid);
    return;
  }
  for (int i = 0; i < count; i++) {
    if (updateSid == stus[i].sid) {
      printf("请您输入要修改的学生姓名: \n");
      scanf("%s", stus[i].name);
      getchar();
      printf("请您输入要修改的学生年龄: \n");
      scanf("%d", &(stus[i].age));
      getchar();
      printf("学号为%d的学生信息修改成功\n",updateSid);
      return;
    }
  }
}

// 删除学生信息
void deleteStudentInfo(Student *stus, int *count) {
  printf("您确定要删除学生信息吗[y/n]\n");
  bool flag = isCheck();
  if (!flag) {
    return;
  }
  printf("请您输入要删除的学生学号: \n");
  int deleteSid;
  scanf("%d", &deleteSid);
  getchar();
  if (!isExist(stus, *count, deleteSid)) {
    printf("您输入的要删除的学生学号:%d不存在\n", deleteSid);
  }
  //输入的学号是最后一个学生的学号
  if (deleteSid == *count-1)
  {
    (*count)--;
    printf("学号为%d的学生信息删除成功\n",deleteSid);
    return;
  } 
  for (int i = 0; i < *count - 1; i++) {
    //遍历到输入学号的后面
    if (deleteSid <= stus[i].sid) {
      stus[i] = stus[i + 1];
      stus[i].sid--;
    }
  }
  (*count)--;
  printf("学号为%d的学生信息删除成功\n",deleteSid);
  return;
}

int main() {
  Student stus[100];
  int count = 0;
  while (true) {
    printf("---------------学生信息管理系统------------------\n");
    printf("              1.查询学生信息                     \n");
    printf("              2.添加学生信息                     \n");
    printf("              3.修改学生信息                     \n");
    printf("              4.删除学生信息                     \n");
    printf("              5.退出系统                         \n");
    printf("------------------------------------------------\n");
    printf("请输入您要进行的操作: \n");
    int check;
    scanf("%d", &check);
    getchar();
    switch (check) {
      case 1:
        findStudentInfo(stus, count);
        break;
      case 2:
        addStudentInfo(stus, &count);
        break;
      case 3:
        updateStudentInfo(stus, count);
        break;
      case 4:
        deleteStudentInfo(stus, &count);
        break;
      case 5:
        printf("您确定要退出系统吗 [y/n]\n");
        bool flag = isCheck();
        if (flag) {
          printf("退出系统成功,欢迎您下次使用!\n");
          return 0;
        }
        break;
      default:
        printf("你输入的操作错误,请重新输入!\n");
        break;
    }
  }
  return 0;
}