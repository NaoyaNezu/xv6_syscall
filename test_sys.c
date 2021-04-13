#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[]){
	fprintf(1,"The number returned from syscall is %d\n",return_const_num());
	exit(0);
}
