#include <stdio.h>
#include <string.h>

void fibonacci(int value) {
    int first = 0;
    int second = 1;
    int number = 0;
    while (value > number){
        number = first + second;
        first = second;
        second = number;
    }
    if(number == value){
        printf("O valor %d está na sequência de Fibonacci\n", value);
    } else {
        printf("O valor %d não está na sequência de Fibonacci\n", value);
    }
}

void theresA(){
    char string[100];
    int cont = 0;
    int i;
    printf("Digite a palavra desejada:");
    fgets(string, sizeof(string), stdin);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            cont++;
        }
    }
    
    printf("'A' ou 'a' aparencem %d vez(es) na palavra %s", cont, string);
}

void soma(){
    int indice = 12,
    soma = 0,
    k = 1;
    
    while(k < indice){
        k = k + 1;
        soma = soma + k;
    }
    printf("O valor da variável soma é: %d", soma);
}
int main()
{
    fibonacci(21);
    theresA();
    soma();
    /* 
    Exercício 4:
    a) 9 (anterior + 2)
    b) 128 (dobro do número anterior)
    c) 49 (Soma o anterior ao próximo ímpar)
    d) 100 (Anterior + 12 + 8*(índice que ele está *primeiro índice é 0): 
    4 + 12 + 8*0 = 16
    16 + 12 + 8*1 = 36
    36 + 12 + 8*2 = 64
    64 + 12 + 8*3 = 100
    e) 13 (sequência de Fibonacci)
    f) 20 (sequência lógica comeca quando adiciona-se +1 sempre)
    */
    
    /* 
    Exercício 5:
     Eu poderia utilizar o calor ao meu favor. Primeiramente, podemos nomear os interruptores como 1, 2 e 3. Então, eu faria
     o seguinte: deixaria o interruptor 1 ligado, deixaria ligado por alguns minutos e depois desligaria o interruptor 2 e
     não ligaria o interruptor 3. Após isso, iria para alguma das salas:
     - Se a lâmpada estivesse fria, significaria que essa sala corresponderia ao interruptor 3.
     - Se a lâmpada estivesse morna, significaria que essa sala corresponderia ao interruptor 2.
     - Se a lâmpada estivesse "pegando fogo", significaria que a sala corresponderia ao interruptor 1.
     Após descobrir a primeira sala, faltaria ir até uma outra sala de lâmpada e verificar a temperatura da lâmpada e fazer
     igual eu disse anteriormente. Assim, descobriríamos qual interruptor corresponderia a primeira e a segunda sala. Obviamente,
     a última sala corresponderia ao interruptor faltante, que não foi identificado nem na primeira, nem na segunda sala.
    */
    return 0;
}
