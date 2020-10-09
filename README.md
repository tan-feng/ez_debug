In my ten years of programming, I am absolutely convinced that printing is always the simpliest and the most powerful way
of debugging and trouble-shooting for most applications in most senarios, especially 
for a sophiscated procedure in production environment.

Direct calling printf()s is NOT what we want, so there we can see thousands of macros like #define my_debug(...).

But this is NOT just another macro, but maybe the right one that you have been wanting.

This wrapper has the following in mind:
1) Debugging prints are built in the app, ready to be turned on/off on-the-fly whenever the developer wants;
2) Outputs have detail about the debugging point(file name,line number, etc.), and the destination can be the console or a disk file as well;
3) Can work well with apps in both front and background(daemon) modes;
4) Keep light and Stay simple, one single header file only: easy for coding, easy for controlling


HOW TO USE:
1) Put a line of #include "ez_debug.h" in your C file, and then
add 

ez_debug(...) 

before or after any lines which may help the trouble-shooting.

2) Compile your app, upload the executable file (e.g. demo) onto the running system, 

to turn on the debugging,
run 

export EZ_DEBUG=1 

or 
export demo=1

before launching your app(e.g. demo).
to write debugging messages onto a file instead onto the console, 
run
export EZ_DEBUG_FILE=1

to turn off the debugging, 
run
unset EZ_DEBUG
or
unset demo

then kill and re-launch the app.




Enjoy.

Felix Tan

