#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{	
	
	if ( strcmp("new", argv[1]) == 0 )
	{
		// make a new project
		int created = mkdir("test", 0755);
		if (created == 0)
		{
			FILE *main_c = fopen("main.c", "w");

			if (main_c == NULL)
			{
				perror("Failed to create main.c");
				return -1;
			}
			
			fprintf(main_c, "Hello, world!\n");
      fclose(main_c);

			int moved_to = chdir("test") == 0;
		}
		else
		{
			perror("failed to create the prject folder\n");
			return -1;
		}	
	}
	else if ( strcmp("run", argv[1]) == 0 )
	{
		// build and run program
		  
		if ( strcmp("norm", argv[2]) == 0 )
		{
			// use norminette
		}
	}
}
