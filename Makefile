TITLE=dmcp

COMMON_FLAGS = -Wall -Wextra -Wpedantic -Werror -std=c99

ifeq ($(OS), Windows_NT)
	COMMON_FLAGS += -Wno-pedantic-ms-format
endif

CFLAGS_DEBUG = $(COMMON_FLAGS) -fsanitize=undefined,address,leak -g

CFLAGS_RELEASE = $(COMMON_FLAGS) -s -O2

all:
	gcc $(CFLAGS_RELEASE) main.c -o $(TITLE)

debug:
	gcc $(CFLAGS_DEBUG) main.c -o $(TITLE)

clean:
	rm $(TITLE)

run:
	./$(TITLE)

test:
	python3 test.py

test_bruteforce:
	python3 test.py -b

test_random:
	python3 test.py -r

production:
	clang $(CFLAGS_RELEASE) main.c -o $(TITLE)
