#include <stdio.h>
#include <stdlib.h>

/*
    Su codigo va aqui

    Definan una funcion que cuente la cantidad de bits en un numero
    y encuentren la posicion del bit 1 mas alto y la posicion del bit 1 mas bajo.
    Las posiciones validas son entre 0 y 31, 0 para la posicion mas baja y 31 para
    la posicion mas alta. Si el numero no tiene ningun bit 1 (es cero) tiene que devolver -1
    ambos resultados. Van a tener que cambiar la definicion de la funcion para que puedan
    realizar lo que necesitan
*/

void analyze(const unsigned x) {
}

void bit_analyze(const int x, unsigned test) {
    unsigned bit_count = 0;
    int high_1, low_1;
    high_1 = low_1 = -1;

    /*
        Su codigo va aqui

        Llamen a la funcion que definieron, y cambien los 3
        valores, bit_count, high_1, low_1. Tienen que cambiar
        la llamada a la funcion para que concuerde con lo que
        definieron.
    */

    analyze(x);

    // Apartir de aqui ignoren esto
    char c[1000];
    FILE *fp;
    if(test) {
        fp = fopen("e3_sol.txt", "wb");
    	fprintf(fp,"%d\n", bit_count);
        fprintf(fp,"%d\n", high_1);
        fprintf(fp,"%d", low_1);
    	fclose(fp);
    } else {
        printf("   NUMBER: %u\n",x);
        printf("     BITS: %u\n",bit_count);
        printf("HIGHEST 1: %d\n",high_1);
        printf(" LOWEST 1: %d\n",low_1);
        printf("\n");
    }
}

int stoi(const char * str) {
    char * x = NULL;
    const long parsed = strtol(str, &x, 0);
    return x==str ? 0 : (int)parsed;
}

int main(int argc,
    const char * argv[]) {
    if(argc > 1) {
        if(argc == 2) {
            bit_analyze(stoi(argv[1]), 0);
        } else {
            if((strcmp(argv[1], "test") == 0)) {
                bit_analyze(stoi(argv[2]), 1);
            }
        }
    } else {
        bit_analyze(0, 0);
    }
    return 0;
}
