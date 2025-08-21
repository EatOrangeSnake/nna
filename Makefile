.PHONY: debug

debug:
	gcc -o ${CURDIR}/debug/arith.so -g ${CURDIR}/source/arith.c -shared -fPIC
