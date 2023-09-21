#include<stdio.h>

/**
 * myStartupFun - Applies constructor attribute to myStartupFun() so it
 * is executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation of the myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
