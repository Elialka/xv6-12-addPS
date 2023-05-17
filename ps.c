// This file will be compiled to the binary that is called when we invoke the ps
// command from the xv6 shell
// Modified by Eli Alkhazov 208516351
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  cps151();

  exit(0);
}
