#include<unistd.h>

int main(void)
{
char *path="/bin/bash";
char *args[]={path,"-c","echo $x",NULL};
char *env[]={"x=5",NULL};

execve(path,args,env);

return 0;
}
