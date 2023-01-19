#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adding int
 * @a : firsrt int
 * @b : second int
 * Description : " adding integers together"
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtract int
* @a : firsrt int
* @b : second int
* Description : " subtracting integers together"
* Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mutiply int
 * @a : int to use
 * @b : int to use
 * description : "mult two ints"
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);

}
/**
 * op_div - divide int
 * @a : int to use
 * @b : int to use
 * description : "div two ints"
 * Return: result
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo og int
 * @a : int to use
 * @b : int t use
 * description : "modulo of two no"
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
