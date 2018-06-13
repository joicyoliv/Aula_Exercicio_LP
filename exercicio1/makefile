# Comandos do sistema operacional

# Compilador
CC = g++

# Variaveis para os subdiretorios
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build
DOC = ./doc
LIB = ./lib

# Define o nome do binario/executavel final
#PROG = $(BIN)/exercicio1

# Opcoes de compilacao
CFLAGS = -Wall -pedantic -std=c++11 -I$(INC)
AR = ar


all: mbasic.a mbasic.so exercicio1_estatico exercicio1_dinamico

mbasic.a: $(SRC)/main.cpp $(INC)/exercicio1.h
	$(CC) $(CFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o
	$(CC) $(CFLAGS) -c $(SRC)/exercicio1.cpp -o $(OBJ)/exercicio1.o
	$(AR) rcs $(LIB)/$@ $(OBJ)/main.o $(OBJ)/exercicio1.o
	@echo "+++[Biblioteca estatica criada em $(LIB/$@)] +++"

mbasic.so: $(SRC)/main.cpp $(INC)/exercicio1.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC)/main.cpp -o $(OBJ)/main.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC)/exercicio1.cpp -o $(OBJ)/exercicio1.o
	$(CC) -shared -fPIC -o $(LIB)/$@ $(OBJ)/main.o $(OBJ)/exercicio1.o 
	@echo "+++[Biblioteca dinamica criada em $(LIB/$@)] +++"

exercicio1_estatico:
	$(CC) $(CFLAGS) $(SRC)/main.cpp $(LIB)/mbasic.a -o $(OBJ)/$@

exercicio1_dinamico:
	$(CC) $(CFLAGS) $(SRC)/main.cpp $(LIB)/mbasic.so -o $(OBJ)/$@

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	@echo "Removendo arquivos objeto e executaveis/binarios..."
	@rm -rf $(OBJ)/*