#include <stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];
char *newp=newbuf;                      

void free(char *p)                             //?ͷŴ???????
  {if (p>=newbuf && p< newbuf + NEWSIZE)
     newp=p;
  }

