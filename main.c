#include <stdio.h>
#include <stdlib.h>



void InsertionSort(int a[], int n){
    int i,j,elemento;

    for(i=1;i<n;i++){        // vamos iterar por todos os elementos exceto o primeiro
        elemento = a[i];         // representa o numero que estamos movendo na parcela ordenada
        j = i;                   // nosso �ndice na parcela n�o ordenada
        /* Vamos iterar da direita para a esquerda <-- na parcela ordenada,
         * vamos parar quando o elemento a esquerda de nossa posic�o for menor
         * que o elemento que estamos inserindo */
        while(j>0 && a[j-1] > elemento) {
            a[j] = a[j-1]; // Movendo cada elemento que encontramos para a direita, abrindo espa�o.
            j = j - 1; // atualizando nosso contador para continuar a mover-se a esquerda.
        }
        a[j] = elemento; // inserimos o elemento na posic�o da parcela ordenada
    }
        printf("Depois de ordenar:"); //     Printa
    for( i = 0;i < n-1; i++){ //                          o
        printf("%d\n", a[i]); //                       array
    }

}
int main()
{
    char arquivo[100];
    printf("Insira o nome do arquivo: ");
    scanf(arquivo);

    int i = 0;
    int aray[100000];

        ifstream MeuArquivodeLeitura;
        MeuArquivodeLeitura.open(arquivo);
        char saida[1000];
        if (MeuArquivodeLeitura.is_open()) {
            while (!MeuArquivodeLeitura.eof()) {

                MeuArquivodeLeitura >> saida;
                aray[i] = atoi(saida);
                i++;
            }
        }

        MeuArquivodeLeitura.close();

        InsertionSort(aray, i);

    return 0;
}
