#include "../inc/worldtime.h"
#include "../inc/currency.h"
#include<string.h>
void worldtime()
{
    time_t rawtime;
    struct tm *info;
    time(&rawtime);
    info = gmtime(&rawtime);
    struct city *name,n;
    name=&n;
    int c;
    float d,*find;
    printf("Choice of city:\n");
    printf("1.Mumbai\n2.Dubai\n3.London\n4.Sydney\n5.New York\n6.San Francisco\n7.Singapore\n8.Tokyo\n9.Paris\n10.Hongkong\n");
    printf("11.Cape Town\n12.Rio de Janeiro\n13.Moscow\n14.Mexico City\n15.Jerusalem\n16.Hawaii\n17.Auckland\n18.Bangkok\n19.Seoul\n20.Anchorage\n");
    printf("Enter your choice of city\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        strcpy(name->city_name,"Mumbai");
        if(info->tm_min>=30){
         name->hr=(info->tm_hour+IST+1); 
         name->min=(info->tm_min+30)%60;
    }
    else{
        name->hr = info->tm_hour + IST;
        name->min = info->tm_min + 30;
    }
        break;
    case 2:
        strcpy(name->city_name,"Dubai");
        name->hr = info->tm_hour + GST;
        name->min = info->tm_min;
        break;
    case 3:
        strcpy(name->city_name,"London");
        name->hr = info->tm_hour + GMT;
        name->min = info->tm_min;
        break;
    case 4:
        strcpy(name->city_name,"Sydney");
        name->hr = info->tm_hour + AST;
        name->min = info->tm_min;
        break;
    case 5:
        strcpy(name->city_name,"New York");
        name->hr = info->tm_hour + EST;
        name->min = info->tm_min;
        break;
    case 6:
        strcpy(name->city_name,"San Francisco");
        name->hr = info->tm_hour + PTZ;
        name->min = info->tm_min;
        break;
    case 7:
        strcpy(name->city_name,"Singapore");
        name->hr = info->tm_hour + SST;
        name->min = info->tm_min;
        break;
    case 8:
    strcpy(name->city_name,"Tokyo");
        name->hr = info->tm_hour + JST;
        name->min = info->tm_min;
        break;
    case 9:
        strcpy(name->city_name,"Paris");
        name->hr = info->tm_hour + FST;
        name->min = info->tm_min;
        break;
    case 10:
        strcpy(name->city_name,"Hongkong");
        name->hr = info->tm_hour + CST;
        name->min = info->tm_min;
        break;
    case 11:
        strcpy(name->city_name,"Cape Town");
        name->hr = info->tm_hour + SAST;
        name->min = info->tm_min;
        break;
    case 12:
        strcpy(name->city_name,"Rio de Janeiro");
        name->hr = info->tm_hour + BST;
        name->min = info->tm_min;
        break;
    case 13:
        strcpy(name->city_name,"Moscow");
        name->hr = info->tm_hour + MST;
        name->min = info->tm_min;
        break;
    case 14:
        strcpy(name->city_name,"Mexico City");
        name->hr = info->tm_hour + CDT;
        name->min = info->tm_min;
        break;
    case 15:
        strcpy(name->city_name,"Jerusalem");
        name->hr = info->tm_hour + IDT;
        name->min = info->tm_min;
        break;
    case 16:
        strcpy(name->city_name,"Hawaii");
        if((info->tm_hour+HTZ)%24<0){
        name->hr=24+(info->tm_hour+HTZ);
        name->min=info->tm_min;
        }
        else if((info->tm_hour+HTZ)%24>=0){
        name->hr = info->tm_hour + HTZ;
        name->min = info->tm_min;
        }
        break;
    case 17:
        strcpy(name->city_name,"Auckland");
        name->hr = info->tm_hour + NZTZ;
        name->min = info->tm_min;
        break;
    case 18:
        strcpy(name->city_name,"Bangkok");
        name->hr = (info->tm_hour + TTZ);
        name->min = (info->tm_min);
        break;
    case 19:
        strcpy(name->city_name,"Seoul");
        name->hr = (info->tm_hour + KST);
        name->min = (info->tm_min);
        break;
    case 20:
        strcpy(name->city_name,"Alaska");
        name->hr = (info->tm_hour + ADT);
        name->min = (info->tm_min);
        break;
    default:
        printf("enter correct choice");
        break;
    }
    printf("%s %2d:%02d", name->city_name,(name->hr) % 24, name->min);
    if(name->hr>=12 && name->hr<=23){
    printf("pm\n");
    }
    else{
    printf("am\n");
    }
    printf("How much money you want to convert?\n");
    scanf("%f",&d);
    find=&d;
    currency(c,find);
}