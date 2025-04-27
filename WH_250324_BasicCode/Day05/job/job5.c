#include <stdio.h>

// 5.利用函数实现 录入成绩(录入三个学员的成绩,求平均值)
#include <stdio.h>

float average(float s1, float s2, float s3) {
    return (s1 + s2 + s3) / 3;
}

int main() {
    float score1, score2, score3;

    // 录入三个学员成绩
    printf("请输入三个学员的成绩：");
    scanf("%f %f %f", &score1, &score2, &score3);

    // 调用函数计算平均值
    float avg = average(score1, score2, score3);

    // 输出结果（保留2位小数）
    printf("三个学员的平均成绩为：%.2f\n", avg);

    return 0;
}