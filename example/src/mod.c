#include "mod_lib.h"

typedef struct data {
  int var1;
  int var2;
  int var3;
  // etc.
} data;

extern int my_mod_name;
unsigned int mod_size = sizeof(data);
int anotherone = 8;
int uninit;

void test()
{
  mod_size = 16;
  uninit = 5;
  anotherone = 98;
}

void test2()
{
  uninit = (uninit + 2) % 3;
}