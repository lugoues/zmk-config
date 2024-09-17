#pragma once
/*                                     KEY POSITIONS
    00  01  02  03  04 │ 18  19  20  21  22     LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4
    05  06  07  08  09 │ 23  24  25  26  27     LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4
    10  11  12  13  14 │ 28  29  30  31  32     LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4
      ─────╮ 15  16  17 │ 33  34  35 ╭─────         ─────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───── 
*/


#define QUICK_TAP_MS 150
#define TD_TAPPING_TERM 300



#define HYPER(key) LS(LC(LG(LA(key))))
#define MEH(key) LC(LS(LA(key)))

// Applications
#define AUTHY &kp MEH(A)
#define SPOTIFY &kp MEH(B)
#define FIREFOX &kp MEH(C)
#define FORKLIFT &kp MEH(D)
#define VSCODE &kp MEH(E)
#define NOTION &kp MEH(F)
#define CHROME &kp MEH(G)
#define DISCORD &kp MEH(H)
#define MIMESTREAM &kp MEH(I)
#define ITERM &kp MEH(J)
#define RAYCAST &kp MEH(K)
#define TODOIST &kp MEH(L)
#define CHATGPT &kp MEH(M)
#define ITSYCAL &kp MEH(N)
#define ONEPASSWORD &kp MEH(O)
#define MEDIAMATE &kp MEH(P)

#define Y_PRV_DISPLAY  &rb_y_a
#define Y_NXT_DISPLAY  &rb_y_b
#define Y_PRV_SPACE    &rb_y_c
#define Y_NXT_SPACE    &rb_y_d
// #define Y_xxx &rb_y_e
// #define Y_xxx &rb_y_f
// #define Y_xxx &rb_y_g
// #define Y_xxx &rb_y_h
// #define Y_xxx &rb_y_i
// #define Y_xxx &rb_y_j
// #define Y_xxx &rb_y_k
// #define Y_xxx &rb_y_l
// #define Y_xxx &rb_y_m
// #define Y_xxx &rb_y_n
// #define Y_xxx &rb_y_o
// #define Y_xxx &rb_y_p
// #define Y_xxx &rb_y_q
// #define Y_xxx &rb_y_r
#define Y_STACKS &rb_y_z
// #define Y_xxx &rb_y_t
// #define Y_xxx &rb_y_u
#define Y_PRV_STACK &rb_y_b
#define Y_WINDOWS   &rb_y_a
#define Y_TOG_STACK &rb_y_xn
#define Y_TOG_FLOAT &rb_y_v
#define Y_NXT_STACK &rb_y_g


#define LEFT_WORD  LA(LEFT)
#define LEFT_LINE  LG(LEFT)
// #define LEFT_LINE  HOME //LG(LEFT)
#define RIGHT_WORD LA(RIGHT)
// #define RIGHT_LINE END //LG(RIGHT)
#define RIGHT_LINE LG(RIGHT)
#define PAGE_TOP LG(UP)
#define PAGE_BTM LG(DOWN)

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2                                      // thumb keys
