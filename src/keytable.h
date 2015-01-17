/*Arculator 0.8 by Tom Walker
  Keyboard Tables*/
  
int keytable[128][2]=
{
/*0*/   {3,12}, {5,2},  {5,0},  {3,14}, {2,9},  {3,15}, {4,0},  {4,1},  /*A B C D E F G H*/
/*8*/   {2,14}, {4,2},  {4,3},  {4,4},  {5,4},  {5,3},  {2,15}, {3,0},  /*I J K L M N O P*/
/*16*/  {2,7},  {2,10}, {3,13}, {2,11}, {2,13}, {5,1},  {2,8},  {4,15}, /*Q R S T U V W X*/
/*24*/  {2,12}, {4,14}, {1,10}, {1,1},  {1,2},  {1,3},  {1,4},  {1,5},  /*Y Z 0 1 2 3 4 5*/
/*32*/  {1,6},  {1,7},  {1,8},  {1,9},  {-1,-1},{-1,-1},{-1,-1},{-1,-1},/*6 7 8 9 0 1 2 3*/
/*40*/  {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,1},  {0,2},  /*4 5 6 7 8 9 F1 F2*/
/*48*/  {0,3},  {0,4},  {0,5},  {0,6},  {0,7},  {0,8},  {0,9},  {0,10}, /*F3 F4 F5 F6 F7 F8 F9 F10*/
/*56*/  {0,11}, {0,12}, {0,0},  {-1,-1},{1,11}, {1,12}, {1,14}, {2,6},  /*F11 F12 ESC ~ - = bk TAB*/
/*64*/  {-1,-1},{-1,-1},{4,7},  {4,5},  {4,6},  {-1,-1},{-1,-1},{5,5},  /*[ ] EN ; ' \ \ ,*/
/*72*/  {5,6},  {5,7},  {5,15}, {5,15}, {-1,-1},{-1,-1},{-1,-1},{-1,-1},/*. / SP IN DEL HM END PGUP*/
/*80*/  {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},/*PGDN LF RT UP DN /P * -P*/
/*88*/  {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},/*+P DLP ENP PRSR PAUSE YEN YEN KANA*/
/*96*/  {-1,-1},{-1,-1},{4,12}, {5,8},  {6,1},  {6, 1}, {-1,-1},{5,8},/*HENKAN MUHENKAN LSHIFT RSHIFT LCTRL RCTRL ALT ALTGR*/
/*104*/ {5,8},  {-1,-1},{4,12}, {5,8},  {6,1},  {6, 1}, {-1,-1},{-1,-1},
/*112*/ {-1,-1},{-1,-1},{4,12}, {5,8},  {6,1},  {5,13}, {-1,-1},{-1,-1},
/*120*/ {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},
};




int keys[][3]=
{
        {KEY_A,3,12},{KEY_B,5,2}, {KEY_C,5,0}, {KEY_D,3,14},
        {KEY_E,2,9}, {KEY_F,3,15},{KEY_G,4,0}, {KEY_H,4,1},
        {KEY_I,2,14},{KEY_J,4,2}, {KEY_K,4,3}, {KEY_L,4,4},
        {KEY_M,5,4}, {KEY_N,5,3}, {KEY_O,2,15},{KEY_P,3,0},
        {KEY_Q,2,7}, {KEY_R,2,10},{KEY_S,3,13},{KEY_T,2,11},
        {KEY_U,2,13},{KEY_V,5,1}, {KEY_W,2,8}, {KEY_X,4,15},
        {KEY_Y,2,12},{KEY_Z,4,14},{KEY_0,1,10},{KEY_1,1,1},
        {KEY_2,1,2}, {KEY_3,1,3}, {KEY_4,1,4}, {KEY_5,1,5},
        {KEY_6,1,6},    {KEY_7,1,7},    {KEY_8,1,8},    {KEY_9,1,9},
        {KEY_0_PAD,6,5},{KEY_1_PAD,5,10},{KEY_2_PAD,5,11},{KEY_3_PAD,5,12},
        {KEY_4_PAD,4,8},{KEY_5_PAD,4,9},{KEY_6_PAD,4,10},{KEY_7_PAD,3,7},
        {KEY_8_PAD,3,8},{KEY_9_PAD,3,9},{KEY_F1,0,1},   {KEY_F2,0,2},
        {KEY_F3,0,3},{KEY_F4,0,4},{KEY_F5,0,5},{KEY_F6,0,6},
        {KEY_F7,0,7},{KEY_F8,0,8},{KEY_F9,0,9},{KEY_F10,0,10},
        {KEY_F11,0,11}, {KEY_F12,0,12}, {KEY_ESC,0,0}, {KEY_TILDE,1,0},
        {KEY_MINUS,1,11}, {KEY_EQUALS,1,12}, {KEY_BACKSPACE,1,14}, {KEY_TAB,2,6},
        {KEY_OPENBRACE,3,1}, {KEY_CLOSEBRACE,3,2}, {KEY_ENTER,4,7}, {KEY_SEMICOLON,4,5},
        {KEY_COLON,4,5},
        {KEY_QUOTE,4,6}, {KEY_SLASH,5,7}, {KEY_BACKSLASH,3,3}, {KEY_COMMA,5,5},
        {KEY_STOP,5,6}, {KEY_SLASH,5,7}, {KEY_SPACE,5,15}, {KEY_INSERT,1,15},
        {KEY_DEL,3,4}, {KEY_HOME,2,0}, {KEY_END,3,5}, {KEY_PGUP,2,1},
        {KEY_PGDN,3,6}, {KEY_LEFT,6,2}, {KEY_RIGHT,6,4}, {KEY_UP,5,9},
        {KEY_DOWN,6,3}, {KEY_SLASH_PAD,2,3}, {KEY_ASTERISK,2,4}, {KEY_MINUS_PAD,2,5},
        {KEY_PLUS_PAD,4,11},{KEY_LSHIFT,4,12},  {KEY_RSHIFT,5,8}, {KEY_LCONTROL,3,11},
        {KEY_RCONTROL,6,1}, {KEY_CAPSLOCK,5,13},{KEY_SCRLOCK,0,14},{KEY_NUMLOCK,2,2},
        {KEY_ALT,5,14},{KEY_ALTGR,6,0},{KEY_BACKSLASH2,3,3},{KEY_DEL_PAD,6,6},{KEY_ENTER_PAD,6,7},
        {KEY_PAUSE,0,15},{-1,-1,-1}
};

int oldtonew[128]=
{
        58,27,28,29,30, 31,32,33, 34,35,   /*ESC 1  2  3  4  5  6   7   8    9*/
        26,60,61,62,63, 16,22, 4, 17,19,   /*0   -  =  BK TB Q  W   E   R    T*/
        24,20, 8,14,15, 64,65,66,100,      /*Y   U  I  O  P  [  ]   EN  CTRL */
         0,18, 3, 5, 6,  7,9, 10, 11,67,   /*A   S  D  F  G  H  J   K   L    ;*/
        68,59,98,69,25, 23,2, 21,  1,13,   /*'   ~  L^ \  Z  X  C   V   B    N*/
        12,71,72,73,99,86,102,74, 46,47,   /*M   ,  .  /  R^ *  ALT SP CP  F1   F2*/
        48,49,50,51,52, 53,54,55, 96,96,   /*F3  F4 F5 F6 F7 F8 F9  F10 NUM  SCR*/
};
