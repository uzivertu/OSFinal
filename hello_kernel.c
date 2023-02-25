#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void) {
	printk(KERN_INFO "The multiplication table is as following\n");
	  for (int i = 2; i < 10; ++i)
	  {
	  	  for (int j = 2; j < 10; ++j)
		  {
		  	int res = i * j;
			printk(KERN_INFO "%d * %d = %d\n", i, j, res);
		  }
	  }
	return 0;
}

module_init(hello_init);
MODULE_LICENSE("GPL");
