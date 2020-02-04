#include<unistd.h>

int main(void)
{
char *command="ls";
char *arg1="-la";
char *arg2=".";
/*
execlp() uses the PATH environment variable. So, if an executable file or command is available in the PATH, then the command or the filename is enough to run it, the full path is not needed.
*/
execlp(command,command,arg1,arg2,NULL);


return 0;
}
