### app file ending ###
# $(MAKE_CALL) code here 
ifndef 0 # \	
EXE_FILETYPE:=.exe # \
FD:=\# \
else
# Make code here 
EXE_FILETYPE:=# 
FD:=/#
#
endif

##### CONSTANT BOILER PLATE #######
DIRPATH:=.$(FD)..$(FD)src
BINPATH:=.$(FD)..$(FD)bin
OBJPATH:=.$(FD)..$(FD)obj
TESTDIR:=.$(FD)..$(FD)test
TEST_BINPATH:=$(TESTDIR)$(FD)bin
TEST_OBJPATH:=$(TESTDIR)$(FD)obj

FILENAME:=kata
TESTNAME:=kata_test



INCL:= 
CC:=gcc
CFLAGS:= #-I $(INCL)


TESTBIN:=$(TEST_OBJPATH)$(FD)$(TESTNAME).o
CTEST:=$(TESTDIR)$(FD)$(TESTNAME).c
TEST_EXE:=$(TEST_BINPATH)$(FD)$(TESTNAME)$(EXE_FILETYPE)

SOURCES := $(CTEST)
HEADERS := 
APPS := $(TEST_EXE)

FILEBIN:=$(OBJPATH)$(FD)$(FILENAME).o
CFILE:=$(DIRPATH)$(FD)$(FILENAME).c
FILE_EXE:=$(BINPATH)$(FD)$(FILENAME)$(EXE_FILETYPE)

SOURCES := $(SOURCES) $(CFILE)
HEADERS := $(HEADERS) 
APPS := $(APPS) $(FILE_EXE)


##### VARYING FILE BOILER PLATE #######
OBJ1PATH:=$(DIRPATH)$(FD)OOP
OBJ1NAME:=oop
OBJ1SRC:=$(OBJ1PATH)$(FD)$(OBJ1NAME).c
OBJ1HDR:=$(OBJ1PATH)$(FD)$(OBJ1NAME).h
OBJ1:=$(OBJPATH)$(FD)$(OBJ1NAME).o

SOURCES := $(SOURCES) $(OBJ1SRC)
HEADERS := $(HEADERS) $(OBJ1HDR)
OBJECTS := $(OBJECTS) $(OBJ1)
OBJSRCS := $(SOURCES) $(OBJ1SRC)
OBJBUILDS := $(OBJBUILDS) 1


OBJ2PATH:=$(DIRPATH)$(FD)FunctionalProgramming
OBJ2NAME:=func_prog
OBJ2SRC:=$(OBJ2PATH)$(FD)$(OBJ2NAME).c
OBJ2HDR:=$(OBJ2PATH)$(FD)$(OBJ2NAME).h
OBJ2:=$(OBJPATH)$(FD)$(OBJ2NAME).o

SOURCES := $(SOURCES) $(OBJ2SRC)
HEADERS := $(HEADERS) $(OBJ2HDR)
OBJECTS := $(OBJECTS) $(OBJ2)
OBJSRCS := $(SOURCES) $(OBJ1SRC)
OBJBUILDS := $(OBJBUILDS) 2



CLASS1DIR:=$(OBJ1PATH)$(FD)classes

OBJ3PATH:=$(CLASS1DIR)
OBJ3NAME:=Statistics
OBJ3SRC:=$(CLASS1DIR)$(FD)$(OBJ3NAME).c
OBJ3HDR:=$(CLASS1DIR)$(FD)$(OBJ3NAME).h
OBJ3:=$(OBJPATH)$(FD)$(OBJ3NAME).o

SOURCES := $(SOURCES) $(OBJ3SRC)
HEADERS := $(HEADERS) $(OBJ3HDR)
OBJECTS := $(OBJECTS) $(OBJ3)
OBJSRCS := $(SOURCES) $(OBJ3SRC)
OBJBUILDS := $(OBJBUILDS) 3


OBJ4PATH:=$(CLASS1DIR)
OBJ4NAME:=Book
OBJ4SRC:=$(CLASS1DIR)$(FD)$(OBJ4NAME).c
OBJ4HDR:=$(CLASS1DIR)$(FD)$(OBJ4NAME).h
OBJ4:=$(OBJPATH)$(FD)$(OBJ4NAME).o

SOURCES := $(SOURCES) $(OBJ4SRC)
HEADERS := $(HEADERS) $(OBJ4HDR)
OBJECTS := $(OBJECTS) $(OBJ4)
OBJSRCS := $(SOURCES) $(OBJ4SRC)
OBJBUILDS := $(OBJBUILDS) 4


OBJ5PATH:=$(CLASS1DIR)
OBJ5NAME:=MemBook
OBJ5SRC:=$(CLASS1DIR)$(FD)$(OBJ5NAME).c
OBJ5HDR:=$(CLASS1DIR)$(FD)$(OBJ5NAME).h
OBJ5:=$(OBJPATH)$(FD)$(OBJ5NAME).o

SOURCES := $(SOURCES) $(OBJ5SRC)
HEADERS := $(HEADERS) $(OBJ5HDR)
OBJECTS := $(OBJECTS) $(OBJ5)
OBJSRCS := $(SOURCES) $(OBJ5SRC)
OBJBUILDS := $(OBJBUILDS) 5



CLASS2DIR:=$(OBJ1PATH)$(FD)MyClasses

OBJ6PATH:=$(CLASS2DIR)
OBJ6NAME:=AuxClass
OBJ6SRC:=$(CLASS2DIR)$(FD)$(OBJ6NAME).c
OBJ6HDR:=$(CLASS2DIR)$(FD)$(OBJ6NAME).h
OBJ6:=$(OBJPATH)$(FD)$(OBJ6NAME).o

SOURCES := $(SOURCES) $(OBJ6SRC)
HEADERS := $(HEADERS) $(OBJ6HDR)
OBJECTS := $(OBJECTS) $(OBJ6)
OBJSRCS := $(SOURCES) $(OBJ6SRC)
OBJBUILDS := $(OBJBUILDS) 6


OBJ7PATH:=$(CLASS2DIR)
OBJ7NAME:=BaseClass
OBJ7SRC:=$(CLASS2DIR)$(FD)$(OBJ7NAME).c
OBJ7HDR:=$(CLASS2DIR)$(FD)$(OBJ7NAME).h
OBJ7:=$(OBJPATH)$(FD)$(OBJ7NAME).o

SOURCES := $(SOURCES) $(OBJ7SRC)
HEADERS := $(HEADERS) $(OBJ7HDR)
OBJECTS := $(OBJECTS) $(OBJ7)
OBJSRCS := $(SOURCES) $(OBJ7SRC)
OBJBUILDS := $(OBJBUILDS) 7


OBJ8PATH:=$(CLASS2DIR)
OBJ8NAME:=SomeClass
OBJ8SRC:=$(CLASS2DIR)$(FD)$(OBJ8NAME).c
OBJ8HDR:=$(CLASS2DIR)$(FD)$(OBJ8NAME).h
OBJ8:=$(OBJPATH)$(FD)$(OBJ8NAME).o

SOURCES := $(SOURCES) $(OBJ8SRC)
HEADERS := $(HEADERS) $(OBJ8HDR)
OBJECTS := $(OBJECTS) $(OBJ8)
OBJSRCS := $(SOURCES) $(OBJ8SRC)
OBJBUILDS := $(OBJBUILDS) 8



##### VARYING FILE BOILER PLATE #######
TST_OBJ0PATH:=$(TESTDIR)
TST_OBJ0NAME:=test
TST_OBJ0SRC:=$(TST_OBJ0PATH)$(FD)$(TST_OBJ0NAME).c
TST_OBJ0HDR:=$(TST_OBJ0PATH)$(FD)$(TST_OBJ0NAME).h
TST_OBJ0:=$(TEST_OBJPATH)$(FD)$(TST_OBJ0NAME).o

SOURCES := $(SOURCES) $(TST_OBJ0SRC)
HEADERS := $(HEADERS) $(TST_OBJ0HDR)
TST_OBJECTS := $(TST_OBJ0)
OBJSRCS := $(SOURCES) $(TST_OBJ0SRC)
TST_OBJBUILDS := 0


TST_OBJ1PATH:=$(TESTDIR)$(FD)OOP
TST_OBJ1NAME:=test_$(OBJ1NAME)
TST_OBJ1SRC:=$(TST_OBJ1PATH)$(FD)$(TST_OBJ1NAME).c
TST_OBJ1HDR:=$(TST_OBJ1PATH)$(FD)$(TST_OBJ1NAME).h
TST_OBJ1:=$(TEST_OBJPATH)$(FD)$(TST_OBJ1NAME).o

SOURCES := $(SOURCES) $(TST_OBJ1SRC)
HEADERS := $(HEADERS) $(TST_OBJ1HDR)
TST_OBJECTS := $(TST_OBJECTS) $(TST_OBJ1)
OBJSRCS := $(SOURCES) $(TST_OBJ1SRC)
TST_OBJBUILDS := $(TST_OBJBUILDS) 1


TST_OBJ2PATH:=$(TESTDIR)$(FD)FunctionalProgramming
TST_OBJ2NAME:=test_$(OBJ2NAME)
TST_OBJ2SRC:=$(TST_OBJ2PATH)$(FD)$(TST_OBJ2NAME).c
TST_OBJ2HDR:=$(TST_OBJ2PATH)$(FD)$(TST_OBJ2NAME).h
TST_OBJ2:=$(TEST_OBJPATH)$(FD)$(TST_OBJ2NAME).o

SOURCES := $(SOURCES) $(TST_OBJ2SRC)
HEADERS := $(HEADERS) $(TST_OBJ2HDR)
TST_OBJECTS := $(TST_OBJECTS) $(TST_OBJ2)
OBJSRCS := $(SOURCES) $(TST_OBJ2SRC)
TST_OBJBUILDS := $(TST_OBJBUILDS) 2



# Code below should allow $(MAKE_CALL) and make to operate successfully
# $(MAKE_CALL) code here \
!ifndef 0# \
MV = move # \
RM=del # \
RMDIR=del # \
CP=copy # \
MAKE_CALL=nmake # \
!else
ifeq (0,0) #
# Make code here 
MV=mv -f # 
RM=rm -f #
RMDIR=rm -rf
CP=cp -f # 
MAKE_CALL=make #
endif #
# \
!endif 



##### CONSTANT BUILD #######
MAKE: $(FILEBIN) $(TESTBIN) $(OBJECTS) $(TST_OBJECTS)
	$(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
	$(CC) $(CFLAGS) $(TESTBIN) $(OBJECTS) $(TST_OBJECTS) -o $(TEST_EXE)
	$(MAKE_CALL) clean_up

MAKE_OBJ: $(FILEBIN) $(TESTBIN) $(OBJECTS)
	$(CC) $(CFLAGS) $(FILEBIN) $(OBJECTS) -o $(FILE_EXE)
	$(CC) $(CFLAGS) $(TESTBIN) $(OBJECTS) -o $(TEST_EXE)

fast: $(TESTBIN) $(OBJECTS)
	$(CC) $(CFLAGS) $(TESTBIN) $(OBJECTS) -o $(TEST_EXE)
	$(MAKE_CALL) clean_up

$(FILEBIN): $(CFILE)
	$(MAKE_CALL) BUILD_DIR
	$(MAKE_CALL) build
	$(CC) -c $(CFLAGS) $(CFILE) -o $(FILEBIN)

$(TESTBIN): $(CTEST)
	$(MAKE_CALL) build
	$(MAKE_CALL) BUILD_OBJ
	$(CC) -c $(CFLAGS) $(CTEST) -o $(TESTBIN)

build::
	$(CP) blankmake Makefile
#	$(MAKE_CALL) code here \
ifeq (0,0) # \
	FOR %%i IN ($(OBJBUILDS))\
		DO \
		@echo(	$$(CC) $$(CFLAGS) -c $$(OBJ%%iSRC) -o $$(OBJ%%i) >> Makefile # \
	FOR %%i IN ($(TST_OBJBUILDS))\
		DO \
		@echo(	$$(CC) $$(CFLAGS) -c $$(TST_OBJ%%iSRC) -o $$(TST_OBJ%%i) >> Makefile # \
else
ifeq (1,1) #
	@echo this is a test #
	for num in $(OBJBUILDS); do \
		echo "	"$$"(CC)" $$"(CFLAGS)" -c $$"(OBJ"$${num}"SRC)" -o $$"(OBJ"$${num}")" >> Makefile;\
		done #
	for num in $(TST_OBJBUILDS); do \
		echo "	"$$"(CC)" $$"(CFLAGS)" -c $$"(TST_OBJ"$${num}"SRC)" -o $$"(TST_OBJ"$${num}")" >> Makefile;\
		done #
#		$(foeach var,$(OBJBUILDS),@echo	$$(CC) $$(CFLAGS) -c $$(OBJ%%iSRC) -o $$(OBJ%%i) >> Makefile;) #
endif

run:
	($(FILE_EXE))

test:
	($(TEST_EXE))

clean:
	$(RM) $(APPS)
	$(RMDIR) $(BINPATH) $(TEST_BINPATH)

clean_up:
	$(RM) $(FILEBIN) $(TESTBIN) $(OBJECTS) $(TST_OBJECTS)
	$(RMDIR) $(OBJPATH) $(TEST_OBJPATH)

clean_all:
	$(MAKE_CALL) clean_up
	$(MAKE_CALL) clean

BUILD_DIR:
	mkdir $(BINPATH)
	mkdir $(OBJPATH)
	mkdir $(TEST_BINPATH)
	mkdir $(TEST_OBJPATH)
	
BUILD_OBJ:
	@echo building...
#####	VARIABLE BUILD	#####
	$(CC) $(CFLAGS) -c $(OBJ1SRC) -o $(OBJ1)
	$(CC) $(CFLAGS) -c $(OBJ2SRC) -o $(OBJ2)
	$(CC) $(CFLAGS) -c $(OBJ3SRC) -o $(OBJ3)
	$(CC) $(CFLAGS) -c $(OBJ4SRC) -o $(OBJ4)
	$(CC) $(CFLAGS) -c $(OBJ5SRC) -o $(OBJ5)
	$(CC) $(CFLAGS) -c $(OBJ6SRC) -o $(OBJ6)
	$(CC) $(CFLAGS) -c $(OBJ7SRC) -o $(OBJ7)
	$(CC) $(CFLAGS) -c $(OBJ8SRC) -o $(OBJ8)
	$(CC) $(CFLAGS) -c $(TST_OBJ0SRC) -o $(TST_OBJ0)
	$(CC) $(CFLAGS) -c $(TST_OBJ1SRC) -o $(TST_OBJ1)
	$(CC) $(CFLAGS) -c $(TST_OBJ2SRC) -o $(TST_OBJ2)
