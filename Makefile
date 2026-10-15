# (E) Barsotion KOy 2018-2026

CC ?= cc
AR ?= ar
SIZE ?= size

.PHONY: build
build: clean
	@echo '=====< Building INA3221 library >==============='
	@mkdir -p build
	${CC} ${FLAGS} -I./inc -c src/ina3221_barsotion.c -o build/ina3221_barsotion.o
	@echo '=====< Creating an archive >===================='
	${AR} rcs build/libbarsotion-ina3221.a build/*.o
	@echo '=====< Totals >================================='
	${SIZE} -t --format=berkeley build/libbarsotion-ina3221.a

clean:
	rm -rf build
