#include <unistd.h>
#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>

#define __NR_my_syscall 332
#define __NR_my_syscall2 333
long call_syscall(int a, int b){
	return syscall(__NR_my_syscall,a,b); 
}
long call_syscall2(char* string) {
	return syscall(__NR_my_syscall2,string);
}

int main(int argc, char* argv[]) {
	long int result = call_syscall(2,3);
	printf("System call my_syscall returned %ld\n",result);
	long int replacements = call_syscall2("AngelinaZaccaria0");
	//long int replacements = call_syscall2("qwertyuioplkjhgfdsazxcvbnmlkjhgfdsazxcvbnjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjdfghjkjgfhdgsdfhgjhkhgfhjhcbhljhgfhdfgjhkjlhgfhddfgkhlhjfdhfghjljghhfghljhgfjhfghljhgjhhgh0");
	printf("System call my_syscall2 returned %ld\n replacements",replacements);
	return 0;
}
