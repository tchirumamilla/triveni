#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include"add.h"

static int a=1;
static int b=2;

static int __init hello_init(void)
{
	printk(KERN_ALERT "SUM IS : %d\n",my_add(a,b));
		printk(KERN_ALERT "SUM IS : %d\n",my_add(a,b));

	return 0;
}

static int __exit hello_exit(void)
{
printk(KERN_ALERT "exit\n");
}

module_init(hello_init);
module_exit(hello_exit);
