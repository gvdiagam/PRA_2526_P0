# Objetivo principal
all: main

# Compilar BrazoRobotico.o a partir de BrazoRobotico.cpp y su cabecera
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

# Compilar main.o a partir de main.cpp y la cabecera de BrazoRobotico
main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

# Enlazar los archivos objeto para generar el ejecutable 'main'
main: main.o BrazoRobotico.o
	g++ -o main main.o BrazoRobotico.o

# Limpiar los archivos objeto y el ejecutable
clean:
	rm -f *.o main

# Ejecutar el programa tras la compilación
test: all
	./main

