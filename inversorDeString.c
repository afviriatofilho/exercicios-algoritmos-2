#include <stdio.h>

/*L� uma string at� a quebra de linha, cria uma
string para guardar a invers�o, depois calcula at�
onde na quantidade de caracteres pr�-definida o usu�rio
digitou, e ent�o come�a a guardar os caracteres da
string lida na invertida, a partir do �ltimo caractere
da lida. Depois disso, mostra para o usu�rio a invers�o.*/
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

	printf("Aqui est� a frase invertida: %s\n", invertida);

	return 0;
}