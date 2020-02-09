#include "Estados.h"

const char b_nombre_estados[N_EDOS][MAX_EDO_NOMBRE] = {
"Ciudad de México","Aguascalientes","Baja California",
"Baja California Sur","Campeche","Chiapas",
"Chihuachua","Coahuila de Zaragoza","Colima",
"Durango","Guanajuato","Guerrero",
"Hidalgo","Jalisco","México",
"Michoacán de Ocampo","Morelos","Nayarit",
"Nuevo León","Oaxaca","Puebla",
"Querétaro Arteaga","Quintana Roo","San Luis Potosí",
"Sinaloa","Sonora","Tabasco",
"Tamaulipas","Tlaxcala","Veracruz",
"Yucatán","Zacatecas"
};

const char b_nombre_capitales[N_EDOS][MAX_CAP_NOMBRE] = {
"Ciudad de México","Aguascalientes","Mexicali",
"La Paz", "Campeche", "Tuxtla Guitiérrez",
"Chihuahua", "Saltillo", "Colima",
"Victoria de Durango","Guanajuato",
"Chilpancingo de los Bravo","Pachuca de Soto",
"Guadalajara","Toluca de Lerdo","Morelia",
"Cuernavaca","Tepic","Monterrey",
"Oaxaca de Juárez","Puebla de Zaragoza","Santiago de Querétaro",
"Ciudad de Chetumal","San Luis Potosí","Culiacán Rosales",
"Hermosillo","Villahermosa","Ciudad Victoria",
"Tlaxcala de Xicohténcatl","Xalapa de Enriquez",
"Mérida","Zacatecas"
};

void nuevo_estado(struct Estado *_estado, char *nombre, char *capital)
{
    strcpy(_estado->nombre,nombre);
    strcpy(_estado->capital,capital);
}

void estado_txt_lcd(char *estado_txt,struct Estado _estado)
{
    strcpy(estado_txt,"Estado: ");
    strcat(estado_txt,_estado.nombre);
    strcat(estado_txt,"\n");
    strcat(estado_txt,"Capital: ");
    strcat(estado_txt,_estado.capital);
    strcat(estado_txt,"\n");
}

void inicializar_edos_mx()
{
    for(int j = 0; j < N_EDOS; j++)
        nuevo_estado(&edos_Mexico[j],(char*)b_nombre_estados[j],(char*)b_nombre_capitales[j]);
}
