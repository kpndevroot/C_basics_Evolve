#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void main()
{
    int fd;

    char buffer[1024] = "When you invoke GCC, it normally does preprocessing, compilation, assembly and linking. The overall options allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker.Then the output consists of object files output by the assembler.";

    fd = open("example.txt", O_RDWR);

    write(fd, &buffer, strlen(buffer));

    close(fd);
}