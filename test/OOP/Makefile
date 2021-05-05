DIRPATH=.\..\bin
FILEPATH=$(DIRPATH)\test.exe
#$(SOMETHING) = 1,2,3,4
TEST_STR = 0

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

MAKE: test.o
  gcc test.o -o $(FILEPATH)

test.o: test.c
  gcc -c test.c -o test.o

test.c:
	FOR %%A IN (1 2 3) DO \
	SET VAR1=%VAR1%%%A \
	SET VAR2=%VAR2%%%A \
	echo %%A
#	@echo off
#	FOR %%i in ($(SOMETHING)) do echo %%i 1 && echo %%i 2 && echo %%i 3
#    FOR /F "tokens=4 delims=," %%G IN ("deposit,$4500,123.4,12-AUG-09") \#
    FOR /F "tokens=4 delims=," %%G IN ("deposit,$4500,123.4,12-AUG-09") \
    DO \
	echo TEST_STR=%%G
	echo $(TEST_STR)
#	echo %%G
#	$(TEST_STR) = "test"
#    echo Date paid %%G echo 123
#	@echo on
  echo int main() > test.c
  echo { >> test.c
  echo strcpy(food, "BACON!"); >> test.c
  echo printf("This is the best food ever, %%s.  It was assigned with the string copy (strcpy) command.\n", food); >> test.c
  echo return 0; >> test.c
  echo } >> test.c

clean all:
  $(RM) test.c
  $(RM) test.o
  $(RM) $(FILEPATH)
