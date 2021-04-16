#include "../inc/worldtime.h"
#include "../inc/currency.h"
#include<string.h>
void worldtime()
{
    time_t rawtime;
    struct tm *info;
    time(&rawtime);
    info = gmtime(&rawtime);
    struct city n= {"",0,0};
    struct city *name=&n;
    int c=0;
    void call(){
    printf("%s %2d:%02d", name->city_name,(name->hr) % 24, name->min);
    if(name->hr>=12 && name->hr<=23){
    printf("pm\n");
    }
    else{
    printf("am\n");
    }
     float d,*find;
    printf("How much money you want to convert?\n");
    scanf("%f",&d);
    find=&d;
    currency(c,find);
    }
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
        call();
        break;
    case 2:
        strcpy(name->city_name,"Dubai");
        name->hr = info->tm_hour + GST;
        name->min = info->tm_min;
        call();
        break;
    case 3:
        strcpy(name->city_name,"London");
        name->hr = info->tm_hour + GMT;
        name->min = info->tm_min;
        call();
        break;
    case 4:
        strcpy(name->city_name,"Sydney");
        name->hr = info->tm_hour + AST;
        name->min = info->tm_min;
        call();
        break;
    case 5:
        strcpy(name->city_name,"New York");
        name->hr = info->tm_hour + EST;
        name->min = info->tm_min;
        call();
        break;
    case 6:
        strcpy(name->city_name,"San Francisco");
        name->hr = info->tm_hour + PTZ;
        name->min = info->tm_min;
        call();
        break;
    case 7:
        strcpy(name->city_name,"Singapore");
        name->hr = info->tm_hour + SST;
        name->min = info->tm_min;
        call();
        break;
    case 8:
    strcpy(name->city_name,"Tokyo");
        name->hr = info->tm_hour + JST;
        name->min = info->tm_min;
        call();
        break;
    case 9:
        strcpy(name->city_name,"Paris");
        name->hr = info->tm_hour + FST;
        name->min = info->tm_min;
        call();
        break;
    case 10:
        strcpy(name->city_name,"Hongkong");
        name->hr = info->tm_hour + CST;
        name->min = info->tm_min;
        call();
        break;
    case 11:
        strcpy(name->city_name,"Cape Town");
        name->hr = info->tm_hour + SAST;
        name->min = info->tm_min;
        call();
        break;
    case 12:
        strcpy(name->city_name,"Rio de Janeiro");
        name->hr = info->tm_hour + BST;
        name->min = info->tm_min;
        call();
        break;
    case 13:
        strcpy(name->city_name,"Moscow");
        name->hr = info->tm_hour + MST;
        name->min = info->tm_min;
        call();
        break;
    case 14:
        strcpy(name->city_name,"Mexico City");
        name->hr = info->tm_hour + CDT;
        name->min = info->tm_min;
        call();
        break;
    case 15:
        strcpy(name->city_name,"Jerusalem");
        name->hr = info->tm_hour + IDT;
        name->min = info->tm_min;
        call();
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
        call();
        break;
    case 17:
        strcpy(name->city_name,"Auckland");
        name->hr = info->tm_hour + NZTZ;
        name->min = info->tm_min;
        call();
        break;
    case 18:
        strcpy(name->city_name,"Bangkok");
        name->hr = (info->tm_hour + TTZ);
        name->min = (info->tm_min);
        call();
        break;
    case 19:
        strcpy(name->city_name,"Seoul");
        name->hr = (info->tm_hour + KST);
        name->min = (info->tm_min);
        call();
        break;
    case 20:
        strcpy(name->city_name,"Alaska");
        if((info->tm_hour+ADT)%24<0){
        name->hr=24+(info->tm_hour+ADT);
        name->min=info->tm_min;
        }
        else if((info->tm_hour+ADT)%24>=0){
        name->hr = info->tm_hour+ADT;
        name->min = info->tm_min;
        }
        call();
        break;
        default:
        printf("enter correct choice");
        break;
    }
}
