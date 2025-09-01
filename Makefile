.PHONY: debug

debug:
	gcc -o ${CURDIR}/debug/arith.so -g ${CURDIR}/source/inc.c -shared -fPIC -I.
