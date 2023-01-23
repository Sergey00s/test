#include <unistd.h>


nth_writechar(char c)
{
  write(1, &c, 1);
}
