#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
//	create_pool();
	setenv("HOME","$HOME/hq",1);
	char home[20];
	strcpy(home,getenv("HOME"));
	chdir(home);
	printf("%s\n",getenv("HOME"));
	system("ls");

	while(1)
	{
//		;
	//	accept();

	//	addtask();
	}
	return 0;
}
