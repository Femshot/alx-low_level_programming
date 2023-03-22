#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
/*int main(int argc, char *argv[]);*/
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};
/**
 * op_t - typedef of struct op
 */
typedef struct op op_t;
int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_add(int a, int b);

#endif
