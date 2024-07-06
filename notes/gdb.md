basic gdb usage

first, compile C file with `gcc -o main main.c -g -Wall -Werror` (e.g.)

`file $filename` load $filename in gdb
`run` to run the whole program
`<C-x> + 1` to display the source code
`start` to start program with a breakpoint on the `main` function
`br $foo` to add a breakpoint on function foo
`next` or `n` to go to next line
`step` to step into a function
`finish` to step out of a function
`print $x` to print variable $x
`set $x = $val` to set value of $x to $val (can be dangerous)
`delete $i` delete breakpoint at line $i

misc:
`<C-l>` to reload the display
`quit` or `q` to quit

