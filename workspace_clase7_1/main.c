#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
/** objetivo principal ordenamiento de vectores paralelos sin importar si los datos son harcodeados
 1) hacer el alta
 2) hacer la baja(poner todo en 0)
 3) modificar todos menos el legajo
*/
void mostrarAlumno(char [][50], int [], int [], float [], int [], int);
void cargarAlumno(char [][50], int [], int [], float [], int [], int);
int buscarLugar(int [],int);
float cargarPromedio(int [],int []);

int main()
{
    char nombre[TAMANIO][50]={"juan","maria","alfredo","jose","lily"};///array de palabras
    int notas1[TAMANIO]={4,10,2,7,2};
    int notas2[TAMANIO]={4,8,7,8,3};
    float promedios[TAMANIO]={4,9.5,4.5,8.5,2.5};
    int legajo[TAMANIO]{111,222,333,444,555};

    cargarAlumno(nombre,notas1,notas2,promedios,legajo,TAMANIO);
    mostrarAlumno(nombre,notas1,notas2,promedios,legajo,TAMANIO);
    cargarAlumno(nombre,notas1,notas2,promedios,legajo,TAMANIO);
    mostrarAlumno(nombre,notas1,notas2,promedios,legajo,TAMANIO);
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
    legajos[indice]={6,6,6};
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
