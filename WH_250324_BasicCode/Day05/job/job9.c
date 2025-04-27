#include <stdio.h>

//9.利用函数实现闰年某月某日是多少天(输入年月日,例如:2024年3月2日是今年的第62天)
// 判断闰年函数
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取月份天数函数
int get_month_days(int year, int month) {
    // 各月天数数组（索引0不用）
    int days[] = {0, 31, 28, 31, 30, 31, 30, 
                  31, 31, 30, 31, 30, 31};
    
    // 处理闰年二月
    if (month == 2 && is_leap_year(year)) {
        return 29;
    }
    return days[month];
}

// 计算年内天数函数
int day_of_year(int year, int month, int day) {
    // 输入有效性验证
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return -1;
    }
    
    // 检查日期是否超过当月最大天数
    int max_day = get_month_days(year, month);
    if (day > max_day) {
        return -1;
    }

    // 累加前几个月的天数
    int total = 0;
    for (int m = 1; m < month; m++) {
        total += get_month_days(year, m);
    }
    
    return total + day;
}

int main() {
    int year, month, day;
    
    printf("请输入日期（年 月 日）：");
    if (scanf("%d %d %d", &year, &month, &day) != 3) {
        printf("输入格式错误！\n");
        return 1;
    }

    int result = day_of_year(year, month, day);
    
    if (result == -1) {
        printf("无效日期！\n");
    } else {
        printf("%d年%d月%d日是今年的第%d天\n", year, month, day, result);
    }

    return 0;
}