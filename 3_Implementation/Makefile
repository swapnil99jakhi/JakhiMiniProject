# Name of the project
PROJECT_NAME = ARS

# Output directory
BUILD = build

# All source code files
SRC= src/worldtime.c\
src/currency.c\
src/displaycity.c\
main.c\

TEST_SRC = src/currency.c\
src/worldtime.c\
test/test.c\
unity/unity.c\

# All include folders with header files
INC	= inc/worldtime.h\
inc/currency.h\
unity/unity.h\
unity/unity_internals.h\

INC1	= -Iinc\
-Iunity\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# Project Output name
PROJECT_OUTPUT= $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

INCLUDE_LIBS = -lcunit

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

test:$(BUILD)
	gcc $(TEST_SRC) $(INC1) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)



# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
