#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

void foo(int *array)
{
	array[0] = 42;
}

int *bar()
{
        // создаем массив из 100 элементов в куче без инициализации
	int *array = malloc(100 * sizeof(int));
	array[0] = 42;
	return array;
}

int *bar_bad()
{
	// создаем массив из 100 элементов на стеке
	int array[100];
	array[0] = 42;
        // warning: address of stack memory associated with local variable 'array' returned [-Wreturn-stack-address]
	return array;
}

int main()
{
        // создаем массив из 100 элементов на стеке
	int array[100];
        // создаем массив из 100 элементов в куче без инициализации
	int *n_array = malloc(100 * sizeof(int));
        // создаем массив из 100 элементов в куче с инициализацией нулем
	int *m_array = calloc(100, sizeof(int));

        // вызов функии из другого модуля
	printf("%d\n", sum(100));

        // передаем массив в куче
	foo(n_array);
	printf("heap: %d\n", n_array[0]);
	
        // передаем массив на стеке
        foo(array);
	printf("stack: %d\n", array[0]);

        // получаем выделенный в куче массив из функции
	int *b_array = bar();
	printf("heap in func: %d\n", b_array[0]);

        // ** Плохой пример **
        // получаем массив на стеке из функции
        // это может привести к крешу программы или занулению данных
	int *bad_array = bar_bad();
	printf("stack from func: %d\n", bad_array[0]);


        // очищаем память
	free(b_array);
	free(m_array);
	free(n_array);
	return 0;
}