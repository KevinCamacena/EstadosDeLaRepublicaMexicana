#ifndef _ESTADOS_H_
#define _ESTADOS_H_ 1

#include <string.h>

#define MAX_EDO_NOMBRE 21
#define MAX_CAP_NOMBRE 26

typedef struct Estado
{
    char nombre[MAX_EDO_NOMBRE];
    char capital[MAX_CAP_NOMBRE];
} Estado;

#define N_EDOS 32

struct Estado edos_Mexico[N_EDOS];

extern const char b_nombre_estados[N_EDOS][MAX_EDO_NOMBRE];
extern const char b_nombre_capitales[N_EDOS][MAX_CAP_NOMBRE];

void nuevo_estado(struct Estado *_estado, char *nombre, char *capital);
void estado_txt_lcd(char *estado_txt,struct Estado _estado);
void inicializar_edos_mx();
#endif
