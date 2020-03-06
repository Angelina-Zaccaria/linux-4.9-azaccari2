#include<linux/sched.h>
#include<linux/syscalls.h>

SYSCALL_DEFINE1(my_syscall2, char*, arr) {
	char buffer[1024];
	int return_val = copy_to_user(buffer, arr, 129);
	if (return_val == 0) {
		return -1;
	}
	else {
		int count = 0;
		int curr = 0;
		while (arr[curr] != '0') {
			if (arr[curr] == 'o') {
				arr[curr] = '0';
				++count;
			}
			++curr;
		}
	}
	printk(KERN_INFO "Process id of the calling process is %i. In the character array %s, there are %d occurrences of o replaced by 0", current->pid, arr*, count);
	return count;
}
