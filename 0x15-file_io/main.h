#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <errno.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
