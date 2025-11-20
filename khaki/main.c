#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{	

  if (argc < 2) return -1;
	
	if ( strcmp("new", argv[1]) == 0 )
	{
      
		// make a new project
    char *project_name = (argc >= 3) ? argv[2] : "New Project";

		// Create new project
    if (mkdir(project_name, 0755) != 0)
    {
      perror("mkdir");
      return -1;
    }
    
    char main_path[512];
    snprintf(main_path, sizeof(main_path), "%s/main.c", project_name);

    // Create a main.c file
    FILE *main_file = fopen(main_path, "w");
    if (main_file == NULL)
    {
      perror("fopen");
      return -1;
    }
    
    fprintf(main_file, "Hello, world!");
    fclose(main_file);
  
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
