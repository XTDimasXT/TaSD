#include "../inc/print.h"

void print_menu_arr(void)
{
    printf("1. Добавить элементы в стек\n");
    printf("2. Добавить элементы в стек случайным образом\n");
    printf("3. Удалить элементы из стека\n");
    printf("4. Вывести текущий стек\n");
    printf("5. Распечатать убывающие серии последовательности целых чисел в обратном порядке\n");
    printf("0. Выход\n");
}

void print_menu_list(void)
{
    printf("1. Добавить элементы в стек\n");
    printf("2. Добавить элементы в стек случайным образом\n");
    printf("3. Удалить элементы из стека\n");
    printf("4. Вывести текущий стек\n");
    printf("5. Распечатать убывающие серии последовательности целых чисел в обратном порядке\n");
    printf("6. Показать список свободных адресов\n");
    printf("0. Выход\n");
}

void print_choice(void)
{
    printf("1. Заполнение стека с помощью списка\n");
    printf("2. Заполнение стека с помощью массива\n");
    printf("3. Сравнение по времени и памяти двух представлений\n");
    printf("0. Выход\n");
}

void print_array(stack_array_t *stack_array)
{
    printf("Размер стека - %d\n", stack_array->len);
    int *ptmp = stack_array->p;
    for (int i = stack_array->len; i > 0; i--)
        printf("%d ", *(ptmp--));
    printf("\n");
}

void print_series_nums_array(stack_array_t *stack_array)
{
    if (stack_array->len == 0)
    {
        printf("Стек пуст\n");
        return;
    }

    int prev_elem;
    int flag;
    while (stack_array->len > 1)
    {
        flag = 0;

        prev_elem = *stack_array->p;
        stack_array->p--;
        stack_array->len--;

        while (*stack_array->p < prev_elem && stack_array->len > 0)
        {
            printf("%d", prev_elem);
            prev_elem = *stack_array->p;
            stack_array->p--;
            stack_array->len--;
            flag = 1;
        }

        if (flag == 1)
            printf("%d\n", prev_elem);
    }
}

void print_list(stack_list_t **stack_list)
{
    if (stack_list == NULL)
    {
        printf("Размер стека - 0\n");
        return;
    }
    else
        printf("Размер стека - %d\n", (*stack_list)->num_elem);
    
    stack_list_t *ptmp = *stack_list;
    while (ptmp != NULL)
    {
        printf("%d %p\n", ptmp->elem, ptmp);
        ptmp = ptmp->next;
    }
}

void print_series_nums_list(stack_list_t **stack_list)
{
    
}