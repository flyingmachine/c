#include <stdio.h>
#define VOLUME_FORMULA (4.0f/3.0f * 3.14 * radius * radius * radius)

int main (int argc, const char * argv[]) {
  float radius;
  printf("Radius:");
  scanf("%f", &radius);
  printf("Volume: %f\n", VOLUME_FORMULA);
}
