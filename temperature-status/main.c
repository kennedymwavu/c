#include "temperature-status.h"
#include <stdio.h>

int main() {
  int t1 = 75;
  char *t1_status = get_temperature_status(t1);

  int t2 = 30;
  char *t2_status = get_temperature_status(t2);

  int t3 = 100;
  char *t3_status = get_temperature_status(t3);

  printf("temp: %d status: %s\ntemp: %d status: %s\ntemp: %d status: %s\n", t1,
         t1_status, t2, t2_status, t3, t3_status);
  return 0;
}
