#include <cstdio>
#include <cstdlib>

/*
  Tests cache misses.
*/
// Declaration for each option as a function

void option1(long *myArr, long m, long n);
void option2(long *myArr, long m, long n);
void option3(long *myArr, long m, long n);

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Usage: cacheTest sizeI sizeJ\nIn first input.\n");
    return 1;
  }
  long sI = atoi(argv[1]);
  long sJ = atoi(argv[2]);

  printf("Operating on matrix of size %ld by %ld\n", sI, sJ);

  long *arr = new long[sI * sJ]; // double array.
  option1(arr, sI, sJ);
  option2(arr, sI, sJ);
  option3(arr, sI, sJ);

  printf("%ld\n", arr[0]);

  return 0;
}
// HOMEWORK: Methods as functions

// option 1
void option1(long *myArr, long m, long n) {
  for (long i = 0; i < m; ++i)
    for (long j = 0; j < n; ++j)
      myArr[(i * (n)) + j] = i;
}

// option 2
void option2(long *myArr, long m, long n) {
  for (long i = 0; i < m; ++i)
    for (long j = 0; j < n; ++j)
      myArr[(j * (m)) + i] = i;
}

// option 3
void option3(long *myArr, long m, long n) {
  for (int i = 0; i < m * n; ++i)
    myArr[i] = i;
}
