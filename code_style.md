Буду ссылаться на code-style от преподавателя из МГУ

https://github.com/blackav/cmc-os/blob/master/CodeStyle.md

за исключением:

4.5.1. Определение типа возвращаемого значения допускается писать в той же строке:
```
int foo(void)
{
    return 0;
}
```

можно и так:
```
int
foo(void)
{
    return 0;
}
```
Имя функции начинается с первой позиции, между именем функции и открывающей скобкой пробелы не ставятся. Открывающая и закрывающая фигурные скобки блока функции располагаются каждая на отдельной строке на первой позиции.
