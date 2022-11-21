#ifndef __STRUCTS_H__
#define __STRUCTS_H__

typedef struct stack_array
{
    int *p;
    int len;
} stack_array_t;

typedef struct stack_list
{
    int elem;
    int num_elem;
    struct stack_list *next;
} stack_list_t;

typedef struct arr_del_adresses
{
    stack_list_t **arr;
    int len;
} arr_del_adresses_t;

#endif // __STRUCTS_H__