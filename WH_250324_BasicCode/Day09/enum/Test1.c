#include <stdio.h>
typedef enum{SPRING, SUMMER, AUTUMN, WINTER} Season;
int main() {
  Season season = AUTUMN;
  switch (season) {
    case SPRING:
      printf("春暖花开\n");
      break;
    case SUMMER:
      printf("夏日炎炎\n");
      break;
    case AUTUMN:
      printf("硕果累累\n");
      break;
    case WINTER:
      printf("冰天雪地\n");
      break;
  }
  return 0;
}