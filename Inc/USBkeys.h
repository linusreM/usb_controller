//handles for USB keyboard
//	00	Reserved (no event indicated)
#define	ERROR_KEY	0x01	//Keyboard ErrorRollOver
#define	POSTFAIL_KEY	0x02	//Keyboard POSTFail
#define	ERRUNDEF_KEY	0x03	//Keyboard ErrorUndefine
#define	A_KEY		0x04	//Keyboard a and A
#define	B_KEY		0x05	//Keyboard b and B
#define	C_KEY		0x06	//Keyboard c and C
#define	D_KEY		0x07	//Keyboard d and D
#define	E_KEY		0x08	//Keyboard e and E
#define	F_KEY		0x09	//Keyboard f and F
#define	G_KEY		0x0A	//Keyboard g and G
#define	H_KEY		0x0B	//Keyboard h and H
#define	I_KEY		0x0C	//Keyboard i and I
#define	J_KEY		0x0D	//Keyboard j and J
#define	K_KEY		0x0E	//Keyboard k and K
#define	L_KEY		0x0F	//Keyboard l and L
#define	M_KEY		0x10	//Keyboard m and M
#define	N_KEY		0x11	//Keyboard n and N
#define	O_KEY		0x12	//Keyboard o and O
#define	P_KEY		0x13	//Keyboard p and P
#define	Q_KEY		0x14	//Keyboard q and Q
#define	R_KEY		0x15	//Keyboard r and R
#define	S_KEY		0x16	//Keyboard s and S
#define	T_KEY		0x17	//Keyboard t and T
#define	U_KEY		0x18	//Keyboard u and U
#define	V_KEY		0x19	//Keyboard v and V
#define	W_KEY		0x1A	//Keyboard w and W
#define	X_KEY		0x1B	//Keyboard x and X
#define	Y_KEY		0x1C	//Keyboard y and Y
#define	Z_KEY		0x1D	//Keyboard z and Z
#define	ONE_KEY		0x1E	//Keyboard 1 and !
#define	TWO_KEY		0x1F	//Keyboard 2 and @
#define	THREE_KEY	0x20	//Keyboard 3 and #
#define	FOUR_KEY	0x21	//Keyboard 4 and $
#define	FIVE_KEY	0x22	//Keyboard 5 and %
#define	SIX_KEY		0x23	//Keyboard 6 and ^
#define	SEVEN_KEY	0x24	//Keyboard 7 and &
#define	EIGHT_KEY	0x25	//Keyboard 8 and *
#define	NINE_KEY	0x26	//Keyboard 9 and (
#define	ZERO_KEY	0x27	//Keyboard 0 and )
#define	ENTER_KEY	0x28	//Keyboard Return (ENTER)
#define	ESC_KEY		0x29	//Keyboard ESCAPE
#define	DEL_KEY		0x2A	//Keyboard DELETE (Backspace)
#define	TAB_KEY		0x2B	//Keyboard Tab
#define	SPACE_KEY	0x2C	//Keyboard Spacebar
#define	DASH_KEY	0x2D	//Keyboard - and (underscore)
#define	EQUAL_KEY	0x2E	//Keyboard = and +
#define	LBRACK_KEY	0x2F	//Keyboard [ and {
#define	RBRACK_KEY	0x30	//Keyboard ] and }
#define	BSLASH_KEY	0x31	//Keyboard \ and |
#define	HASH_KEY	Ox32	//Keyboard Non-US # and ~
#define	COLON_KEY	0x33	//Keyboard ; and :
#define	QUOTE_KEY	0x34	//Keyboard ' and "
#define	TILDE_KEY	0x35	//Keyboard Grave Accent and Tilde
#define	COMMA_KEY	0x36	//Keyboard, and <
#define	DOT_KEY		0x37	//Keyboard . and >
#define	FSLASH_KEY	0x38	//Keyboard / and ?
#define	CAPSLOCK_KEY	0x39	//Keyboard Caps Lock
#define	F1_KEY		0x3A	//Keyboard F1
#define	F2_KEY		0x3B	//Keyboard F2
#define	F3_KEY		0x3C	//Keyboard F3
#define	F4_KEY		0x3D	//Keyboard F4
#define	F5_KEY		0x3E	//Keyboard F5
#define	F6_KEY		0x3F	//Keyboard F6
#define	F7_KEY		0x40	//Keyboard F7
#define	F8_KEY		0x41	//Keyboard F8
#define	F9_KEY		0x42	//Keyboard F9
#define	F10_KEY		0x43	//Keyboard F10
#define	F11_KEY		0x44	//Keyboard F11
#define	F12_KEY		0x45	//Keyboard F12
#define	PRINTSCREEN_KEY	0x46	//Keyboard PrintScreen
#define	SCROLLLOCK_KEY	0x47	//Keyboard Scroll Lock
#define	PAUSE_KEY	0x48	//Keyboard Pause
#define	INSERT_KEY	0x49	//Keyboard Insert
#define	HOME_KEY	0x4A	//Keyboard Home
#define	PAGE_KEY	0x4B	//Keyboard PageUp
#define	DELETE_KEY	0x4C	//Keyboard Delete Forward
#define	END_KEY		0x4D	//Keyboard End
#define	PAGEDOWN_KEY	0x4E	//Keyboard PageDown
#define	RIGHT_KEY	0x4F	//Keyboard RightArrow
#define	LEFT_KEY	0x50	//Keyboard LeftArrow
#define	DOWN_KEY	0x51	//Keyboard DownArrow
#define	UP_KEY		0x52	//Keyboard UpArrow
#define	NUMLOCK_KEY	0x53	//Keypad Num Lock and Clear
#define	KPSLASH_KEY	0x54	//Keypad /
#define	STAR_KEY	0x55	//Keypad *
#define	KPDASH_KEY	0x56	//Keypad -
#define	PLUS_KEY	0x57	//Keypad +
#define	KPENTER_KEY	0x58	//Keypad ENTER
#define	KPONE_KEY	0x59	//Keypad 1 and End
#define	KPTWO_KEY	0x5A	//Keypad 2 and Down Arrow
#define	KPTHREE_KEY	0x5B	//Keypad 3 and PageDn
#define	KPFOUR_KEY	0x5C	//Keypad 4 and Left Arrow
#define	KPFIVE_KEY	0x5D	//Keypad 5
#define	KPSIX_KEY	0x5E	//Keypad 6 and Right Arrow
#define	KPSEVEN_KEY	0x5F	//Keypad 7 and Home
#define	KPEIGHT_KEY	0x60	//Keypad 8 and Up Arrow
#define	KPNINE_KEY	0x61	//Keypad 9 and PageUp
#define	KPZERO_KEY	0x62	//Keypad 0 and Insert
#define	KPDOT_KEY	0x63	//Keypad . and Delete
#define	NUSBSLASH_KEY	0x64	//Keyboard Non-US \ and |
#define	APP_KEY		0x65	//Keyboard Application
#define	POWER_KEY	0x66	//Keyboard Power
#define	KPEQUAL_KEY	0x67	//Keypad =
#define	F13_KEY		0x68	//Keyboard F13
#define	F14_KEY		0x69	//Keyboard F14
#define	F15_KEY		0x6A	//Keyboard F15
#define	F16_KEY		0x6B	//Keyboard F16
#define	F17_KEY		0x6C	//Keyboard F17
#define	F18_KEY		0x6D	//Keyboard F18
#define	F19_KEY		0x6E	//Keyboard F19
#define	F20_KEY		0x6F	//Keyboard F20
#define	F21_KEY		0x70	//Keyboard F21
#define	F22_KEY		0x71	//Keyboard F22
#define	F23_KEY		0x72	//Keyboard F23
#define	F24_KEY		0x73	//Keyboard F24
#define	EXECUTE_KEY	0x74	//Keyboard Execute
#define	HELP_KEY	0x75	//Keyboard Help
#define	MENU_KEY	0x76	//Keyboard Menu
#define	SELECT_KEY	0x77	//Keyboard Select
#define	STOP_KEY	0x78	//Keyboard Stop
#define	AGAIN_KEY	0x79	//Keyboard Again
#define	UNDO_KEY	0x7A	//Keyboard Undo
#define	CUT_KEY		0x7B	//Keyboard Cut
#define	COPY_KEY	0x7C	//Keyboard Copy
#define	PASTE_KEY	0x7D	//Keyboard Paste
#define	FIND_KEY	0x7E	//Keyboard Find
#define	MUTE_KEY	0X7F	//Keyboard Mute
#define	VOLUP_KEY	0x80	//Keyboard Volume Up
#define	VOLDOWN_KEY	0x81	//Keyboard Volume Down
#define	LCAPSLOCK_KEY	0x82	//Keyboard Locking Caps Lock
#define	LNUMLOCK_KEY	0x83	//Keyboard Locking Num Lock
#define	LSCROLLLOCK_KEY	0x84	//Keyboard Locking Scroll Lock
#define	KPCOMMA_KEY	0x85	//Keypad Comma
#define	KPEQUAL2_KEY	0x86	//Keypad Equal Sign
#define	KANJI1_KEY	0x87	//Keyboard Kanji1
#define	KANJI2_KEY	0x88	//Keyboard Kanji2
#define	KANJI3_KEY	0x89	//Keyboard Kanji3
#define	KANJI4_KEY	0x8A	//Keyboard Kanji4
#define	KANJI5_KEY	0x8B	//Keyboard Kanji5
#define	KANJI6_KEY	0x8C	//Keyboard Kanji6
#define	KANJI7_KEY	0x8D	//Keyboard Kanji7
#define	KANJI8_KEY	0x8E	//Keyboard Kanji8
#define	KANJI9_KEY	0x8F	//Keyboard Kanji9
#define	LANG1_KEY	0x90	//Keyboard LANG1
#define	LANG2_KEY	0x91	//Keyboard LANG2
#define	LANG3_KEY	0x92	//Keyboard LANG3
#define	LANG4_KEY	0x93	//Keyboard LANG4
#define	LANG5_KEY	0x94	//Keyboard LANG5
#define	LANG6_KEY	0x95	//Keyboard LANG6
#define	LANG7_KEY	0x96	//Keyboard LANG7
#define	LANG8_KEY	0x97	//Keyboard LANG8
#define	LANG9_KEY	0x98	//Keyboard LANG9
#define	ALTERASE_KEY	0x99	//Keyboard Alternate Erase
#define	SYSREQ_KEY	0x9A	//Keyboard SysReq/Attention
#define	CANCEL_KEY	0x9B	//Keyboard Cancel
#define	CLEAR_KEY	0x9C	//Keyboard Clear
#define	PRIOR_KEY	0x9D	//Keyboard Prior
#define	RETURN_KEY	0x9E	//Keyboard Return
#define	SEPARATOR_KEY	0x9F	//Keyboard Separator
#define	OUT_KEY		0xA0	//Keyboard Out
#define	OPER_KEY	0xA1	//Keyboard Oper
#define	CLRAGAIN_KEY	0xA2	//Keyboard Clear/Again
#define	CRSEL_KEY	0xA3	//Keyboard CrSel/Props
#define	EXSEL_KEY	0xA4	//Keyboard ExSel
//	A5-DF	Reserved
#define	LCONTROL_KEY	0xE0	//Keyboard LeftControl
#define	LSHIFT_KEY	0xE1	//Keyboard LeftShift
#define	LALT_KEY	0xE2	//Keyboard LeftAlt
#define	LGUI_KEY	0xE3	//Keyboard Left GUI
#define	RCONTROL_KEY	0xE4	//Keyboard RightControl
#define	RSHIFT_KEY	0xE5	//Keyboard RightShift
#define	RALT_KEY	0xE6	//Keyboard RightAlt
#define	RGUI_KEY	0xE7	//Keyboard Right GUI
#define LCONTROL	0x01
#define LSHIFT		0x02
#define LALT		0x04
#define LGUI		0x08
#define RCONTROL	0x10
#define	RSHIFT		0x20
#define RALT		0x40
#define	RGUI		0x80

//	E8-FFFF	Reserved


