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

![alt tag](https://s191vla.storage.yandex.net/rdisk/74d71ded9c1aadcf80b792c7e8c87847389d0a6f38e8d96ac2bd46c09ee2d43b/5fbbb361/kT1PvxCDQJiaZik2w4wYLYFUclaq5lXJ3oVatt_CjHyyXuB2mELXYRG3-YJjHAGXKx8bOkhtq0lPcuPsSaSOXQ==?uid=481277718&filename=appraisal_libft.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&owner_uid=481277718&fsize=123464&hid=e7b19c333fea29793be25e1091154db4&media_type=image&tknv=v2&etag=0cb78462443e2c1e6156653c40e8462f&rtoken=IMZO0Ho1egIc&force_default=yes&ycrid=na-1663b286ddbdafcc38a36fba519e1542-downloader18e&ts=5b4c5d5dada40&s=61353f367cafafe75e3b1cc5940d622aeb5ead9f1db07ad8507ebf245780f08d&pb=U2FsdGVkX1_fveieKv3ycrS_NfPW-QHIOLtInp8SOyMO9ecfBPv3Xdnp6DXoKn578wGCyGJh0gIjGVA4s8y0gk3UOvNpd3tB-qBirqnYEiU "Оценка проекта libft")

## my_test

Заменяем ``Makefile``, вставляем в папку с функциями ``main.c`` прописываем ``make test`` потом ``./test``, смотрим результаты, для удобства рекомендую ``make test && ./test``. Так же не забывайте проверять все возможные найденые тесты для своей библиотеки.
