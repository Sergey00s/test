#include <unistd.h>


void nth_writechar(char c)
{
  write(1, &c, 1);
}
