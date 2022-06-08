#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int is_empty(struct stack* s)
{
	return s->top == 0;
}

int init(struct stack* s)
{
	s->top = 0;
	s->max = 100;
	memset(s->data, 0, sizeof(char)*100);

	return 0;
}

char pop(struct stack* s)
{
	if(s->top > 0)
	{
		s->top--;
		char c = s->data[s->top];
		s->data[s->top] = 0;
		return c;
	}

	return 0;
}

int push(struct stack* s, char c)
{
	if(s->top < s->max)
	{
		s->data[s->top] = c;
		s->top++;
		return 1;
	}

	return 0;
}

char peek(struct stack* s)
{
	return s->data[s->top-1];
}




