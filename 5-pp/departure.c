/* Finds the closest departure time to an input time */
#include <stdio.h>

int main(void)
{
  int hour, minute, inMinutes, time0, time1, time2, time3, time4, time5, time6, time7;

  time0 = 480;
  time1 = 583;
  time2 = 679;
  time3 = 12 * 60 + 47;
  time4 = 14 * 60;
  time5 = 15 * 60 + 45;
  time6 = 19 * 60;
  time7 = 21 * 60 + 45;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);
  inMinutes = hour * 60 + minute;

  printf("Closest departure time is ");

  if (inMinutes <= time0 + (time1 - time0) / 2) {
    printf("8:00 a.m., arriving at 10:16 a.m.\n");
  } else if (inMinutes <= time1 + (time2 - time1) / 2) {
    printf("9:43 a.m., arriving at 11:52 a.m.\n");
  } else if (inMinutes <= time2 + (time3 - time2) / 2) {
    printf("11:19 a.m., arriving at 1:31 p.m.\n");
  } else if (inMinutes <= time3 + (time4 - time3) / 2) {
    printf("12:47 p.m., arriving at 3:00 p.m.\n");
  } else if (inMinutes <= time4 + (time5 - time4) / 2) {
    printf("2:00 p.m., arriving at 4:08 p.m.\n");
  } else if (inMinutes <= time5 + (time6 - time5) / 2) {
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
  } else if (inMinutes <= time6 + (time7 - time6) / 2) {
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
  } else {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;

}
