# Блок-схемы
0. ГОСТ 19.701-90 по которому работаем.

https://www.edsd.ru/files/pdf/GOST-19.701-90.-Shemy-algoritmov-programm-dannyh-i-sistem.-Uslovnye-Oboznacheniya-i-pravila-vypolneniya.pdf

1. Блоки в блок-схеме должны быть все соизмеримы - иметь одинаковый размер. Если текст в блоке не умещается, можно использовать комментарий или разбить на несколько блоков (например, если это простые операции)
2. Блоки должны быть размещены по сетке:
```
. 1 2 3
A
B
C
```
3. В сетке нельзя использовать буквы, которые могут вызывать разночтения (I и O)
4. Потоки данных или потоки управления в схемах показываются линиями. Направление потока слева направо и сверху вниз считается стандартным.
5. В случаях, когда необходимо внести большую ясность в схему (например, при соединениях), на линиях используются стрелки. Если поток имеет направление, отличное от стандартного, стрелки должны указывать это направление.
6. В схемах следует избегать пересечения линий. Пересекающиеся линии не имеют логической связи между собой, поэтому изменения направления в точках пересечения не допускаются.
7. Две или более входящие линии могут объединяться в одну исходящую линию. Если две или более линии объединяются в одну линию, место объединения должно быть смешено.

# Примеры
В директории drawio представлены:
- [описание основных блоков](drawio/block-samples.drawio)
- [пример блок-схемы](drawio/sample.drawio)
- [пример частых ошибок](drawio/fails.drawio)
