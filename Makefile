# DIRPATH is root directory of program
DIRPATH=.
# DIRPATH=.\..\bin\kata
BINPATH=.\bin
OBJPATH=.\obj

FILENAME=test

### app file ending ###
# NMAKE code here \
!ifndef 0 # \  
EXE_FILETYPE=.exe # \
!else
# Make code here 
EXE_FILETYPE=#
#
!endif

INCL= 
CC=gcc
CFLAGS= #-I $(INCL)



FILEBIN=$(OBJPATH)\$(FILENAME).o
CFILE=$(DIRPATH)\$(FILENAME).c
FILE_EXE=$(BINPATH)\$(DIRPATH)\$(FILENAME)$(EXE_FILETYPE)

SOURCES = $(CFILE)
HEADERS = 
APPS = $(FILE_EXE)


OBJNAME=
OBJDIRPATH=.
OBJBIN=#$(DIRPATH)\$(OBJDIRPATH)\$(OBJNAME).o
OBJ=#$(OBJPATH)\$(OBJNAME)

# SOURCES += 
# HEADERS += 
OBJECTS = 
# APPS += 

# SOURCES += 
# HEADERS += 
# OBJECTS += 
# APPS += 


# Code below should allow nmake and make to operate successfully
# NMAKE code here \
!ifndef 0 # \  
MV=move # \
RM=del # \
CP=copy # \
!else
# Make code here 
MV=mv -f # 
RM=rm -f # 
CP=cp -f # 
# 
!endif



MAKE: $(FILEBIN) $(OBJECTS)
  $(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
#  gcc test.o -o test.exe 
  nmake clean_up

$(FILEBIN): $(CFILE)
  $(CC) $(CFLAGS) -c $(CFILE) -o $(FILEBIN)

$(CFILE):
  @echo off
  echo This Makefile builds other Makefiles because variables hurt > README
  echo >> README
  echo >> Note blankmake files are unbuilt makefiles that are copied as the Makefile. >>README
  echo >> There may be staged build out for some makefiles, but they should be self contained >> README
  echo >> so that you can build a file with only nmake or make commands. >> README
  @echo on
  echo ^# include ^<stdio.h^> > $(FILENAME).c
  echo int main() >> $(FILENAME).c
  echo { >> $(FILENAME).c
  echo printf("Hello World!"); >> $(FILENAME).c
  echo return 0; >> $(FILENAME).c
  echo } >> $(FILENAME).c

clean :
  $(RM) $(APPS)

clean_up:
  $(RM) $(FILEBIN) $(OBJECTS) $(SOURCES) 
