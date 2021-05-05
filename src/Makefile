##### CONSTANT BOILER PLATE #######
DIRPATH=.
BINPATH=.\..\bin
OBJPATH=.\..\obj

FILENAME=kata


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
FILE_EXE=$(BINPATH)\$(FILENAME)$(EXE_FILETYPE)

SOURCES = $(CFILE)
HEADERS =  
APPS = $(FILE_EXE)

##### VARYING FILE BOILER PLATE #######
OBJ1PATH=$(DIRPATH)\OOP
OBJ1NAME=oop
OBJ1SRC=$(OBJ1PATH)\$(OBJ1NAME).c
OBJ1HDR=$(OBJ1PATH)\$(OBJ1NAME).h
OBJ1=$(OBJPATH)\$(OBJ1NAME).o

SOURCES = $(SOURCES) $(OBJ1SRC)
HEADERS = $(HEADERS) $(OBJ1HDR)
OBJECTS = $(OBJECTS) $(OBJ1)
OBJSRCS = $(SOURCES) $(OBJ1SRC)
OBJBUILDS = 1


OBJ2PATH=$(DIRPATH)\FunctionalProgramming
OBJ2NAME=func_prog
OBJ2SRC=$(OBJ2PATH)\$(OBJ2NAME).c
OBJ2HDR=$(OBJ2PATH)\$(OBJ2NAME).h
OBJ2=$(OBJPATH)\$(OBJ2NAME).o

SOURCES = $(SOURCES) $(OBJ2SRC)
HEADERS = $(HEADERS) $(OBJ2HDR)
OBJECTS = $(OBJECTS) $(OBJ2)
OBJSRCS = $(SOURCES) $(OBJ1SRC)
OBJBUILDS = $(OBJBUILDS) 2



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



##### CONSTANT BUILD #######
MAKE: $(FILEBIN) $(OBJECTS)
  $(MAKE_CALL) build
  $(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
  $(MAKE_CALL) clean_up

MAKE_OBJ: $(FILEBIN) $(OBJECTS)
  $(MAKE_CALL) build
  $(CC) $(CFLAGS) -c $(CFILE) -o $(FILEBIN)

$(FILEBIN): $(CFILE)
  $(CC) $(CFLAGS) -c $(CFILE) -o $(FILEBIN)
  $(MAKE_CALL) BUILD_OBJ

build:
  $(CP) blankmake Makefile
  FOR %%i IN ($(OBJBUILDS))\
    DO \
      @echo( $(CC) $(CFLAGS) -c $$(OBJ%%iSRC) -o $$(OBJ%%i) >> Makefile

run:
  ($(FILE_EXE))

clean:
  $(RM) $(APPS)

clean_up:
  $(RM) $(FILEBIN) $(OBJECTS)

clean_all:
  $(MAKE_CALL) clean_up
  $(MAKE_CALL) clean

BUILD_OBJ:
  @echo building...
#####  VARIABLE BUILD  #####
 gcc -c $(OBJ1SRC) -o $(OBJ1) 
 gcc -c $(OBJ2SRC) -o $(OBJ2) 
