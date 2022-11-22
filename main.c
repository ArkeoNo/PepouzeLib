#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <conio.h>

/**
 * @author N. Arthur
 * @date 22/11/2022
 * @brief Lecture de données formatée d'un fichier
 * 
 * @param file : chemin du fichier à lire 
 * @param format : format des données
 * 
 * @return 1 si un fichier à pu être lu | 0 fichier inexistant ou vide
 * @return un nombre variable de tableau contenant les données du fichier
 * @return le nombre de valeur du plus grand des tableau 
 */
int fgetvalues(char *file, char *format,...){
    /* Variables */
    int nbvals = 0;

    /* Ouverture du fichier */
    FILE* f = NULL;
    f = fopen(file, "r");

    /* Si fichier introuvable, return 0 */
    if(f == NULL){
        return 0; 
        }

    /* Boucle Principale */
    do{
        if(fscanf(f, format, tab) == 1){
            printf("Valeur : %d\n",*tab);
            tab ++;
            nbvals ++;
        }
    }while(f != feof);


    return 1;
}

int main(){
    int tab[2000];
    fgetvalues("../input/day1.txt", "%d", &tab[0]);
    getch();
}
