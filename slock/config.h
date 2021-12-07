/* user and group to drop privileges to */
static const char *user  = "atis";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#1D4D3F",   /* during input */
	[FAILED] = "#DB504A",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
