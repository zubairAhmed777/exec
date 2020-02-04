#include<unistd.h>

int main(void)
{
char *command="ls";
char *args[]={"ls","-lar",".",NULL};

execvp(command,args);

return 0;
}

