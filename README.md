# libft

## Описание

libft - первый проект в School 21. Задача написать функции стандартной библиотеки C, а также некоторые другие служебные функции, которые мы будете использовать в течение всего курса.

Компилирование было с флагами: ``gcc -Wall -Wextra -Werror``.

Все файлы проходят на ``Norminette``.

## Использование

``make`` и ``make all`` собирают библиотеку с бонусами, или перекомпилирую измененный файл, так же пересобирая библиотеку.

``make bonus`` собирает библиотеку с бонусами.

``make re`` удаляет все ``.o`` файлы, удаляет ``libft.a``, пересобирает библиотеку с бонусами.

``make clean`` удаляет все ``.o`` файлы.

``make fclean`` удаляет все ``.o`` файлы, так же удаляет ``libft.a``.

## Оценка

![alt tag](https://downloader.disk.yandex.ru/preview/1e001158ac988ab92c9d5a617ba00b0a466f91c273f9eeee320bc94fb31776c3/5fbc457a/7iArtKYtywTNLyy5caggPY63H74-oR7NYW-6lS7Y1P1qEWSEPHQaHex1BMT0c9NAIhtvVlboXJiC-sdEN_WIbg%3D%3D?uid=0&filename=appraisal_libft.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=0&tknv=v2&size=2048x2048 "Оценка проекта libft")

## my_test

Заменяем ``Makefile``, вставляем в папку с функциями ``main.c`` прописываем ``make test`` потом ``./test``, смотрим результаты, для удобства рекомендую ``make test && ./test``. Так же не забывайте проверять все возможные найденые тесты для своей библиотеки.
