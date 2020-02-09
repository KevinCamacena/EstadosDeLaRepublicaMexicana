#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Estados.h"

void print_estado(struct Estado);
void print_file_estado(struct Estado);

FILE *fptr;

int main()
{
    fptr = fopen("estados.txt","w+");
    if( fptr == NULL )
    {
        printf("Error!: ");
        exit(EXIT_FAILURE);
    }
    else
    {
        inicializar_edos_mx();
        for(int i=0; i<N_EDOS; i++)
            print_file_estado(edos_Mexico[i]);
        return EXIT_SUCCESS;
    }
}

void print_estado(struct Estado _estado)
{
   char edo_txt[47];
   estado_txt_lcd(edo_txt,_estado);
   printf("%s",edo_txt);
}

void print_file_estado(struct Estado _estado)
{
   char edo_txt[47];
   estado_txt_lcd(edo_txt,_estado);
   fprintf(fptr,edo_txt);
}
