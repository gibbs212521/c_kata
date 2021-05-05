# DIRPATH is root directory of program
DIRPATH=.
SRCPATH=.\src
TSTPATH=.\test
# DIRPATH=.\..\bin\kata
BINPATH=.\bin
OBJPATH=.\obj

FILENAME=test

### app file ending ###
# $(MAKE_CALL) code here \
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

OOPDIR = OOP
FPGDIR = FunctionalProgramming

MAKEDIRS = $(SRCPATH)
MAKEDIRS = $(MAKEDIRS) $(SRCPATH)\$(OOPDIR)
MAKEDIRS = $(MAKEDIRS) $(SRCPATH)\$(FPGDIR)

MAKEDIRS = $(MAKEDIRS) $(TSTPATH)
MAKEDIRS = $(MAKEDIRS) $(TSTPATH)\$(OOPDIR)
MAKEDIRS = $(MAKEDIRS) $(TSTPATH)\$(FPGDIR)


# Code below should allow $(MAKE_CALL) and make to operate successfully
# $(MAKE_CALL) code here \
!ifndef 0 # \  
MV=move # \
RM=del # \
CP=copy # \
MAKE_CALL=nmake # \
!else
# Make code here 
MV=mv -f # 
RM=rm -f # 
CP=cp -f # 
MAKE_CALL=make #
# 
!endif



MAKE: $(FILEBIN) $(OBJECTS)
  $(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
#  gcc test.o -o test.exe 
  $(MAKE_CALL) clean_up

$(FILEBIN): $(CFILE)
  $(CC) $(CFLAGS) -c $(CFILE) -o $(FILEBIN)

$(CFILE):
  @echo off
  echo This Makefile builds other Makefiles because variables hurt > README
  echo >> README
  echo >> Note blankmake files are unbuilt makefiles that are copied as the Makefile. >>README
  echo >> There may be staged build out for some makefiles, but they should be self contained >> README
  echo >> so that you can build a file with only $(MAKE_CALL) or make commands. >> README
  @echo on
  echo ^# include ^<stdio.h^> > $(FILENAME).c
  echo int main() >> $(FILENAME).c
  echo { >> $(FILENAME).c
  echo printf("Hello World!"); >> $(FILENAME).c
  echo return 0; >> $(FILENAME).c
  echo } >> $(FILENAME).c

build:
  FOR %%i IN ($(MAKEDIRS))\
    DO \
    ( cd %%i && $(MAKE_CALL) build )
  
  

clean :
  $(RM) $(APPS)

clean_up:
  $(RM) $(FILEBIN) $(OBJECTS) $(SOURCES) 
