#include"../inc/currency.h"
struct note money;
 float currency(int i,float *k){
    switch (i){
        case 1:
        strcpy(money.curr,"Indian Rupee");
        printf("%s",money.curr);
        break;
        case 2:
        strcpy(money.curr,"UAE Dirham");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/20.42);
        return *k/20.42;
        break;
        case 3:
        strcpy(money.curr,"British Pound");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/103.0);
        return *k/103;
        break;
        case 4:
        strcpy(money.curr,"Australian Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/57.2);
        return *k/57.2;
        break;
        case 5:
        strcpy(money.curr,"American Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/75.0);
        return *k/75.0;
        break;
        case 6:
        strcpy(money.curr,"American Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/75.0);
        return *k/75.0;
        break;
        case 7:
        strcpy(money.curr,"Singapore Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/55.5);
        return*k/55.5;
        break;
        case 8:
        strcpy(money.curr,"Japanese Yen");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/0.69);
        return*k/0.69;
        break;
        case 9:
        strcpy(money.curr,"Euro");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/89.3);
        return*k/89.3;
        break;
        case 10:
        strcpy(money.curr,"Hongkong Dollars");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/9.6);
        return*k/9.6;
        break;
        case 11:
        strcpy(money.curr,"South african Rand");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/5.15);
        return*k/5.15;
        break;
        case 12:
        strcpy(money.curr,"Brazilian Real");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/13.1);
        return*k/13.1;
        break;
        case 13:
        strcpy(money.curr,"Russian Ruble");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/0.97);
        return*k/0.97;
        break;
        case 14:
        strcpy(money.curr,"Mexican Peso");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/3.72);
        return*k/3.72;
        break;
        case 15:
        strcpy(money.curr,"Israeli Shekel");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/22.5);
        return*k/22.5;
        break;
        case 16:
        strcpy(money.curr,"American Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/75);
        return*k/75;
        break;
        case 17:
        strcpy(money.curr,"New Zealand Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/52.5);
        return*k/52.5;
        break;
        case 18:
        strcpy(money.curr,"Thailand Baht");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/2.38);
        return*k/2.38;
        break;
        case 19:
        strcpy(money.curr,"Korean Won");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/0.067);
        return*k/0.067;
        break;
        case 20:
        strcpy(money.curr,"American Dollar");
        printf("%.2f Rupees is equal to %s %.2f\n",*k,money.curr,*(k)/75);
        return*k/75;
        break;
    }
}
