# Sample Makefile for Linux and Mac OS X

SHELL    = /bin/sh
DEFINES  = -DLINUX_X11
CFLAGS   = -Wall $(DEFINES) -O3 -fomit-frame-pointer -ffast-math
CPP      = g++
SH       = /bin/sh
LDFLAGS	 = 
LD       = g++
STRIP    = strip
RM       = /bin/rm -f
INCLUDES = -I/usr/local/include -I/usr/include
LIBS     = -lm -L/usr/local/lib -L/usr/lib -lpng -lSDL2 -L../libappframework/lib -lappframework -L../libmuli3d/lib -lmuli3d
CTARGETS = main.cpp mycamera.cpp app.cpp fractal.cpp
OTARGETS = $(CTARGETS:.cpp=.o)
EXECUTABLE  = mandelbrot

$(EXECUTABLE): $(OTARGETS)
	$(LD) $(LDFLAGS) $(OTARGETS) $(LIBS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CPP) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(EXECUTABLE) $(OTARGETS)
