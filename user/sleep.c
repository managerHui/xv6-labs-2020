#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char* argv[]) {
    if(argc == 1) printf("error: expect 2 parameters ,got 1");
    int i;
    i = atoi(argv[1]);
    sleep(i);
    exit(0);
}