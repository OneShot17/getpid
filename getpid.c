#include <unistd.h>
#include <stdio.h>

int main() {

  printf( "%d\n", getppid() );
  
  return 0;
}
