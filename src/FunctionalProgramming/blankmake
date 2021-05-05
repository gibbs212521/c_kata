##### CONSTANT BOILER PLATE #######
DIRPATH=.
BINPATH=.\..\..\bin
OBJPATH=.\..\..\obj

FILENAME=func_prog


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



SOURCES = 
HEADERS = 
APPS = 

FILEBIN=$(OBJPATH)\$(FILENAME).o
CFILE=$(DIRPATH)\$(FILENAME).c
FILE_EXE=$(BINPATH)\$(FILENAME)$(EXE_FILETYPE)

SOURCES = $(SOURCES) $(CFILE)
HEADERS = $(HEADERS) 
APPS = $(APPS) $(FILE_EXE)

OBJBUILDS =

##### VARYING FILE BOILER PLATE #######
OBJ1PATH=
OBJ1NAME=
OBJ1SRC=
OBJ1HDR=
OBJ1=

SOURCES = $(SOURCES) $(OBJ1SRC)
HEADERS = $(HEADERS) $(OBJ1HDR)
OBJECTS = $(OBJECTS) $(OBJ1)
OBJSRCS = $(SOURCES) $(OBJ1SRC)
OBJBUILDS = #$(OBJBUILDS) 1


OBJ2PATH=
OBJ2NAME=
OBJ2SRC=
OBJ2HDR=
OBJ2=

SOURCES = $(SOURCES) $(OBJ2SRC)
HEADERS = $(HEADERS) $(OBJ2HDR)
OBJECTS = $(OBJECTS) $(OBJ2)
OBJSRCS = $(SOURCES) $(OBJ1SRC)
OBJBUILDS = #$(OBJBUILDS) 2



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



##### CONSTANT BUILD #######
MAKE: $(FILEBIN) $(OBJECTS)
  nmake build
  $(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
  nmake clean_up

MAKE_OBJ: $(FILEBIN) $(OBJECTS)
  nmake build
  $(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)

fast: $(FILEBIN) $(OBJECTS)
  $(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
  nmake clean_up

$(FILEBIN): $(CFILE)
  $(CC) -c $(CFLAGS) $(CFILE) -o $(FILEBIN)
  nmake BUILD_OBJ

build:
  $(CP) blankmake Makefile
  FOR %%i IN ($(OBJBUILDS))\
    DO \
      @echo( $$(CC) $$(CFLAGS) -c $$(OBJ%%iSRC) -o $$(OBJ%%i) >> Makefile

clean:
  $(RM) $(APPS)

clean_up:
  $(RM) $(FILEBIN) $(OBJECTS)

clean_all:
  nmake clean_up
  nmake clean
  
BUILD_OBJ: 
  @echo building...
#####  VARIABLE BUILD  #####
