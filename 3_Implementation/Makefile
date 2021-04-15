# Name of the project
PROJECT_NAME = ARS

# Output directory
BUILD = build

# All source code files
SRC = src/worldtime.c\
src/currency.c\
src/displaycity.c\
main.c\

# All test source files
TEST_SRC = src/worldtime.c\
src/currency.c\
src/displaycity.c\
test/test.c\
unity/unity.c\

# All include folders with header files
INC	= inc/worldtime.h\
inc/currency.h\
unity/unity.h\
unity/unity_internals.h\

INC	= -Iinc\
-Iunity\

# Project Output name
PROJECT_OUTPUT= $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
