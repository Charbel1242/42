#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


int main()
{
	int fd; 
	char buf[256];
	int chars_read;

	fd = open("file.txt", O_RDONLY);
	while((chars_read = read(fd, buf, 25)))
	{
		buf[chars_read] = '\0';
		printf("buf %s\n", buf);
	}
}

int main()
{
    int fd;

    fd = open("file.txt", O_RDWR | O_CREAT | O_APPEND);
    dup2(fd,1);
    write(1, "hello", 5);

    return 0;
}