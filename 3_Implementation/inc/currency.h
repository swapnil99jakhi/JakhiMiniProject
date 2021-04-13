/** 
 * @file Worldtime.h
 * @author Swapnil_Jakhi
 * @brief Header file
 * @version 0.1
 * @date 2021-04-13
 *
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __CURRENCY_H__
#define __CURRENCY_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief Take user's city choice and total rupees to convert as input and display output
 * @param i(city choice)
 * @param k(total rupees)
 */
void currency(int i, float *k);
/**
 * @struct note
 * @brief This structure displays the output of the converted currency
 */
typedef struct note{
    char curr[50];/** Stores other cities currency as a string */
}note;
#endif