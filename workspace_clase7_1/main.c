#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5

void mostrarAlumno(char [][50], int [], int [], float [], int [], int);
void cargarAlumno(char [][50], int [], int [], float [], int [], int);
int buscarLugar(int [],int);

int main()
{
    char nombre[TAMANIO][50]={"juan","maria","alfredo","jose","lily"};///array de palabras
    int notas1[TAMANIO]={};
    int notas2[TAMANIO];
    float promedios[TAMANIO];
    int legajo[TAMANIO];

    cargarAlumno(nombre,notas1,notas2,promedios,legajo,TAMANIO);

    mostrarAlumno(nombre,notas1,notas2,promedios,legajo,TAMANIO);

    return 0;
}

void mostrarAlumno(char nombres[][50], int primeraNota[], int segundaNota[], float promedio[], int legajo[], int largo)
{
    int i;

    for(i=0;i<largo;i++)
    {
        printf("\nl: %d,n: %s,n1: %d,n2: %d,p: %.2f",legajo[i],nombres[i],primeraNota[i],segundaNota[i],promedio[i]);

    }
}

void cargarAlumno(char nombres[][50], int primeraNota[], int segundaNota[], float promedio[], int legajos[], int largo)
{
    int indice=buscarLugar(legajos,largo);
    legajos[indice]=666;
}

int buscarLugar(int legajo[],int largo)
{
    int i;
    int indiceRetornado=-1;

    for(i=0;i<largo;i++)
    {
        if(legajo[i]==0)///0 es un lugar vacio
        {
            indiceRetornado=i;
        }
        break;
    }
    return indiceRetornado;
}
