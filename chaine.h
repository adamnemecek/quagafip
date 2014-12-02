#ifndef _CHAINE_H_
#define _CHAINE_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//retourne la position du caract�re chrSep dans la chaine strSource
//ou -1 si celui-ci n'est pas pr�sent dans la chaine
int strchrind(char * strSource,char chrSep);

// permet d'ins�rer la chaine point�e par "strBetween" juste avant le premier s�parateur "chrSep"
// dans la chaine strSource. Le tout est point� par "pstrDestination" une autre chaine
// qui aura du �tre allou�e avant d'�tre appel�e dans cette fonction.
void strcpybtw(char ** pstrDestination, char * strSource,char * strBetween,char chrSep);

#endif

