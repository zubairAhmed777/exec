#include<unistd.h>

int main(void)
{
char *path="/bin/ls";
char *args[]={"ls","-lai",".",NULL};

execv(path,args);

return 0;
}

