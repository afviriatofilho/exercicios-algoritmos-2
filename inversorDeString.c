#include <stdio.h>

/*Lê uma string até a quebra de linha, cria uma
string para guardar a inversão, depois calcula até
onde na quantidade de caracteres pré-definida o usuário
digitou, e então começa a guardar os caracteres da
string lida na invertida, a partir do último caractere
da lida. Depois disso, mostra para o usuário a inversão.*/
int main() {
	char palavra[100] = { '\0' };
	printf("Digite a frase: ");
	fgets(palavra, sizeof(char) * 100, stdin);

	char invertida[100] = { '\0' };
	int contador = 0;
	for (int i = 0; i < 100; i++) {
		if (palavra[i] == '\n') {
			contador = i - 1;
		}
	}
	
	int aux = contador;
	for (int i = 0; i <= contador; i++) {
		invertida[i] = palavra[aux];
		aux--;
	}

	printf("Aqui está a frase invertida: %s\n", invertida);

	return 0;
}