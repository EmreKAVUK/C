/*
	How to compile:
		gcc convert_to_postfix.c stack.c -o convert
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int precedence(char c)
{
	switch(c)
	{
		case '+':
		case '-':
			return 1;

		case '*':
		case '/':
			return 2;
	}

	return 0;
}

int main()
{
	struct stack s;
	char str[] = "a-(b+c*d)/e";
	char* p = str;

	printf("%s\n", str);

	init(&s);

	char c;

	while(*p) //  Read an item from input infix expression
	{
		switch(*p)
		{
			// If item is “(“ push it on the stack
			case '(': push(&s, *p); break;
			// If item is “)” pop all operators from top of the stack one-by-one, until a “(“ is encountered on stack and removed
			case ')':
					while((c = pop(&s)) != '(')
					{
						printf("%c", c);
					}

					break;
			case '*':
			case '/':
			case '+':
			case '-':
			//If the item is an operator
				c = peek(&s);
				
				if (precedence(*p) > precedence(c))
				{
					//  If the operator has higher  precedence than the one already on top of the stack then push it onto the operator stack
					push(&s, *p);
				}
				else
				{
					//  If the operator has lower precedence than the one already on top of the stack then 
					//  pop the operator on top of the operator stack and append it to postfix string, and 
					//  push lower precedence operator onto the stack
					c = pop(&s);
					printf("%c", c);
					push(&s, *p);
				}

				break;
			// If item is an operand append it to postfix string
			default: printf("%c", *p); break;
		}

		p++;
	}

	//If end of infix string pop the stack one-by-one and append to postfix string
	while(!is_empty(&s))
	{
		printf("%c", pop(&s));
	}

	printf("\n");

	return EXIT_SUCCESS;
}
