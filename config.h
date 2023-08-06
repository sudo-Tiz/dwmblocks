// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-record", 10, 9},    /* {"", "cat /tmp/recordingicon 2>/dev/null", 0, 9}, */
    {"", "sb-tasks", 30, 26},
    {"", "sb-music", 0, 11},
    {"", "sb-pacpackages", 0, 8},
    {"", "sb-mailbox", 180, 12},
    {"", "sb-news", 0, 6},
    {"", "sb-theme", 0, 25},
    {"", "sb-bluetooth", 10, 24},
    {"", "sb-nextcloud", 0, 23},
    {"", "sb-torrent", 20, 20},
    {"", "sb-msi", 5, 18},
    {"", "sb-nettraf", 1, 16},
    {"", "sb-memory", 10, 14},
    {"", "sb-disk /", 180, 21},
    {"", "sb-disk /media/HDD/$USER", 180, 21},
    {"", "sb-forecast", 18000, 5},
    {"", "sb-clock", 60, 1},
    {"", "sb-volume", 0, 10},
    {"", "sb-battery", 30, 3},
    /* {"", "sb-internet", 5, 4}, */ // replaced by nm-applet
    /* {"",	"sb-moonphase",	18000,	17}, */
    /*{"",	"sb-doppler",	0,	13},*/
    /* {"",	"sb-kbselect",		0,	30}, */
    /*{"",	"sb-help-icon",	0,	15},*/
    /* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000, 22},*/
    /* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
    /* {"",	"sb-price link \"Chainlink\" 🔗",			300, 25}, */
    /* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
    /* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
    /* {"",	"sb-price btc Bitcoin 💰",				9000, 21},*/
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
