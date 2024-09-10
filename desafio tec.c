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
        printf("O valor %d est� na sequ�ncia de Fibonacci\n", value);
    } else {
        printf("O valor %d n�o est� na sequ�ncia de Fibonacci\n", value);
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
    printf("O valor da vari�vel soma �: %d", soma);
}
int main()
{
    fibonacci(21);
    theresA();
    soma();
    /* 
    Exerc�cio 4:
    a) 9 (anterior + 2)
    b) 128 (dobro do n�mero anterior)
    c) 49 (Soma o anterior ao pr�ximo �mpar)
    d) 100 (Anterior + 12 + 8*(�ndice que ele est� *primeiro �ndice � 0): 
    4 + 12 + 8*0 = 16
    16 + 12 + 8*1 = 36
    36 + 12 + 8*2 = 64
    64 + 12 + 8*3 = 100
    e) 13 (sequ�ncia de Fibonacci)
    f) 20 (sequ�ncia l�gica comeca quando adiciona-se +1 sempre)
    */
    
    /* 
    Exerc�cio 5:
     Eu poderia utilizar o calor ao meu favor. Primeiramente, podemos nomear os interruptores como 1, 2 e 3. Ent�o, eu faria
     o seguinte: deixaria o interruptor 1 ligado, deixaria ligado por alguns minutos e depois desligaria o interruptor 2 e
     n�o ligaria o interruptor 3. Ap�s isso, iria para alguma das salas:
     - Se a l�mpada estivesse fria, significaria que essa sala corresponderia ao interruptor 3.
     - Se a l�mpada estivesse morna, significaria que essa sala corresponderia ao interruptor 2.
     - Se a l�mpada estivesse "pegando fogo", significaria que a sala corresponderia ao interruptor 1.
     Ap�s descobrir a primeira sala, faltaria ir at� uma outra sala de l�mpada e verificar a temperatura da l�mpada e fazer
     igual eu disse anteriormente. Assim, descobrir�amos qual interruptor corresponderia a primeira e a segunda sala. Obviamente,
     a �ltima sala corresponderia ao interruptor faltante, que n�o foi identificado nem na primeira, nem na segunda sala.
    */
    return 0;
}
