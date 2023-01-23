#include <unistd.h>


char nth_writechar(char c)
{
  write(1, &c, 1);
}
