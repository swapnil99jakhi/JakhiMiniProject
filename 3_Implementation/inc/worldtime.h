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
#ifndef __WORLDTIME_H__
#define __WORLDTIME_H__
#include <stdio.h>
#include <time.h>
#include <math.h>
/**
 * @brief Display Current Time of the city chosen
 */
void worldtime();
/**
 * @brief Standard Time Zone of different cities
 */
#define IST (+5) /**mumbai*/
#define GST (+4) /**dubai*/
#define GMT (+0) /**london*/
#define AST (+10) /**sydney*/
#define EST (-4) /** new york*/
#define PTZ (-7) /** san francisco*/
#define SST (+8) /** singapore*/
#define JST (+9) /** tokyo*/
#define FST (+2) /**paris*/
#define CST (+8) /** hongkong*/
#define SAST (+2) /** cape town*/
#define BST (-3) /** rio de janeiro*/
#define MST (+3) /** moscow*/
#define CDT (-5) /** mexico city*/
#define IDT (+3) /** jerusalem*/
#define HTZ (-10)/** hawaii*/
#define NZTZ (+12) /** auckland*/
#define TTZ (+7) /** bangkok*/
#define KST (+9) /** seoul*/
#define ADT (-8) /** alaska*/
/**
 * @struct city
 * @brief This structure displays the cityname and its current time in hour and minutes
 */
typedef struct city{
    char city_name[20];/** City name */
    int hr;/** Time in Hour */
    int min;/** Time in Minutes*/
}city;
#endif 