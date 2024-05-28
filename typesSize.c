#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {

  printf("char size = %lu\n", sizeof(char));
  printf("short int size = %lu\n", sizeof(short int));
  printf("int size = %lu\n", sizeof(int));
  printf("long int size = %lu\n", sizeof(long));
  printf("long long int size = %lu\n", sizeof(long long int));
  printf("float size = %lu\n", sizeof(float));
  printf("double size = %lu\n", sizeof(double));
  printf("long double size = %lu\n", sizeof(long double));
  printf("bool size = %lu\n", sizeof(bool));

  printf("\nFloats limits\n");
  printf("FLT_DIG = %i\n", FLT_DIG);
  printf("DBL_DIG = %i\n", DBL_DIG);
  printf("LDBL_DIG = %i\n", LDBL_DIG);
  printf("FLT_MIN_EXP = %i\n", FLT_MIN_EXP);
  printf("DBL_MIN_EXP = %i\n", DBL_MIN_EXP);
  printf("LDBL_MIN_EXP = %i\n", LDBL_MIN_EXP);
  printf("FLT_MIN_10_EXP = %i\n", FLT_MIN_10_EXP);
  printf("DBL_MIN_10_EXP = %i\n", DBL_MIN_10_EXP);
  printf("LDBL_MIN_10_EXP = %i\n", LDBL_MIN_10_EXP);
  printf("FLT_MAX_EXP = %i\n", FLT_MIN_EXP);
  printf("DBL_MAX_EXP = %i\n", DBL_MAX_EXP);
  printf("LDBL_MAX_EXP = %i\n", LDBL_MAX_EXP);
  printf("DBL_MAX_10_EXP = %i\n", DBL_MAX_10_EXP);
  printf("LDBL_MAX_10_EXP = %i\n", LDBL_MAX_10_EXP);
  printf("FLT_MAX = %g\n", FLT_MAX);
  printf("DBL_MAX = %g\n", DBL_MAX);
  printf("LDBL_MAX = %g\n", LDBL_MAX);
  printf("FLT_EPSILON = %g\n", FLT_EPSILON);
  printf("DBL_EPSILON = %g\n", DBL_EPSILON);
  printf("LDBL_EPSILON = %g\n", LDBL_EPSILON);
  printf("FLT_MIN = %g\n", FLT_MIN);
  printf("DBL_MIN = %g\n", DBL_MIN);
  printf("LDBL_MIN = %g\n", LDBL_MIN);

  return 0;
}
