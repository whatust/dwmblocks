//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""   , "music"       , 0   , 11} ,
	{""   , "internet"    , 10  , 4}  ,
	{""   , "cpu"         , 10  , 18} ,
	{""   , "memory"      , 10  , 14} ,
	{""   , "disk"        , 20  , 7}  ,
	{""   , "volume"      , 0   , 10} ,
	{""   , "packages"    , 300 , 8}  ,
	{""   , "battery"     , 10  , 3}  , 
	/* {""   , "newsboat"     ,  0  , 6}  , */
	{""   , "clock"       , 60  , 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
