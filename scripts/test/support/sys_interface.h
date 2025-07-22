#include <stddef.h>


int open(const char *pathname, int flags);

ssize_t write(int fd, const void *buf, size_t count);

int close(int fd);
