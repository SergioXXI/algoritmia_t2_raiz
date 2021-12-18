#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
ALGORITMO
0 - Recibimos el numero del que tenemos que calcular la raiz cuadrada por parametro
1 - Dividimos el numero en un vector de N/2 si es par y de N/2 + 1 si es impar y pasamos el numero al vector en parejas de dos
2 - Buscamos "la raiz" mas proxima para el primer elemento del vector, un numero que multiplicado por el mismo nos de el numero que buscamos sin pasarnos.  
3 - Hacemos el cuadrado del numero del paso 2 y lo restamos al grupo 0 de dos digitos dandonos el resto
4 - Hacemos el doble del numero obtenido en el paso 2 y lo guardamos en la variable doble_solucion

Vamos a hacer lo siguiente hasta que el array de pares este vacio, es decir, estemos en la ultima pareja (Puntos 5, 6, 7 y 8)
    5 - concatenamos al resto los dos siguientes elementos del array de pares
    6 - Buscamos un numero que cumpla: doble_solucion_ x _ menor o igual que el resto que tenemos ahora (doce_solucion_ es la variable doble_solucion concatenada con un el mismo numero por la que se va a multiplicar)
    Por ejemplo si la solucino que llevamos es 14 y tiene que parecerse a 730 entonces haremos 145x5 que es 725, dandonos el resto que es 5
    7 - Guardamos el numero que hemos obtenido en el paso 6 como solucion, concatenandolo con lo que ya tenemos en la variable solucion
    8 - Restamos el resultado de doble_solucion_ x _ al resto que tenemos ahora
    9 - actualizamos el valor de doble solucion con el resultado actualizado de solucion.

10 - Una vez acabado el bucle, imprimimos lo que tengamos como solucion y resto.

*/

// Divide un numero en pareja de dos digitos y los guarda en un array
int dividir_parejas(int numero, ){
    int numero_parejas;

    return numero_parejas;
}

int busca_cercano(int numero){
    int i;
    for(i=0; i<numero; i++){
        if((i*i) >= numero){
            return i-1;
        }
    }
}

int calcula_cuadrado(int n){
    return n*n;
}

int busca_n(int doble_solucion, int resto){
    int i, concatenacion;
    for(i=1; i=<resto; i++){
        concatenacion = strcat(doble_solucion, i);
        if((concatenacion *i) > resto){
            return i-1;
        } )
    }

}


int calcula_raiz(int numero, int *numero_array, *resto, *solucion){

    int i=0, raiz_cercana, numero_parejas, continuar = 1, cuadrado, doble_solucion, n;

    //Dividimos al numero en parejas de dos empezando por la izquierda, lo guardamos en un array
    numero_parejas = dividir_parejas(numero, numero_array, resto, solucion);    //1

    //Vamos a empezar a calcular, buscamos el numero que multiplicado por si mismo nos de el numero mas parecido al primero del array y lo guardamos en la solucion
    resto = numero_array[0]
    solucion = busca_cercano(resto);          //2

    


        //Hacemos el cuadrado de la solucion para restarselo al numero que hemos sacado del array
        cuadrado = calcula_cuadrado(solucion);          //3
        resto = resto - cuadrado;             //4


    while(continuar){

        // Con el doble_solucion de la solucino nos vamos a la parte auxiliar 
        doble_solucion = solucion *2;                            //4
        // Concatenamos la siguiente pareja de numeros
        resto = strcat(resto, numero_array[i+1]);     //5
        //Buscamos un numero que sea de la forma solucion*2 _ x_ menor que el resto
        n = busca_n(doble_solucion, resto);                          //6
        // Concatenamos el numero encontrado con la solucino
        solucion = strcat(solucion, n);                          //7
        // Le restamos al resto doble_solucion concatenado con n x n
        resto = resto - (strcat(doble_solucion, n)*n);                    


        

        




        //Incrementamos la iteracion
        i++;
        // Condicion de parada
        if(i == numero_parejas-1){
            continuar = 0;
        }
    }
    



}


void mostrar_raiz(int *resto, int *solucion){
    printf("solucion: %d", resto);
    printf("RESTO: %d", solucion);
}


int main(int argc, char *argv[]){

    int numero, *numero_array, *resto, *solucion;


    calcula_raiz(numero, numero_array, resto, solucion);

    mostrar_solucion(resto, solucion);
}