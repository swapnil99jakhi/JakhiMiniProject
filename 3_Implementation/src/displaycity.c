#include "../inc/worldtime.h"
#include "../inc/currency.h"
#include <stdlib.h>
#include <string.h>
void display(){
    int i=0;
    char *name;
    char*ptr[]={"1.Mumbai", "2.Dubai","3.London","4.Sydney","5.New York","6.San Francisco","7.Singapore","8.Tokyo","9.Paris","10.Hongkong",
    "11.Cape Town","12.Rio de Janeiro","13.Moscow","14.Mexico City","15.Jerusalem","16.Hawaii","17.Auckland","18.Bangkok","19.Seoul","20.Anchorage"};
    name=(char*)malloc(sizeof(ptr)*sizeof(char));
    for(i = 0; i < 20; i++)
    {
    strcpy(name,ptr[i]);
    printf("%s\n", name);
    }
    free(name);
}