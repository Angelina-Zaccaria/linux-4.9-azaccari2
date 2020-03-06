#include<linux/sched.h>
#include<linux/syscalls.h>

SYSCALL_DEFINE2(my_syscall, int, num1, int, num2) {
	int sum = num1 + num2;
	printk(KERN_INFO "Process id of the calling process is %i. The sum of %d and %d is %d", current->pid, num1, num2, sum);
	return sum;
}

