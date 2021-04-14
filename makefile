PROJ_NAME = contact
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/add_contact.c src/delete_contact.c src/modify_contact.c src/exit.c src/func_list.c  src/login.c src/mainmenu.c src/Search_contact.c src/main.c 

TEST_SRC =  src/add_contact.c src/delete_contact.c src/modify_contact.c src/exit.c src/func_list.c  src/login.c src/mainmenu.c src/Search_contact.c  test/testt.c unity/unity.c

INC = -I inc -I unity
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc $(INC)  $(SRC)  -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))


coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)


staticcheck:
	cppcheck --enable=all .


codesize:
	size $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o test.$(EXEC)
	./test.$(EXEC)
valgrind:
	valgrind ./test.$(EXEC)
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.gcov 
	$(RM) *.gcda
	$(RM) *.gcno