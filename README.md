# fillit Grade: 100/100

Hive group project after get_next_line.


Executable must take only one parameter, a file which contains a list of Tetriminos
to assemble. This file has a very specific format : every Tetrimino must exactly fit in a
4 by 4 chars square and all Tetrimino are separated by an newline each.

If the number of parameters sent to executable is not 1, the program must display
its usage and exit properly. If the program doesnt know what a usage is, it will execute the command
cp without arguments in Shell. The file should contain between 1 and 26 Tetriminos.

The description of a Tetriminos must respect the following rules :
  • Precisely 4 lines of 4 characters, each followed by a new line (well... a 4x4 square).
  • A Tetrimino is a classic piece of Tetris composed of 4 blocks.
  • Each character must be either a block character(’#’ ) or an empty character (’.’).
  • Each block of a Tetrimino must touch at least one other block on any of his 4 sides
  (up, down, left and right).

Run make, an executable called fillit should compile directly.

Usage: ./fillit [file]

Look more from fillit.en.pdf
