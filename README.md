# libft

## Description

My library, which repeats the functions of the C standard library, as well as some other utility functions that I will use in future projects.

The compilation was with flags: ``gcc -Wall -Wextra -Werror``.

All files pass to ``Norminette``.

No memory leaks.

## Using

``make`` and ``make all`` build a library with bonuses, or recompile the modified file, also rebuilding the library.

``make bonus`` collects a library with bonuses.

``make re`` deletes all ``.o`` files, deletes ``libft.a``, rebuilds the library with bonuses.

``make clean`` deletes all ``.o`` files.

``make fclean`` deletes all ``.o`` files, also deletes ``libft.a``.

## my_test

Replace the ``Makefile``, insert it into the folder with the functions ``main.c`` write ``make test`` then ``./test``, see the results, for convenience, I recommend ``make test && ./test``. Also, do not forget to check all possible tests found for your library.
