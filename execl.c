#include<unistd.h>

int main(void)
{
char *binaryPath = "/bin/ls";
char *arg1 = "-lh";
char *arg2 = "/home";

//int execl(const char *path, const char *command,const char *flag or arguments ..., NULL);

//execl() does not use the PATH environment variable. So, the full path of the executable file is required to run it with execl().
 
execl(binaryPath, "ls", arg1,".", NULL);

return 0;
}
