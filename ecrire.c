#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <sys/ioctl.h>
#include "ecrire.h"

void ecrire1(){
	FILE *fichier;
	fichier=fopen("historique.txt","a");
	time_t temps;
	struct tm actuel;
	time(&temps);
	actuel=*localtime(&temps);
	int secondes=actuel.tm_sec;
	int minutes=actuel.tm_min;
	int heures=actuel.tm_hour;
	int days=tm_mday;
    int months=tm_mon;
    int years=tm_year;
	fprintf(fichier, "%d/%d/%d %d:%d:%d;%s", days, months, years, hours, minutes, secondes, "pbmstatic5.pbm");
	fclose(fichier);
}

void ecrire2(){
	FILE *fichier;
	fichier=fopen("historique.txt","a");
	time_t temps;
	struct tm actuel;
	time(&temps);
	actuel=*localtime(&temps);
	int secondes=actuel.tm_sec;
	int minutes=actuel.tm_min;
	int heures=actuel.tm_hour;
	int days=tm_mday;
    int months=tm_mon;
    int years=tm_year;
	fprintf(fichier, "%d/%d/%d %d:%d:%d;%s", days, months, years, hours, minutes, secondes, "5x3");
	fclose(fichier);
}

