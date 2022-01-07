stock char szConsoleColoursTags[][] =
{
	// Styles

	"{BRIGHT}",
	"{DIM}",
	"{UNDERSCORE}",
	"{BLINK}",
	"{REVERSE}",
	"{HIDDEN}",

	// Styles Lowercase

	"{bright}",
	"{dim}",
	"{underscore}",
	"{blink}",
	"{reverse}",
	"{hidden}",

	// Colors

	"{DEFAULT}",
	"{BLACK}",
	"{RED}",
	"{GREEN}",
	"{YELLOW}",
	"{BLUE}",
	"{PURPLE}",
	"{CYAN}",
	"{GREY}",
	"{DARKGREY}",
	"{PEACH}",
	"{LIME}",
	"{ORANGE}",
	"{ROYALBLUE}",
	"{MAGENTA}",
	"{TEAL}",
	"{WHITE}",

	"{BLACK_BOLD}",
	"{RED_BOLD}",
	"{GREEN_BOLD}",
	"{YELLOW_BOLD}",
	"{BLUE_BOLD}",
	"{PURPLE_BOLD}",
	"{CYAN_BOLD}",
	"{GREY_BOLD}",
	"{DARKGREY_BOLD}",
	"{PEACH_BOLD}",
	"{LIME_BOLD}",
	"{ORANGE_BOLD}",
	"{ROYALBLUE_BOLD}",
	"{MAGENTA_BOLD}",
	"{TEAL_BOLD}",
	"{WHITE_BOLD}",

	// Colors Lowercase

	"{default}",
	"{black}",
	"{red}",
	"{green}",
	"{yellow}",
	"{blue}",
	"{purple}",
	"{cyan}",
	"{grey}",
	"{darkgrey}",
	"{peach}",
	"{lime}",
	"{orange}",
	"{royalblue}",
	"{magenta}",
	"{teal}",
	"{white}",

	"{black_bold}",
	"{red_bold}",
	"{green_bold}",
	"{yellow_bold}",
	"{blue_bold}",
	"{purple_bold}",
	"{cyan_bold}",
	"{grey_bold}",
	"{darkgrey_bold}",
	"{peach_bold}",
	"{lime_bold}",
	"{orange_bold}",
	"{royalblue_bold}",
	"{magenta_bold}",
	"{teal_bold}",
	"{white_bold}",
};

stock char szConsoleColoursCodes[][] =
{
	// Styles

	"\x1b[1m",
	"\x1b[2m",
	"\x1b[4m",
	"\x1b[5m",
	"\x1b[7m",
	"\x1b[8m",

	// Styles Lowercase

	"\x1b[1m",
	"\x1b[2m",
	"\x1b[4m",
	"\x1b[5m",
	"\x1b[7m",
	"\x1b[8m",

	// Colors

	"\x1b[0m",
	"\x1b[30m",
	"\x1b[31m",
	"\x1b[32m",
	"\x1b[33m",
	"\x1b[34m",
	"\x1b[35m",
	"\x1b[36m",
	"\x1b[37m",
	"\x1b[90m",
	"\x1b[91m",
	"\x1b[92m",
	"\x1b[93m",
	"\x1b[94m",
	"\x1b[95m",
	"\x1b[96m",
	"\x1b[97m",

	"\x1b[1;30m",
	"\x1b[1;31m",
	"\x1b[1;32m",
	"\x1b[1;33m",
	"\x1b[1;34m",
	"\x1b[1;35m",
	"\x1b[1;36m",
	"\x1b[1;37m",
	"\x1b[1;90m",
	"\x1b[1;91m",
	"\x1b[1;92m",
	"\x1b[1;93m",
	"\x1b[1;94m",
	"\x1b[1;95m",
	"\x1b[1;96m",
	"\x1b[1;97m",

	// Colors Lowercase

	"\x1b[0m",
	"\x1b[30m",
	"\x1b[31m",
	"\x1b[32m",
	"\x1b[33m",
	"\x1b[34m",
	"\x1b[35m",
	"\x1b[36m",
	"\x1b[37m",
	"\x1b[90m",
	"\x1b[91m",
	"\x1b[92m",
	"\x1b[93m",
	"\x1b[94m",
	"\x1b[95m",
	"\x1b[96m",
	"\x1b[97m",

	"\x1b[1;30m",
	"\x1b[1;31m",
	"\x1b[1;32m",
	"\x1b[1;33m",
	"\x1b[1;34m",
	"\x1b[1;35m",
	"\x1b[1;36m",
	"\x1b[1;37m",
	"\x1b[1;90m",
	"\x1b[1;91m",
	"\x1b[1;92m",
	"\x1b[1;93m",
	"\x1b[1;94m",
	"\x1b[1;95m",
	"\x1b[1;96m",
	"\x1b[1;97m",
};

stock void CPrintToServer(char[] szMessage, any ...)
{
	SetGlobalTransTarget(LANG_SERVER);

	char szOutput[PLATFORM_MAX_PATH];
	VFormat(szOutput, sizeof(szOutput), szMessage, 2);

	for (int i = 0; i < sizeof(szConsoleColoursTags); i++)
	{
		ReplaceString(szOutput, 250, szConsoleColoursTags[i], szConsoleColoursCodes[i]);
	}

	PrintToServer(szOutput);
}
