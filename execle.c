#include<unistd.h>

int main(void)
{
char *path="/bin/bash";
char *command="echo $x";
char *arg1="$x";
char *env[]={"x=7",NULL};
/*
Works just like execl() but you can provide your own environment variables along with it. The environment variables are passed as an array env. The last element of the env array should be NULL. All the other elements contain the key-value pairs as string.
*/
execle(path,path,"-c",command,NULL,env);


return 0;
}

