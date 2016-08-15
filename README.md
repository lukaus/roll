# roll
Simple command-line dice roller for linux. I made this to play D&amp;D so have fun lol


# INSTALLATION:
Run the commands:

$ make

$ make install

$ make clean

This will compile the program, copy it into $BINDIR (defaults to /usr/local/bin, so change in makefile if you want it elsewhere), then remove the executale from the working directory.

I am new to makefiles, so let me know if this one is set up poorly

# USAGE:

syntax:
roll <die type> <number of dice> <+|-> <integer>
<die type> is an integer n, and will result in a number 1-n 
<number of dice> requires a <die type>, and is an integer n. It will result in the preceding <die type> being rolled n times; the results will displayed individually and summed.
<+|-> can be either + or -, and will add the succeeding <integer> to the sum displayed.

example input:
$ roll 3 4
> 3 + 2 + 4 =
> 9

This rolled 3 d4 and displayed the sum

$ roll 20 + 5
> 14 + 5 =
> 19

This rolled a d20 and added 5, displaying the sum

These different inputs can be combined, but only one input of each type will be accepted. For example, "roll 20 + 9 - 3" will not work