#include "mod_lib.h"

extern unsigned int mod_offsets[];
extern unsigned int mods_combined_size;

extern void *bfbb_malloc(unsigned int size) {}

void *get_mod_data(int idx) {
  void **state_ptr = (void **)0x3B19FC;
  if (*state_ptr == 0) {
    *state_ptr =
        (void *)bfbb_malloc(mods_combined_size); // symbol created at link-time
  }
  return *state_ptr + mod_offsets[idx]; // symbol created at link-time
}