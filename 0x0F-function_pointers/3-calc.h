#ifndef __FUNC__H__
#define __FUNC__H__

/**
 * struct op - okjxx
 *
 * @op: ff
 * @f: fffd
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#ifndef __GET__H__
#define __GET__H__

int (*get_op_func(char *s))(int, int);

#endif /* ifndef __GET__H__ */

#endif /* __FUNC__H__ */
