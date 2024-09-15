
/*                                     KEY POSITIONS
    00  01  02  03  04 │ 18  19  20  21  22     LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4
    05  06  07  08  09 │ 23  24  25  26  27     LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4
    10  11  12  13  14 │ 28  29  30  31  32     LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4
      ─────╮ 15  16  17 │ 33  34  35 ╭─────         ─────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───── 
*/

#pragma once

//LEFT
#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define LM0  9  // left-middle row
#define LM1  8
#define LM2  7
#define LM3  6
#define LM4  5

#define LB0 14  // left-bottom row
#define LB1 13
#define LB2 12
#define LB3 11
#define LB4 10

#define LH0 17  // left thumb keys
#define LH1 16
#define LH2 15

// RIGHT
#define RT0 18  // right-top row
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22

#define RM0 23  // right-middle row
#define RM1 24
#define RM2 25
#define RM3 26
#define RM4 27

#define RB0 28  // right-bottom row
#define RB1 29
#define RB2 30
#define RB3 31
#define RB4 32

#define RH0 33  // right thumb keys
#define RH1 34
#define RH2 35

