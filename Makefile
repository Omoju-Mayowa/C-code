CC = gcc
CFLAGS = -Wall -Wextra -std=c11
BUILD_DIR = build

# Find all .c files inside src and sandbox
SRC = $(shell find src sandbox -name "*.c")

# Convert: src/file.c -> build/src/file
TARGETS = $(patsubst %.c,$(BUILD_DIR)/%,$(SRC))

all: $(TARGETS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile each .c file into build/, preserving folder structure
$(BUILD_DIR)/%: %.c | $(BUILD_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

# Run a specific program
# Example:
# make run PROGRAM=src/pizza
run: all
	./$(BUILD_DIR)/$(PROGRAM)

clean:
	rm -rf $(BUILD_DIR)