DIRPATH=.\..\bin\Tests\Tutorials
FILEPATH=$(DIRPATH)\test_text.exe

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

test_text.o: test_text.c
  gcc -c test.c -o test.o


clean all:
  $(RM) test.o
  $(RM) $(FILEPATH)
