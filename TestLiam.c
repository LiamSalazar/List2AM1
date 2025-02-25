#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"UsaLista.h"

int main(){
    // Crear dos listas
    Lista lista1 = vacia();
    lista1 = cons(3, cons(1, cons(5, vacia())));
    
    Lista lista2 = vacia();
    lista2 = cons(4, cons(2, cons(7, vacia())));
    
    printf("\n Lista 1: \n");
    ImpLista(lista1);
    printf("\n Lista 2: \n");
    ImpLista(lista2);
    
    // Unir listas con pegaLista
    Lista listaUnida = PegaListas(lista1, lista2);
    printf("\n Lista Unida: \n");
    ImpLista(listaUnida);
    
    // Ordenar la lista unida
    Lista listaOrdenada = OrdenaLista(listaUnida);
    printf("\n Lista Ordenada: \n");
    ImpLista(listaOrdenada);
    
    // Insertar un elemento en orden
    listaOrdenada = InsOrd(6, listaOrdenada);
    printf("\n Lista con 6 insertado en orden: \n");
    ImpLista(listaOrdenada);
    
    // Invertir la lista
    Lista listaInvertida = InvierteLista(listaOrdenada);
    printf("\n Lista Invertida: \n");
    ImpLista(listaInvertida);

    // Eliminar elemento
    Lista listaElemento = eliminarElemento(4, listaInvertida);
    printf("\n Lista sin elemento 4: \n");
    ImpLista(listaElemento);

    // Caso de prueba de duplicados
    Lista listaDuplicados = cons(1, cons(2, cons(3, cons(1, cons(4, cons(2, vacia()))))));
    printf("\n Lista con duplicados: \n");
    ImpLista(listaDuplicados);
    // Eliminar duplicados
    Lista listaValoresUnicos = eliminarDuplicados(listaDuplicados);
    printf("\n Lista sin duplicados: \n");
    ImpLista(listaValoresUnicos);

    // Eliminar elemento si se repite
    Lista listaSinElementoRepetido = eliminarSiRepite(listaDuplicados);
    printf("\n Lista sin elemento repetido: \n");
    ImpLista(listaSinElementoRepetido);
    
    puts("");
    return 0;
}

