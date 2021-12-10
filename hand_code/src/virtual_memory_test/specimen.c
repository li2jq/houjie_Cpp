#include <stdio.h>
#include <sys/mman.h> 	/* for mlock() */
#include <stdlib.h>		/* for malloc() */
#include <string.h>		/* for memset() */

/* for getpid() */
#include <sys/types.h>
#include <unistd.h>

#define MEM_LENGTH 1024

int main()
{
	/* Allocate 1024 bytes in heap */
	char *ptr = NULL;
	ptr = malloc(MEM_LENGTH);
	if (!ptr) {
		perror("malloc fails. ");
		return -1;
	}

	/* obtain physical memory */
	memset(ptr, 1, MEM_LENGTH);

	/* lock the allocated memory in RAM */
	mlock(ptr, MEM_LENGTH);
    int p=0;
    printf("%p \n", (void*)&p);

	/* print the pid and vaddr. Thus we can work on him */
	printf("my pid: %d\n\n", getpid());
	printf("virtual address to work: 0x%lx\n", (unsigned long)ptr);

	/* make the program to wait for user input */
	scanf("%c", &ptr[16]);

	return 0;
}