/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 14
 * File:			lottery.h
 * Author:			Raci Dionis
 * Due Date:		24.5.2018
 * ----------------------------------------------------------
 * Description:
 * Header for lottery tips analysis.
 * ----------------------------------------------------------
 */
#ifndef ___LOTTERY_H
#define ___LOTTERY_H

#define UUID_LEN   40
#define TIP_SIZE   17
#define MAX_LINE_LEN   (UUID_LEN + TIP_SIZE + 2)
bool init_lottery(char* filename, char seperator);
bool get_tip(int tip, int* array);
bool set_drawing(int* array);
int get_tip_result(int tip);
int get_right_tips_count(int tip);

#endif
